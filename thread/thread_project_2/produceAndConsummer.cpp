#include<iostream>
#include<thread>
#include<mutex>
#include<string>
#include<condition_variable>
#include<queue>


std::queue<int> q_queue;
std::condition_variable g_cv;
std::mutex mtx;


void Producer() {
    for ( int i = 0; i < 10; i++){
        {        
            std::unique_lock<std::mutex> lock(mtx);
            q_queue.push(i);
            g_cv.notify_one();
            printf("task : %d\n" , i);
        }
       
    }

    std::this_thread::sleep_for(std::chrono::microseconds(100));
}


void Consummer() {
    while (1) {
        std::unique_lock<std::mutex> lock(mtx);
        g_cv.wait(lock, []() -> bool { return !q_queue.empty(); });     
        int value = q_queue.front();
        q_queue.pop();

        printf("Consummer %d\n", value);
    }
}

int main() {

    std::thread t1(Consummer);
    std::thread t2(Producer);
    t1.join();
    t2.join();

    return 0;
}


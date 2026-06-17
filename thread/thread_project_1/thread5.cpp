#pragma onece
#include<iostream>
#include<thread>
#include<mutex>
#include<string>

int a = 0;
std::mutex mtx;
void printNum(std::string str){
        for (int i = 0; i < 50; i++){
            // mtx.lock();
            a += i; 
            std::cout << str << std::endl;
            // mtx.unlock();
        }

}

// int main(){
//     // int a = 1;
//     std::thread t1(printNum, "t1");
//     std::thread t2(printNum, "t2");
//     t1.join();
//     t2.join();
//     std::cout << a << std::endl;

//     return 0;
// }
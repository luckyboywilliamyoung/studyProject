#include<iostream>
#include<thread>

void add(int& i ){
   
   i += 1;
}
    

// int main(){

//     int i = 1;
//     std::thread thread_1(add, std::ref(i));
//     bool isJoinable = thread_1.joinable();
//     if (isJoinable){
//         thread_1.join();
//     }

//     std::cout << i << std::endl;

//     return 0;
// }
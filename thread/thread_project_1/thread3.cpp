#include<iostream>
#include<thread>

void add(int* p ){
    
    ++*p;
   std::cout << p << std::endl;
   std::cout << *p << std::endl;
}
    

// int main(){

//     int* intPtr = new int(1);
//     std::cout << intPtr << std::endl;
//     std::thread thread_1(add, intPtr);
//     delete intPtr;
//     bool isJoinable = thread_1.joinable();
//     if (isJoinable){
//         thread_1.join();
//     }
//     std::cout << *intPtr << std::endl;
//     return 0;
// }  
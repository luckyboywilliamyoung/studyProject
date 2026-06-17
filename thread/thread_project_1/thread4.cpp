#include<iostream>
#include<thread>
#include<memory>

// class A{

// public:
//     void foo(){
//         std::cout << "hello" << std::endl;
//     }
// };

// int main(){

//     std::shared_ptr<A> a = std::make_shared<A>();
//     std::cout << A::foo << "......" << &A::foo << std::endl;
//     std::thread t(A::foo, a);
//     t.join();

//     return 0;
// }
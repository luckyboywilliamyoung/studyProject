#include <iostream>
#include <thread>

void printHelloWorld()
{
    std::cout << "hello world" << std::endl;
}

int main()
{

    std::thread thread_1(printHelloWorld);
    thread_1.join();

    return 0;
}

#pragma onece
#include<iostream>
using namespace std;

template<typename T>
class Test;

template<typename T>
class A
{
public:
    template<typename U>
    void friendFunc(Test<U> t){
        cout << "******私有成员变量" << endl;
        cout <<  t.data << endl;
    }
};


template<typename T>
class Test
{
friend class A<T>;
private:
    T data;
public:
    Test(T data): data(data) {}
};
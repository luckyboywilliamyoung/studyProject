#pragma once 
#include<iostream>
using namespace std;
template<typename T>
class Test;

template<typename T>
void printData(const Test<T>& t){
    
    cout << "Data" << t.data << endl;

}

template<typename T>
class Test{
private:
    T data;
public:
    Test(T data) : data(data){}
    friend void printData<T>(const Test<T>& t);

};
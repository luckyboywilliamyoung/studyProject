#pragma onece
#include<iostream>
#include"Test.h"

using namespace std;

int main(){

    Test<float> t(1.5);
    Test<int> t1(1);

    A<int> aInt;
    A<float> aFloat;
    aInt.friendFunc(t1);  

    aFloat.friendFunc(t); 
    return 0;
}
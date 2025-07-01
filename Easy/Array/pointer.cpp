#include<iostream>
using namespace std;

int main(){
    int var = 2;
    int a = 5;

    cout << var << endl;

    int *p = &var;

    cout << *p << endl;
    p = &a;

    cout << "var: " << var << endl;
    cout << "*p:" << *p << endl;
    return 0;
}
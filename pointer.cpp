#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* b=&a;
    //cout<<&a<<endl;
    cout<<b<<endl;
    // &=(address operator)
    // *=(derefernce operator) value of a variable
    cout<<*b;

//pointer of pointer
    //int** c=&b;
    //cout<<c<<endl;

    return 0;
}


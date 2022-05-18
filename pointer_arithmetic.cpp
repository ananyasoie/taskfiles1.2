#include<iostream>
using namespace std;

int main(){
    int array[4]={2,3,4,5};
 //int* x=&array[0];
//int* y=&array[3];
    //cout<<*array<<endl;
    //cout<<*y<<endl;
    int* ptr=array;
    for(int i=0;i<4;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}
//passing pointers to a function
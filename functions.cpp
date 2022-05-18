#include<iostream>
using namespace std;
//parameters: actual parameters(num1 and num2) while the formal parameters(a and b)
/*int sum(int a, int b){
    int c= a+b;
    return c;

}
int main(){
    //top down structured programming
    int num1, num2;
    cout<<"first number: "<<endl;
    cin>>num1;
    cout<<"second number: "<<endl;
    cin>>num2;
    cout<<"sum is: "<<sum(num1,num2);
    return 0;

}*/

//prototype:
int sum(int a,int b);
int main(){
    int num1=10;
    int num2=20;
    cout<<"first number: "<<num1<<endl;
    cout<<"second number: "<<num2<<endl;
    cout<<"sum is: "<<sum(num1,num2);
    return 0;

}
int sum(int a,int b){
    int c=a+b;
    return c;

}


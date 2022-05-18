#include<iostream>
using namespace std;
                                                     // FUNCTIONS
/*int sum(int a,int b){
    int c=a+b;
    return c;
}*/
               // main concept of prototype

/*int sum(int a,int b);
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

}*/


// call by value or reference
   
                                           //swaping  two numbers
 /*void swap(int a,int b){
     int temp=a;
     a=b;
     b=temp;     //this particular code doesnt change the values and it will be resolved using refernce(addressess of the values)

 }
 int main(){
     int num1=10,num2=100;
     cout<<"the given values are "<<num1<<" "<<num2<<endl;
     swap(num1,num2); //this swap has only copied the values of num and has passed onto int a and b
     cout<<"numbers after swapping "<<num1<<" "<<num2<<endl;
     return 0;

 }*/
                                        // use of calling by refernce(with pointers)

 /*void swapPointer(int* a,int* b){
     int temp=*a;
     *a=*b;
     *b=temp;
 }
 int main(){
     int num1=10,num2=100;
     cout<<"the given values are "<<num1<<" "<<num2<<endl;
     swapPointer(&num1,&num2); 
     cout<<"numbers after swapping "<<num1<<" "<<num2<<endl;
     return 0;

 }*/

                                        // use of refernce in c++ (only address)

void swaprefernce(int &a,int &b){
     int temp=a;
     a=b;
     b=temp;
 }
 int main(){
     int num1=10,num2=100;
     cout<<"the given values are "<<num1<<" "<<num2<<endl;
     swaprefernce(num1,num2);    //using refernce variable
     cout<<"numbers after swapping "<<num1<<" "<<num2<<endl;
     return 0;

 }



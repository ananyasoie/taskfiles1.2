#include<iostream>
using namespace std;
 
int main(){

    int marksarray[5]= {34,56,44,89,33};
    //int engmarks[4]= {70,75,80,66};
    //cout<<"english marks"<<endl;
    //cout<< engmarks[0]<<endl;
    //cout<< engmarks[1]<<endl;
    //cout<< engmarks[2]<<endl;
 //value of an array can be changes before printing 
    //engmarks[3]=55;
    //cout<< engmarks[3]<<endl;
    //cout<<"wth"<<endl;
    //cout<< marksarray[0]<<endl;
    //cout<< marksarray[1]<<endl;
    //cout<< marksarray[2]<<endl;
    //cout<< marksarray[3]<<endl;
    //cout<< marksarray[4]<<endl;

//looping in array
     for (int i=0;i<5;i++){
         cout<<"the value of marks "<<i<<" is "<<marksarray[i]<<endl;
     }
    return 0;
}
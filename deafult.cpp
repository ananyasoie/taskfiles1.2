#include<iostream>
using namespace std;

double cal_cost(double b_cost,double tax=0.06);
double cal_cost(double b_cost,double tax){
    return b_cost += (b_cost*tax);
}

int main(){
    double cost {0};
    cost=cal_cost(200.0);
   // cost=cal_cost(100.0,0.08);
    cout<<cost;

    return 0;
}
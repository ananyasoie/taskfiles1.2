#include<iostream>
#include<cmath>
using namespace std;

/*int main(){
    int n;
    cout<<"enter any number ";
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/

/*int main(){
    int n;
    cin>>n;
    int i=1;
    int val=1;

    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<val<<" ";
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;

}*/

                   //NUMBER PATTERN 1
/*int main(){
    int n,row,col,random;
    cout<<"enter the number: ";
    cin>>n;
    
    for(row=1;row<=n;row++){
        random=row;
        for(col=1;col<=row;col++){
            cout<<random;
            random++;     //imp
        }
        cout<<endl;
    }
    return 0;
  
}*/
                 //NUMBER PATTERN 2
/*int main(){
    int n,row,col,space,random;
    cout<<"enter the number: ";
    cin>>n;
    
    for(row=1;row<=n;row++){
        
        for(space=1;space<=n-row;space++){
            cout<<" ";
        }
        random=row;
        for(col=1;col<=row;col++){
            cout<<random;
            random=random+1;
        }
        cout<<endl;
    }
    return 0;
}*/

           //SUM OF EVEN ODD
/*int main(){
    int num,digit;
    cout<<"enter the number: ";
    cin>>num;

    int sumofeven=0;
    int sumofodd=0;

    for(;num>0;num=num/10){
        digit=num%10;
        if(digit%2==0){
            sumofeven=sumofeven+digit;
        }
        else{
            sumofodd=sumofodd+digit;
        }
    }
    cout<<"the sum of even number "<<sumofeven<<endl;
    cout<<"the sum of odd number "<<sumofodd<<endl;

    return 0;
}*/
          //total salary
/*int main(){
    int basic,totalsalary,final_total_salary;
    char grade;
    cin>>basic>>grade;

    int A=basic*0.20;
    int B=basic*0.50;
    int pf=basic*0.11; 

    totalsalary=basic+A+B-pf;

    if(grade=='A'){
        totalsalary=totalsalary+1700;
    }
    else if(grade=='B'){
        totalsalary=totalsalary+1500;
    }
    else{
        totalsalary=totalsalary+1300;
    }
    final_total_salary=totalsalary;
    cout<<final_total_salary;

    return 0;
} */ 

//now in float 

/*int main(){
    int basic;
    char grade;
    cin>>basic>>grade;

    float A=basic*0.20;
    float B=basic*0.50;
    float pf=basic*0.11; 

     float totalsalary=basic+A+B-pf;

    if(grade=='A'){
        totalsalary=totalsalary+1700;
    }
    else if(grade=='B'){
        totalsalary=totalsalary+1500;
    }
    else{
        totalsalary=totalsalary+1300;
    }
     int final_total_salary= round(totalsalary);
    cout<<final_total_salary;

    return 0;
}*/

/*--------------CHARACTER PATTERN----------------*/

//charpattern1
/* int main(){
     int num,row,col;
     cin>>num;
     for(row=1;row<=num;row++){
         for(col=1;col<=num;col++){
             char ch='A'+col-1;
             cout<<ch;
         }
         cout<<endl;
     }
     return 0;


 }*/
            //charpattern2
/*int main(){
     int num,row,col;
     cin>>num;
     for(row=1;row<=num;row++){
         char start ='A'+row-1;
         for(col=1;col<=num;col++){
             char ch=start+col-1;
             cout<<ch;
         }
         cout<<endl;
     }
     return 0;


 }*/

               //alpha pattern
/*int main(){
     int num,row,col;
     cin>>num;
     for(row=1;row<=num;row++){
         for(col=1;col<=row;col++){
             char ch='A'+row-1;
             cout<<ch;
         }
         cout<<endl;
     }
     return 0;


 }*/

                 //character pattern
/*int main(){
    int num,row,col;
    cin>>num;
    
    for(row=1;row<=num;row++){
        char start='A'+row-1;
        for(col=1;col<=row;col++){
            char ch=start+col-1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}*/
                    //INTERESTING PATTERN
/*int main(){
    char i,j;
    char first;
    cin>>first;
    char last;
    cin>>last;

    for(i=first;i>=last;i--){
        for(j=i;j<=first;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}*/
/*------with n as an only input*/


      //INVERTED PATTERN
/*int main(){
    int num,col,row;
    cin>>num;

    for(row=1;row<=num;row++){
        for(col=1;col<=num-row+1;col++){
            cout<<"x";
        }
        cout<<endl;
    }
    return 0;
}*/
/*int main(){
    int num,col,row;
    cin>>num;

    for(row=1;row<=num;row++){
        for(col=1;col<=num-row+1;col++){
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}*/

                  //INVERTED NUMBER PATTERN
/*int main(){            
    
    int num,col,row;
    cin>>num;

    for(row=1;row<=num;row++){
        int k=num-row+1;   //imp
        for(col=1;col<=k;col++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}*/
   
                 //





#include<iostream>
#include<math.h>
using namespace std;


void calculater(int& a, int& b, int opt){

    
    switch(opt){
        case 1:
        cout<<a+b;
        break;
        case 2:
        cout<<a-b;
        break;
        case 3:
        cout<<a*b;
        break;
        case 4:
        cout<<a/b;
        break;
        case 5:
        cout<<a%b;
        break;

    }
}

int main(){
    int a,b,cal;
    cout<<"Enetr the value of a= ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the operation to be performed : ";
    cout<<endl;
    cout<<"1-Addition, 2-Sustraction, 3-Multiplication, 4-Division, 5-Modulas";
    cout<<endl;
    cin>>cal;
    if(cal>=1 && cal<=5){
        cout<<"Enter the value of b= ";
        cin>>b;
        cout<<endl;
        calculater(a,b,cal);
        cout<<endl;
    }
    else{
        cout<<"error";
    }
    
    return 0;
}
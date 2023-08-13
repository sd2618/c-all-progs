//global varibale with same name as local variable resolution - scope resolution operator - :: 

#include<iostream>
using namespace std;
int c=45;

int main(){
    int a,b,c;
    cout<<"Enter value of number 1 ="<<endl;
    cin>>a;
    cout<<"Enter value of number 2 = "<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is = "<<c<<endl;
    cout<<"The global variable -c is = "<<::c;

}
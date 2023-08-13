#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<=12){
    
        cout<<"You are child";
    }
    if(age>12 && age<=18){
    
    cout<<"You are junior citizen";
    }
    if((age>18)&&(age<60)){
    
        cout<<"You are adult citizen";
    }
    if(age>60)
    {
        cout<<"You are senior citizen";
    }

    
}
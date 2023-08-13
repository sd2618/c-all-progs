#include <iostream>
using namespace std;

int main(){
    int n,s=0,a,r;
    cout<<"Enter a number"<<endl;
    cin>>n;
    s=n;
    while(s>=10){
        a=s;
        s=0;
        while(a!=0){
            r=a%10;
            s=s+r;
            a=a/10;


        }

    }
    if(s==1){
        cout<<"The number"<<n<<"is a magic number";

    }
    else{
        cout<<"The number"<<n<<"is not a magic number";

    }
}


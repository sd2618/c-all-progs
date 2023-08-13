#include <iostream>
using namespace std;

int main(){
    int n,s=0,r,m;
    cout<<"Enter a number"<<endl;
    cin>>n;
    m=n;
    while(n!=0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(s==m)
    cout<<"The number is niven number";
    else
    cout<<"The number is not niven number";


}
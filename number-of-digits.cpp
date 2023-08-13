#include <iostream>
using namespace std;

int main(){
    int n,s=0,r;
    cout<<"Enter a number";
    cin>>n;
    while(n!=0){
        r=n%10;
        s++;
        n=n/10;
    }
    cout<<"Number of digits is="<<s;


}
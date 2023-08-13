#include <iostream>
using namespace std;

int main()
{
    int n,a,r,s=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    a=n;
    while (a!=0){
        r=a%10;
        s=s+r*r*r;
        a=a/10;

    }
    if (s==n){
     cout<<"The number"<<n<<" is armstrong number";
    }
    else{
        cout<<"The number"<<n<<"is not an armstrong number";

    }
}
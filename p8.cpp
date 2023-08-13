#include<iostream>
using namespace std;

int main(){
    for (int i=1;i<=10;i++)
    {
        cout<<i<<endl;
        if(i==6){
            cout<<"i has reached value 6";
            break;

        }
    }
    for(int i=1;i=10;i++)
    {
        if(i==6){
            cout<<"i has reached value 6";
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}
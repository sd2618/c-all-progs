#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i;j<4;j++){
            cout<<" ";
        }
        for(j=4;j>=4-i;j--){
            cout<<"*";
        }
        cout<<endl;
    }

}

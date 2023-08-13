#include <iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5},w[5],i,d=2,c=d,n=5;
    for(i=0;i<n;i++){
        if (d!=0){
            w[n-d]=a[i];
            d--;
        }
        else{
            w[i-c]=a[i];
        }
    }
    cout<<"Changed array"<<endl;
    for(i=0;i<n;i++){
        cout<<w[i]<<" ";
    }


}
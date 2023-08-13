#include <iostream>
using namespace std;

void combo(int a[],int k,int n){
    int i,j;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
        for(j=0;j<k;j++){
            if (i==(i+j)){
                continue;
            }
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int k,n=4;
    int a[4]={1,2,3,4};
    cout<<"Enter number of combinations to be made from array="<<endl;
    cin>>k;
    combo(a,k,n);
}
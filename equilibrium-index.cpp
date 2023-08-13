#include <iostream>

using namespace std;

int main(){
    int i,j,k,s1=0,s2=0,a[7]={5,4,3,7,2,10,21},n=7;
    for(i=1;i<n-1;i++){
        s1=0;s2=0;
        for(j=0;j<i;j++){
            s1+=a[j];
        }
        for(k=i+1;k<n;k++){
            s2+=a[k];
        }
        if(s1==s2){
            cout<<i<<endl;
        }

    }

}
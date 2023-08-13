#include <iostream>
using namespace std;
int main(){
    int i,j,k,a1[4]={4,7,19,16},a2[4],max,n=4,s=0,l;
    max=a1[0];
    for (i=1;i<n;i++){
        if(max<a1[i]){
            max=a1[i];
            j=i;

        }
    }

    
    for(i=0;i<n;i++){
        a2[i]=max-a1[i];
    }
    k=a2[0];
    for(i=0;i<n;i++){
        if(k>a2[i]){
            if (a2[i]==0){
                continue;
            }
            k=a2[i];
        }
    }
    cout<<k<<endl;

    for(i=0;i<n;i++){
        s=s+a2[i]/k;

        
    }
    cout<<s<<endl;
}

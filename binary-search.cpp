#include <iostream>
using namespace std;

int main(){
    int n,x,l,u,mid,a[20],i,j,t;
    std::cout<<"Enter the number of terms in array";
    std::cin>>n; 
    for(i=0;i<n;i++)
    {
        std::cout<<"Enter element="<<endl;
        std::cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (a[j]<a[i]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;

            }
        }
    }
        std::cout<<"sorted array"<<endl;
        for(i=0;i<n;i++){
            std::cout<<a[i]<<endl;
        }

    }
    l=0;
    u=n-1;
    std::cout<<"Enter the element to be searched="<<endl;
    std::cin>>x;
    while(l<=u){
        mid=(l+u)/2;
        if(a[mid]==x){
            std::cout<<"Element found at "<<mid+1;
            exit(0);
        }
        else if(a[mid]>x){
            u=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    std::cout<<"Element not found in the array";


}
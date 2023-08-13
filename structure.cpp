#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of employees"<<endl;
    cin>>n;
    struct employee{
    string name;
    int empid;
    float salary;
}a[20];
int i,avg,s=0;
cout<<"Enter employee details"<<endl;
for(i=0;i<n;i++){
    cout<<"Enter the name of employee"<<i+1<<"="<<endl;
    cin>>a[i].name;
    cout<<"Enter the employee id of employee"<<i+1<<"="<<endl;
    cin>>a[i].empid;
    cout<<"Enter the salary of employee"<<i+1<<"="<<endl;
    cin>>a[i].salary;
}
cout<<endl;
cout<<"Employee Name\tEmployee ID\tSalary"<<"\n\n";
for(i=0;i<n;i++){
    cout<<a[i].name<<"\t"<<a[i].empid<<"\t"<<a[i].salary<<endl;
    s=s+a[i].salary;

}
avg=s/n;
cout<<endl<<"The average salary of employee is = "<<avg;


}
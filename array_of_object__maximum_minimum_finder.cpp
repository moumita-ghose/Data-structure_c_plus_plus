#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
 
    for(int i=0;i<n;i++){
      
        cin>>a[i].name>>a[i].roll>>a[i].marks;
      
    }
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i].marks<mn){
            mn=a[i].marks;
        }
    }
    cout<<mn<<endl;

    Student mn2;
    mn2.marks = INT_MAX;
    for(int i=0;i<n;i++){
        if( a[i].marks  < mn2.marks ){
            mn2=a[i];
        }
    }

    cout<<mn2.name<<" "<<mn2.roll<<" "<<mn2.marks<<endl;
  
    cout<<"\nfind the max object"<<endl;
    Student mx;
    mx.marks = INT_MIN;
    for(int i=0;i<n;i++){
        if(mx.marks<a[i].marks){
            mx=a[i];
        }
    }

    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    return 0;
}
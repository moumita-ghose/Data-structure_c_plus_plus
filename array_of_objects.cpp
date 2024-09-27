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
        getchar();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
      
    }

    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    cout<< "\ndynamic start:\n" ;
    //int *a =new int[n];
    Student *dyna = new Student[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,dyna[i].name);
        cin>>dyna[i].marks>>dyna[i].roll;
    }   

    for(int i=0;i<n;i++){
        cout<<dyna[i].name<<" "<<dyna[i].marks<<" "<<dyna[i].roll<<endl;
    }
    return 0;
}
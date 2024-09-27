#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
};

bool cmp(Student left , Student right)
{
    if(left.marks<=right.marks){
        return true;
    }else{
        return false; 
    }
}

bool cmp2(Student left,Student right)
{
    if(left.marks>right.marks){
        return true;
    }else{
        return false;
    }
}

bool cmp3(Student left , Student right)
{
    // roll er vitti te sort korbo ebar
    if(left.marks>right.marks){
        return true;
    }else if(left.marks<right.marks){
        return false;
    }else{
        if(left.roll<right.roll){
            return true;
        }else{
            return false;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    Student a[n];
 
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    
    sort(a,a+n,cmp);
    cout<<"\n\nasscending order:\n";
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

    sort(a,a+n,cmp2);
    cout<<"\n\ndescending order:\n";
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    cout<<"\n\nNOw sort it according to roll serial if the marks are same:\n";
    Student b[n];
     for(int i=0;i<n;i++){
        cin>>b[i].name>>b[i].roll>>b[i].marks;
     }

    sort(b,b+n,cmp3);
    for(int i=0;i<n;i++){
        cout<<b[i].name<<" "<<b[i].roll<<" "<<b[i].marks<<endl;
    }
    return 0;
}
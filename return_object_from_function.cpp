#include<bits/stdc++.h>
using namespace std;

class Student
{
public : 
    int roll;
    int cls;
    float gpa;

    Student (int roll , int cls,float gpa)
    {
        this->cls=cls;
        this->roll=roll;
        this->gpa=gpa;
    }    

};

Student fun ()
{
    Student rahim(342 , 5 , 4.99);
    return rahim;
}
int main()
{
    Student ans = fun();
    cout<< ans.roll << " "<<ans.cls << " " << ans.gpa<<endl;
    return 0;
}
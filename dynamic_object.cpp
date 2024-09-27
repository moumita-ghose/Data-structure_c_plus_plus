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

Student *fun()
{
    cout<<" in fun function : \n";
    Student *rahim = new Student( 342 , 10, 4.58);
  
    return rahim;
}
int main()
{

    Student rahim( 342 , 10, 4.58);
    Student *karim = new Student(342 , 10, 4.58);
    cout<<karim->cls<<" "<<karim->gpa<<" "<<karim->roll<<endl;
    Student *ans = fun();
    cout<<ans->roll<<" "<<ans->gpa<<" "<<ans->cls<<endl;

    delete ans;
     cout<<ans->roll<<" "<<ans->gpa<<" "<<ans->cls<<endl;

    return 0;
}
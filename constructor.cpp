#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double cgpa;

    /*Student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        cgpa=g;
    }*/

    Student (int roll,int cls,double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};
int main()
{
    Student rahim( 30 , 8 , 5.01 );
    Student karim(20 , 7 , 4.09 );
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.cgpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.cgpa<<endl;

    /*rahim.roll=29;
    rahim.cls=9;
    rahim.cgpa=5.00;

    Student karim;
    karim.roll=46;
    karim.cls=8;
    karim.cgpa = 5.00;
    */
    
    return 0;
}
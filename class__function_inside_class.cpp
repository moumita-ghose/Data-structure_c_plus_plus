#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        int marks1,marks2;
        Person(string nm,int ag,int marks1,int marks2)
        {
            name=nm;
            age=ag;
            this->marks1=marks1;
            this->marks2=marks2;
        }
        void hello()
        {
          //  cout<<"hello";
          cout<<name<<" "<<age<<". "<<"marks1 = "<<marks1<<" "<<"marks2 = "<<marks2<<endl;

        }

        int total_marks()
        {
            return marks1+marks2;
        }

};
int main()
{
    Person rakib("Rakib Hasan",29,85,59);
    //cout<<rakib.name<<" "<<rakib.age<<endl;
    rakib.hello();
    cout<<"total marks = "<<rakib.total_marks()<<endl;
    //int t=rakib.total_marks();
   // cout<<t<<endl;
    Person sakib("Sakib Al Hasan" ,32,98,91);
    sakib.hello();
    cout<<sakib.total_marks()<<endl;
    return 0;
}
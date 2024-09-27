#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    //int x;
    Student a,b,c,d;
    a.roll=29;
    a.cgpa=3.84;
   char temp[100] = "moumita";
    strcpy(a.name , temp);
    cout << a.name << " " << a.roll<< " " <<a.cgpa<<endl;

    /*_______________now taking input from the user _________________*/
  
   
    cin>>b.name>>b.roll>>b.cgpa;
    cout<< b.name << " " << b.roll << " " <<b.cgpa << endl;
    
    
    // space soho name input nite hole __________________
    cin.getline(c.name,100);
    cin>>c.roll>>c.cgpa;
    
    getchar();
    cin.getline(d.name,100);
    cin>> d.roll >> d.cgpa ;

    cout<< c.name << " " << c.roll << " " << c.cgpa << endl;

    cout<< d.name << " " << d.roll << " " << d.cgpa << endl;

    return 0;
}
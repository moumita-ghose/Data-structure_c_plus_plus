#include<bits/stdc++.h>
using namespace std;

class Person
{
    public :
    string name;
    int age;

    Person(string name,int age)
    {
        this-> name = name;
        this->age=age;
    }

};
int main()
{
    Person * rakib= new Person("rakib ahsan",29);
    Person * sakib= new Person ("sakib al hasan",32);

    /*rakib = sakib;
    delete sakib;
    cout<<rakib->name<<endl<<rakib->age<<endl;
    */

   /*____________ way 1 ____________
    rakib->name = sakib->name;
    rakib->age = sakib->age;
    delete sakib;
    cout<<rakib->name<<endl<<rakib->age<<endl;
    */

    //or, another way to copy the object is
    *rakib= *sakib;
    delete sakib;
    cout<<rakib->name<<endl<<rakib->age<<endl;

    return 0;
}
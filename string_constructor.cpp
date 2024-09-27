#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "hello world";
    //1
    string s("hello world");
    cout<<s<<endl;

    //2
    string a("namaste duniya",4);
    cout<<a<<endl;

    //3
    string b("this is the world");
    string c(b,4);
    cout<<c<<endl;
    
    //4
    string d(5,'u');
    cout<<d<<endl;
    string e(26,'A');
    cout<<e<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";
    
    a=a+b; //sum=sum+i; er moto
    cout<<a<<endl;
    cout<<b<<endl;
    a.append(b);
     cout<<a<<endl;
    cout<<b<<endl;

    string c= "moumita";
    c.push_back('A');
    cout<<c<<endl;
    c.pop_back();
    c.pop_back();
    cout<<c<<endl;

    string e = "Rajbari";
   // cout<<e.size()<<endl;
    e.erase(4,1);
    cout<<e<<endl;
   // cout<<e.size()<<endl;

    string f = "SteepDecline";
    f.replace(4,0,"my");
    cout<<f<<endl;

    f.replace(4,1,"my");
    cout<<f<<endl;

    string g="TeaPerson";
    g.insert(3,"you");
    cout<<g<<endl;
    g.replace(3,0,"you");
    cout<<g<<endl;
    return 0;
}
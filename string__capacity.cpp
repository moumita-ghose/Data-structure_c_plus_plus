#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s= "hello world";
    cout<<s.size()<<endl; 
    cout<<s.max_size()<<endl; 
    string b;
    cout<<b.capacity()<<endl;
    b = "moiumkiohjhjhkjhkjhKJH oiuoiuoiuoiioihihklkjhknm";
    cout<<b.capacity()<<endl;

    string c="moumita";
    cout<<c<<endl;
    c.clear();
    cout<<c<<" "<<c.size()<<endl;

    string d;
    if(d.empty()==true){
        cout<<"empty"<<endl;
    }else{
        cout<<"not empty"<<endl;
    }

    string e;
    cin>>e;
    e.resize(5);
    //e.resize(12);
    cout<<e.size()<<endl;
    cout<<e<<endl;
    e.resize(12,'x');
    cout<<e<<endl;

    return 0;
}
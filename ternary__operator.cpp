#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    /*if(n%2==0){
        cout<<"even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }*/

    
    /*_______________OR______________*/

    (n%2==0)?cout<<"Even"<<endl : cout<<"Odd"<<endl;
    return 0;
}
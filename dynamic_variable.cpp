#include<bits/stdc++.h>
using namespace std;

int ** fun()
{
    int *a = new int;

    *a=100;
    cout<<"fun : "<<&a<<endl;
     return &a;
}

int main()
{
    //int x = 10;
    int **p=fun();
    cout<< "main : p = "<< p<<endl;
   
    int *a = new int;
    *a=10;
    cout<<"a = "<< *a<<endl<<"main : "<<a<<endl;

    float *f = new float;
    *f=10;
    cout<<*f<<endl;

    return 0;
}
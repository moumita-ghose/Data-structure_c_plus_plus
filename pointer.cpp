#include<bits/stdc++.h>
using namespace std;

int main()
{
    //2. how to use pointer
    /*
    int a = 5;
    int* a_ptr = &a;
    cout<<a<<endl;
    cout<<a_ptr<<endl;
    cout<<*a_ptr<<endl;

*/
    //3. derefferencing
    int b = 3;
    int *p1 = &b;
    cout<<&b<<endl;
    cout<<p1<<endl;
    cout<<*p1<<endl;

    int **p2 = &p1;
    cout<<&p1<<endl;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<endl;
    return 0;
}
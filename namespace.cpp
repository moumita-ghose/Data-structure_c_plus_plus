#include<bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age =24;
    void hello()
    {
        cout<<"hello rakib namespace"<<endl;
    }

}

namespace Sakib
{
    int age2 =30;
    void hello2()
    {
        cout<<"hello Sakib namespace"<<endl;
    }   
}

using namespace Rakib;
using namespace Sakib;
int main()
{
    cout<<Rakib::age<<endl;
    cout<<age<<endl;
    cout<<age2<<endl;
    hello();
    hello2();
    return 0;
}
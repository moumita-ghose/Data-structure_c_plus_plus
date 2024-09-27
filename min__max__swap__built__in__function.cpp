#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int mi =min({a,b,c,d});
    cout<<mi<<endl;
    
    int ma=max({a,b,c,d});
    cout<<ma<<endl;
    
    swap(a,b);// shudhu 2 ta parameter ney swap()
    cout << "a = " <<a<<" b = "<<b<<endl;
    return 0;
}
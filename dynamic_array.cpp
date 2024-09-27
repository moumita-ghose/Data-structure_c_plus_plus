#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *x=new int[5];
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    return x;
}
int main()
{
   // int a[5];------>>int *a = new int[5];
   int n;
   cin>>n;
   int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

    // now try to access fun function 
    int *x = fun();
    for(int i=0;i<5;i++){
        cout<<x[i]<<" ";
    }
    return 0;
}
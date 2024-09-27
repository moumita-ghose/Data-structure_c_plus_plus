#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
   

    //do iterate
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }

    cout<<*s.begin()<<endl;
    cout<<*s.end()<<endl;
    cout<<*(s.end()-1)<<endl;

    string a = "declined";
    string:: iterator it;  //-----------------------------------------------------------------------
                             //                                                                    |
    for(it=a.begin();it<a.end();it++){//for(string:: iterator it=a.begin();it<a.end();it++) <------|
        cout<<*it<<endl;
    }

    
    return 0;
}
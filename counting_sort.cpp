#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int frq[26]={0};
    for(int i=0;i<s.size();i++){
        char c = s[i];
        frq[c - 'a']++;
    }

    for(char i='a';i<='z';i++){
        cout<<i<<" = "<<frq[i-'a']<<endl;
    }

    for(char i='a';i<='z';i++){
        for(int j=0;j<frq[i-'a'];j++){
            cout<<(char)i;
        }
    }
    return 0;
}
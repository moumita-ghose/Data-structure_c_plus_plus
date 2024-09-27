#include<bits/stdc++.h>
using namespace std;
/* ________ print the same string stream using recursion______________
void print(stringstream &ss)
{
    string word;  
    if(ss >> word){
        cout<<word<<endl;
        print(ss);
    }
}
*/

/* _________________ print the reverse of the string using recursion ____________________ */
void print(stringstream &a)
{
    string b;
    if(a>>b){
        print(a);
        cout<<b<<endl;
    }
}

int main()
{
    string s;
    getline(cin,s);
    stringstream c(s);
    print(c);
    return 0;
}
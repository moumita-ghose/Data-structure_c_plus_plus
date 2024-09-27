#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    stringstream ss(s);
    string word;
  
   /* ss>>word;
    cout<<word<<endl;
    ss>>word;
    cout<<word<<endl;
    ss>>word;
    cout<<word<<endl;
    ss>>word;
    cout<<word<<endl;
    ss>>word;
    cout<<word<<endl;
    */
   int how_many_word=0;
    while(ss >> word){
        how_many_word++;
        cout<<word<<endl;
    }
    cout<<"the words are : "<<how_many_word<<endl;

    return 0;
}
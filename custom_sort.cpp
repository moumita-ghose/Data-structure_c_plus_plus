#include<bits/stdc++.h>
using namespace std;
class Freq
{
    public:
    char value;
    int count; 
};

bool cmp(Freq left,Freq right)
{
    if(left.count==right.count){
        if(left.value<right.value){
            return true;
        }else{
            return false;
        }
    }else{
        if(left.count>right.count){
            return true;
        }else{
            return false;
        }
    }
    
}
int main()
{
    string s;
    cin>>s;
    Freq f[26]; //----> a theke z porjonto 26 ta character er jonno 26 ta object
    
    for(int i=0;i<26;i++){
        f[i].value=char(i+'a');
        f[i].count=0;
    }

    char c;
    for(int i=0;i<s.size();i++){
        c=s[i];
        int ascii=int(c-'a');
        f[ascii].count++;
    }
    sort(f,f+26,cmp);

    for(int i=0;i<26;i++){
       
     //   if(f[i].count>0){
           // cout<<f[i].value<<" "<<f[i].count<<endl;
            for(int j=0;j<f[i].count;j++){
                cout<<f[i].value;
            }
        //}
    }

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    switch(c){
        case 'a' :  //----->> if(x=='a')
            cout<<"vowel"<<endl;
            break;
        case 'e' :      //----->> if(x=='e')
            cout<<"vowel"<<endl;
            break;
        case 'i' :  //----->> if(x=='i')
            cout<<"vowel"<<endl;
            break;
        case 'o' :  //----->> if(x=='o')
            cout<<"vowel"<<endl;
            break;
        case 'u' :   //----->> if(x=='u')
            cout<<"vowel"<<endl;
            break;
        default :
            cout<<"consonant"<<endl;
    }
    return 0;
}
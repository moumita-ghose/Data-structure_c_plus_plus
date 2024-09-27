#include<iostream>
using namespace std;
int main()
{
    int x=3;
    /*if(x==1){
        cout<<"one";
    }else if(x==2){
        cout<<"two";
    }else if(x==3){
        cout<<"three";
    }
    */


    switch(x){
        case 1 :  //if(x==1)--->> bojhay
            cout<<"one"<<endl;
            break;
        case 2 :
            cout<<"TWo"<<endl;
            break;
         case 3 :
            cout<<"Three"<<endl;
            break;
         case 4 :
            cout<<"Four"<<endl;
            break;
         case 5 : 
            cout<<"five"<<endl; 
            break;
          default :
             cout<<"kichu mile nai"<<endl;
    }

    return 0;
}
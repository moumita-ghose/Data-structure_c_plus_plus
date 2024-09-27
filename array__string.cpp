#include<iostream>
#include<string>
using namespace std;
int main()
{
    //array
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }

    char s[100];
    int a;
    cin>>a;
    getchar();
    cin.getline(s,100); //------>> space soho string hole

    cout<<a<<endl<<s<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    struct std{
        char S_N[20];
        int m[6];
    }s;
    cout<<"Enter NAME :";
    cin>>s.S_N;
    int min=100,mini=100,sum=0;
    cout<<"Enter Marks";
    for(int i=0;i<6;i++){
        cin>>s.m[i];
        sum=sum+s.m[i];
        if(s.m[i]<min){
            mini=min;
            min=s.m[i];
        }
    }
    if((sum-min-mini)/4>=95)
        cout<<"Eligible";
    else
        cout<<"Not Eligible";
    return 0;
}
#include<iostream>
using namespace std;
int pow(int n,int a,int p){
    if(n==1)
    return a;
    a=a*p;
    return pow(n-1,a,p);
    
}
int main(){
    int n,a,m,p;
    cout<<"Enter Number :";
    cin>>a;
    cout<<"Enter Power : ";
    cin>>n;
    p=a;
    m=pow(n,a,p);
    cout<<m;
    return 0;
}
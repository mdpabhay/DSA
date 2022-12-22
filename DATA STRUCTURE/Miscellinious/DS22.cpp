#include<iostream>
using namespace std;
int flag=0;
int ls(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(x==a[i])
        flag=1;
    }
    if(flag==1)
    cout<<"Found";
    else
    cout<<"Not Found  ";
}
int main(){
    int n,a[10],x;
    cout<<"Enter Dimension of Array :";
    cin>>n;
    cout<<"Enter Array Elements :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter No To Be Searched :";
    cin>>x;
    ls(a,n,x);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Dimension of first_Array :";
    cin>>n;
    int a[n];
    cout<<"Enter First Sorted Array :";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    cout<<"Enter Dimension of Second_Array :";
    cin>>m;
    int b[m];
    cout<<"Enter Second Sorted Array :";
    for(int i=1;i<=n;i++)
    cin>>b[i];
    int c[n+m];
    int i=1,j=1,k=1;
    while(i<=n&&j<=m){
        if(a[i]<=b[j])
        c[k++]=a[i++];
        else
        c[k++]=b[j++];
    }
    while(i<=n){
    c[k++]=a[i++];}
    while(j<=m){
    c[k++]=b[j++];}
    for(int i=1;i<=n+m;i++)
    cout<<c[i]<<" ";
    return 0;
}
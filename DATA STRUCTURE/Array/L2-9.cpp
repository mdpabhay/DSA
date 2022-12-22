#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Dimension of First Array :";
    cin>>n;
    int a[n];
    cout<<"Enter Elements of First Array :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter Dimension of Second Array :";
    cin>>m;
    int b[m];
    cout<<"Enter Elements of Second Array :";
    for(int i=0;i<m;i++)
    cin>>b[i];
    int c[n+m]={0};
    int i=0,j=0,k=0;
    while(i<=n&&j<=m){
        if(a[i]<b[j])
        c[k++]=a[i++];
        else if(b[j]<a[i])
        c[k++]=b[j++];
        else{
        c[k++]=a[i++];
        j++;
        }
    }
    while(i<=n)
    c[k++]=a[i++];
    while(j<=m)
    c[k++]=b[j++];
    for(int i=0;c[i]!=0;i++)
    cout<<c[i]<<" ";
    return 0;
}
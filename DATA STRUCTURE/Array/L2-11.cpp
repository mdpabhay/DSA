#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Dimension of First Array :";
    cin>>n;
    int a[n];
    cout<<"Enter elements of Array :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter Dimension of Second Array :";
    cin>>m;
    int b[m];
    cout<<"Enter elements of Array :";
    for(int i=0;i<m;i++)
    cin>>b[i];
    cout<<"Difference of Array :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j])
            break;
            if(j==m-1)
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
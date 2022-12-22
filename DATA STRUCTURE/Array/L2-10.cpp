#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Dimension of Array :";
    cin>>n;
    int a[n];
    cout<<"Enter elements of First Array :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int m;
    cout<<"Enter Dimension of Array :";
    cin>>m;
    int b[m];
    cout<<"Enter elements of Second Array :";
    for(int i=0;i<m;i++)
    cin>>b[i];
    int c[n]={0},k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j])
            {
                c[k++]=a[i];
                break;
            }
        }
    }
    cout<<"Intersection of SETS :";
    for(int i=k-1;i>=0;i--)
    cout<<c[i]<<" ";
    return 0;
}
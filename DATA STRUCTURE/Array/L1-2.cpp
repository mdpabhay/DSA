#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Dimension :";
    cin>>n;
    int ar[100];
    cout<<"Enter Elements :";
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int m;
    cout<<"Enter No to be ADDED :";
    cin>>m;
    ar[n]=m;
    for(int j=0;j<n+1;j++){
        cout<<" "<<ar[j];
    }
    return 0;
}
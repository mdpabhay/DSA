#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    cout<<"Enter Value :";
    cin>>n;
    int ar[10];
    for (int  i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int a;
    cout<<"Enter No to be Added :";
    cin>>a;
    for(int i=n;i>=0;i--){
        if(ar[i-1]<a){
            ar[i]=a;
            break;
        }
        ar[i]=ar[i-1];
    }   
    for(int  i=0;i<n+1;i++)
    cout<<" "<<ar[i];
    return 0; 
}
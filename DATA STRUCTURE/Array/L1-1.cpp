#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Dimension :";
    cin>>n;
    int ar[n];
    cout<<"Enter Array Elements :";
    for (int  i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        cout<<" "<<ar[i];
    }    
    return 0;
}
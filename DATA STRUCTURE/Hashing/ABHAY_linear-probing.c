#include<stdio.h>
int DAT[100]={0},i,j;
int lhash(int a[],int b[],int n,int i){
    if(i==n)
    return 0;
    if(DAT[i]==0){
        DAT[b[i]]=a[i];
    }
    else if(i<n){
        for(j=i;j<n;){
            if(DAT[j]==0){
            DAT[j]=a[i];
            j=j*j;
            break;
            }
        }   
        if(DAT[j]!=a[i]){
        for(j=0;j<n;){
            if(DAT[j]==0){
                DAT[j]=a[i];
                j=j*j;
                break;
            }
        }   
        }
    }
    i++;
    return lhash(a,b,n,i);
    
}
int main(){
    int n;
    printf("Enter Dimension :");
    scanf("%d",&n);
    printf("Enter Elements of Array :");
    int a[100],b[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i]%n;
    }
    lhash(a,b,n,i);
    for (int  i = 0; i < n; i++)
    {
        printf("%d : %d \n",i,DAT[i]);
    }
    
    return 0;
}
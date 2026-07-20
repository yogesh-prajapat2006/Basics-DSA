#include<iostream>
#include<vector>
using namespace std;

void addition(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=n-1,j=m-1,k=0,carry=0;
    
    while(i>=0  && j>=0){
        int sum=0;
        sum=arr1[i--]+arr2[j--]+carry;
        carry=sum/10;
        arr3[k++]=sum%10;
    }
    while(i>=0){
        int sum=0;
        sum=arr1[i--]+carry;
        carry=sum/10;
        arr3[k++]=sum%10;
    }
    while(j>=0){
        int sum=0;
        sum=arr2[j--]+carry;
        carry=sum/10;
        arr3[k++]=sum%10;
    }
    arr3[k++]=carry;
}

void print(int arr3[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr3[i]<<"  ";
    }
}

int main(){
    int arr1[2]={9,13};
    int arr2[3]={12,15,65};
    int arr3[6]={0};
    addition(arr1,2,arr2,3,arr3);
    print(arr3,6);
    return 0;
}
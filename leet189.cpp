#include<iostream>
using namespace std;

void rotate(int arr[],int n,int idx){
   
    int temp[n];
    for(int i=0;i<n;i++){
      temp[(i+idx)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
    arr[i]=temp[i];
   }
}
void print(int arr[],int n){
     cout<<"the rotate array is the : "<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}

int main(){
  int arr[7]={1,5,7,9,6,4,2};
  int n;
  cin>>n;

  rotate(arr,7,n);
  print(arr,7);

  return 0;  
}
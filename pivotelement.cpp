#include<iostream>
using namespace std;

int pivotelement(int arr[],int size){
    int s=0,e=size-1;
    int mid =s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        } 
        mid =s+(e-s)/2;
        
    }
    return s;
}
int main(){
    int arr[7]={98,99,100,10,12,14,16};
    int ans=pivotelement(arr,7);
    cout<<"the pivot element is find that index is : " <<ans<<endl;
    return 0;

}
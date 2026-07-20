#include<iostream>
using namespace std;
bool isprime(int n){
    
    for(int j=2;j<=n-1;j++){
        if(n%j==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    int count=0;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
           count++;
        }
    }
    cout<<count;
    return 0;
}
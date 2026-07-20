#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<=n-1;i++){
        for(int j=2;j<=n-1;j++){
            if(n%i==0){
               return false;
            }
        }
    }
    return true;
}


int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    if(isprime(n)){
    cout<< "the number is prime : ";
    }
    else cout<<"the number is't prime : ";
    return 0;
}
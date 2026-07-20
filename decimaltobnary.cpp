// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     cout<<"enter the number : ";
//     int n;
//     cin>>n;

//     int i=0;
//     int ans=0;
//     while(n!=0){
        
//         int rem=n%2;
       
//         ans=(rem*pow(10,i))+ans;
//         i++;
//         n=n/2;
        
//     }
//     cout<<ans;
//     return 0;
// }

#include <iostream>
#include<math.h>
using namespace std;

int main() {
    cout<<"enter the number : ";
    int n;
    cin>>n;
    int ans=0,i=0;
    while(n != 0 ){
        int bit= n&1;
        ans =(bit*pow(10,i))+ans;
        
        n=n>>1;
        i++;
        
    }
    cout<<ans;
    return 0;
}
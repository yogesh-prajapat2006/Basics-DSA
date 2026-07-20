#include <iostream>
using namespace std;
void fibonacci(int n){
    int frist=0,second=1;
    
    int fibo;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<frist<<" ";
            continue;
        }
        if(i==2){
            cout<<second<<" ";
            continue;
        }
        fibo=frist+second;
        frist=second;
        second=fibo;
        cout<< fibo<<" ";
    }
    
}
int main() {
    cout<< "enter the numbers : ";
    int n;
    cin>>n;
    fibonacci(n);
    
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int a,b;
    cout<< "enter the frist number : ";
    cin>>a;
    char op;
    cout<<"operataion : ";
    cin>>op;
    cout<< "enter the second number : ";
    cin>>b;
    
    switch(op){
        case '*' : cout<<a*b;
                   break;
        case '+' : cout<<a+b;
                   break;
        case '-' : cout<<a-b;
                   break;
        case '/' : cout<<a/b;
                   break;
        case '%' : cout<<a%b;
                   break;
        case 'p' : cout<<pow(a,b);
                   break;
        case 's' : cout<<sqrt(a);
                   break;
                   
        default : cout<<"errror";
        
    }
    return 0;
}
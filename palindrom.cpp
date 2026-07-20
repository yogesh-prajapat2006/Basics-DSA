#include<iostream>
using namespace std;
int palindrom(char arr[],int size){
    int s=0;
    int e=size-1;
    int t=0;
    while(s<=e){
        if(arr[s++]==arr[e--]){
            t=1;
        }
        else {
            t=-1;
            break;
        }
    }
    return t;
}
int main(){
    char arr[3]={'m','o','m'};
    int size=3;
    int t=palindrom(arr,size);
    if (t==1){
        cout << "arr is the palindrom ..";
    }
    else cout << "arr is not the palindrom ..";
    return 0;

}
#include<iostream>
#include <array>
using namespace std;

int main(){
    array <int,4> a ={1,2,3,4};
    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<< "number at 2nd index : " << a.at(2)<< endl;
    cout<<"array is empty or not : "<<a.empty()<<endl;
    cout<<"array's frist element : "<<a.front()<<endl;
    cout<<"array's last element  : "<<a.back();
}
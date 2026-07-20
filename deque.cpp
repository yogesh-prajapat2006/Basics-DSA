#include<iostream>
#include <deque>
using namespace std;

int main(){
    deque <int> d ;
    d.push_back(5);
    d.push_front(3);
    d.push_back(9);
    int size=d.size();

    for(int i=0;i<size;i++){
        cout<<d[i]<<" "<<endl;
    }
    cout<< "number at 2nd index : " << d.at(2)<< endl;
    cout<<"deque is empty or not : "<<d.empty()<<endl;
    cout<<"deque's frist element : "<<d.front()<<endl;
    cout<<"deque's last element  : "<<d.back();
    return 0;
}
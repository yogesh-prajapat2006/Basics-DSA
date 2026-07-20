#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    cout<<"vector v's capacity : "<<v.capacity()<<"  "<<endl;
    cout<<"vector v's size :"<<v.size()<<endl;

    v.push_back(7);
    cout<<"vector v's capacity : "<<v.capacity()<<"  "<<endl;
    cout<<"vector v's size :"<<v.size()<<endl;

    v.push_back(4);
    cout<<"vector v's capacity : "<<v.capacity()<<"  "<<endl;
    cout<<"vector v's size :"<<v.size()<<endl;

    v.push_back(5);
    cout<<"vector v's capacity : "<<v.capacity()<<"  "<<endl;
    cout<<"vector v's size :"<<v.size()<<endl;

    v.push_back(1);
    cout<<"vector v's capacity : "<<v.capacity()<<"  "<<endl;
    cout<<"vector v's size :"<<v.size()<<endl;

    v.push_back(2);
    cout<<"vector v's capacity : "<<v.capacity()<<"  "<<endl;
    cout<<"vector v's size :"<<v.size()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }

    cout<<"vector front element : "<<v.front()<<endl;
    cout<<"vector back element : "<<v.back()<<endl;
    cout<<"vector is empty or not : "<<v.empty()<<endl;

    cout<<"befor pop : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }

    v.pop_back();
    cout<<"after pop : "<<v.size()<<endl;
    for(int i:v){
        cout<<v.at(i)<<endl;
    }
    for(int i:v){
        cout<<v.at(i)<<endl;
    }
    return 0;
}
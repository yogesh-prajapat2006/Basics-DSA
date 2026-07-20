#include<iostream>
using namespace std;

class B{
    public:
     int a;
     int b;

     void operator+ (B &obj){
        int velue1= obj.a;
        int velue2= obj.b;
        cout<<"the output is : "<<velue2-velue1<<endl;
     }
};

int main(){
    B obj1,obj2;
    obj1.a=5;
    obj1.b=9;

    obj1+obj1;
    return 0;
}
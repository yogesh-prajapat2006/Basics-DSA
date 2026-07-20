#include<iostream>
using namespace std;

class Student{
    private:
       int marks;
    
    public:
       char gread;

    int setmarks(int m){
        marks=m;
    }

    int getmarks(){
        return marks;
    }

};

int main(){
    Student s1;
    s1.gread='a';
    s1.setmarks(10);
    cout<<"student s1 gread is : "<<s1.gread<<endl;
    cout<<"student s1 marks is : "<<s1.getmarks()<<endl;
    return 0;
}
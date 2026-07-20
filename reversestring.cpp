#include<iostream> 
using namespace std;

void reversenme(char name[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
    count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "enter your name : "<<endl;
    cin>>name;
    int len = getlength(name);
    cout <<"my name is : "<<name <<endl;
    cout <<"length is :"<<len<<endl;
    reversenme(name,len);
    cout <<"my name reverse is : "<<name<<endl;
    return 0;
}

// enter your name : 
// yogesh
// my name is : yogesh
// length is :6
// my name reverse is : hsegoy
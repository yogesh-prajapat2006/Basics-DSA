#include<iostream>
using namespace std;

void replacefx(string &str){
    string temp=" ";
    for(int i=0;i<str.length();i++){
       if(str[i] == ' '){
          temp.push_back('@');
          temp.push_back('4');
          temp.push_back('0');
         }
       else{
          temp.push_back(str[i]);
         }
      }   
   cout<<temp;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
  
int main(){
    string s="my name is yogesh prajapat";
    replacefx(s);
    return 0;
}

//my@40name@40is@40yogesh@40prajapat
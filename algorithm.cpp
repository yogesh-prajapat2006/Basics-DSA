#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(8);

    cout<<"finding ->8 : "<<binary_search(v.begin(),v.end(),8)<<endl;
    cout<<"upper bound : "<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotate : "<<endl;
    for(int i:v){
        cout<<i<<"  ";
    }

    int a=9,b=10;
    cout<<"max-> : "<<max(a,b)<<"  "<<"min-> : "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a->"<<a<<endl<<"b->"<<b<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(2 * n);
	    vector<int>freq(n , 0);
	    for(int i=0;i<2*n;i++){
	        cin>>arr[i];
	    }
	    for(int num: arr){
	        freq[num]++;
	    }
	    bool fact=true;
	    for(int i=0;i<n;i++){
	        if(freq[i]==3){
	            fact=false;
	            break;
	        }
	        
	    }
	    if(fact){
	        cout<<"YES\n";
	    }else cout<<"NO\n";
	}

}

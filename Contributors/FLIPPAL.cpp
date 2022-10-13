// This is a solution to Palindrome Flipping problem of CODECHEF
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a=0, b=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            a+=1;
	        }
	        else{
	            b++;
	        }
	    }
	    if(a%2==0 || b%2==0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }

	}
	return 0;
}

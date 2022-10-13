// This is solution to the TWO TRAIN problem of CODECHEF
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int p[n-1], sum=0;
	    for(int i=0;i<n-1;i++){
	        cin>>p[i];
	        sum=sum+p[i];
	    }
	    sort(p, p+n-1);
	    cout<<sum+p[n-2]<<endl;
	}
	return 0;
}

// This is a solution to Equal Distinct problem of codechef

#include<bits/stdc++.h>
using namespace std;
	int count(int arr[], int n)
{
    sort(arr, arr + n);
    int res = 0;
    for (int i = 0; i < n; i++) {
        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;

        res++;
    }

    return res;
}

int main() {
	int t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int x = count(a, n);
	    if(n==x&& n%2!=0){
	        cout<<"No"<<endl;
	    }
	    else if((n!=x)&& n%2!=0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}

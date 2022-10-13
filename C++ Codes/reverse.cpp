// This code will reverse a given integer
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, b=0;
	cout<<"Enter the number: ";
	cin>>n;
	while(n>0){
	   int remainder=n%10;
	   b=b*10+remainder;
	   n/=10;
	}
	cout<<"The reverse of the given number is: "<<b<<endl;
	return 0;
}

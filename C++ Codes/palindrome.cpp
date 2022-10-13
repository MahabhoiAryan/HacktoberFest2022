// This code will check whether a given number is palindrome or not
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, b=0, c=0;
	cout<<"Enter the number: ";
	cin>>n;
	c=n;
	while(n>0){
	   int remainder=n%10;
	   b=b*10+remainder;
	   n/=10;
	}
	if(b==c){
    cout<<"The given number is a palindrome";
    }
    else{
      cout<<"The given number is not a palindrome";
    }
	return 0;
}

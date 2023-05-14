#include <bits/stdc++.h>
using namespace std;

int getReverse(int n){
	int reverse=0;
	while(n!=0){
		int rem = n%10;
		reverse = (reverse*10) + rem;
		n /= 10;
	}
	return reverse;
}

int main(){
	int n;
	cin>>n;

	cout<<"reverse of "<<n<<" is "<<getReverse(n);		
	return 0;
}
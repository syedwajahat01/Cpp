#include <bits/stdc++.h>
using namespace std;

bool knowPrimeOrNot(int n){
	for(int i=2; i<sqrt(n); i++){
		if(n%i==0){
			return false;
				
		}
	}
	return true;
}

int main(){
	int n;
	cin>>n;

	for(int i=2; i<=n; i++){
		bool isPrime = knowPrimeOrNot(i);
		if(isPrime){
			cout<<i<<" ";
		}
	}
			
	return 0;
}
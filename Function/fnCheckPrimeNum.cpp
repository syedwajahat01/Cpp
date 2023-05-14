#include <bits/stdc++.h>
using namespace std;

bool knowPrimeOrNot(int n){
	for(int i=2; i<sqrt(n); i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}

int main(){
	int n;
	cin>>n;

	cout<<"The Given Number is Prime: "<<knowPrimeOrNot(n);		
	return 0;
}
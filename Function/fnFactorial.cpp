#include <bits/stdc++.h>
using namespace std;
long long getFactorial(int n){
	long long factorial=1;

	for(int i=1; i<=n; i++){
		factorial = factorial * i;
	}
	return factorial;
}
int main(){
	int n;
	cin>>n;

	cout<<"The factorial is: "<< getFactorial(n);		
	return 0;
}
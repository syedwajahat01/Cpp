#include <bits/stdc++.h>
using namespace std;

int getSum(int n){
	int sum=0;
	for(int i=1; i<=n; i++){
		sum += i;
	}
	return sum;
}

int main(){
		int n;
		cin>>n;
		cout<<getSum(n);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

string getEvenOrOdd(int n){

	if(n%2==0)
		return "Even";
	return "Odd"; 
}
int main(){
		int n;
		cin>>n;

		cout<<"Given Number is: "<<getEvenOrOdd( n);		
	return 0;
}
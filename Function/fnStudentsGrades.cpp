#include <bits/stdc++.h>
using namespace std;

char getGrade (int n){
	char ch = (n>=90) ? 'A' : (n>=80) ? 'B' : (n>=70) ? 'C' : (n>=60)?'D' : 'F';
	return ch;
}

int main(){
		int n;
		cout<<"Enter the Grade: \n";
		cin>>n;

		cout<<getGrade(n);
	return 0;
}
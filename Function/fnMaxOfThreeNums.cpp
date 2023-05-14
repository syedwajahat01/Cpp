#include <bits/stdc++.h>
using namespace std;

int getMaxOfThreeNums(int a, int b, int c){
	int findMax=0;
	findMax = (a>b && a>c) ? a : (b>a && b>c) ? b : c;
	
	return findMax;
}

int main(){
	int a, b, c;
	cin>>a>>b>>c;

	cout<<getMaxOfThreeNums(a,b,c);	
	return 0;
}
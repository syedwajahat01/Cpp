#include <bits/stdc++.h>
using namespace std;


int getCircleArea(int r)
{
	return 3.14*r*r;
}
int main(){
	int r;
	cin>>r;

	cout<<"Area of circle is: "<<getCircleArea(r)<<" mxm";		
	return 0;
}
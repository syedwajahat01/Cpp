#include <bits/stdc++.h>
using namespace std;

int main(){
		int n;
		cin>>n;

		for(int i=0; i<n; i++){
			int j=0;
			for(j=0; j<i+1; j++){
				int ans=j;
				char ch = ans + 'A';
				cout<< ch<<" ";
			}

			for(int j=i; j>=1; j--){
				int ans = j-1;
				char ch = ans + 'A';
				cout<<ch <<" ";
			}
			cout<<endl;
		}
	return 0;
}
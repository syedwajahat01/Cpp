#include <bits/stdc++.h>
using namespace std;

int main(){
	int rowCount, colCount;
	cin>> rowCount>>colCount;
		for(int i=0; i<rowCount; i++){
			if(i==0 || i==rowCount-1){
				for(int j=0; j<colCount; j++){
					cout<<"* ";
				}
			}
			else{
				cout<<"* ";
				for(int i=1; i<colCount-1; i++){
					cout<<"  ";
				}
				cout<<"*";
			}
			cout<<endl;
		}

	return 0;
}
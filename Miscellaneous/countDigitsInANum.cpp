#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        n /= 10;
        count++;
    }
        cout<<"Number of digits present:  "<<count<<endl;
    
    return 0;
}
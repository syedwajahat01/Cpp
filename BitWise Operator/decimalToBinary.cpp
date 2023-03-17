#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int i=0;
    int ans[10];
    for(i=0; n>0; i++){
        ans[i] = n%2;
        n=n/2;
    }

    for(i=i-1; i>=0; i--){
        cout<<ans[i];
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void Fibonacci()
{
    int n,first=0,second=1;
    cin>>n;
    cout<<first<<" "<<second<<" ";
    for(int i=1; i<=n; i++){
        int next = first+second;
        first = second;
        second = next;
        cout<<next<<" ";
    }
}

int main(){
    Fibonacci();
    return 0;
}
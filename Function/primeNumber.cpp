#include<bits/stdc++.h>
using namespace std;
//1-> prime
//0->non-prime

bool isPrime(){
    int n;
    cin>>n;
    int flag = 1;
    for(int i=2; i<=sqrt(n); i++){
        if(n%2==0){
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    if(isPrime()==1){
        cout<<"Number is Prime: ";
    }
    else{
        cout<<"Number is Non Prime: ";
    }
    return 0;
}
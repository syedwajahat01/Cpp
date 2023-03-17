#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n;
    int rev=0;
    while(n>0){
        int r = n%10;
        rev = rev*10+r;
        n /= 10;
    }
    if(rev == temp){
        cout<<"Given number is Palindrome"<<endl;
    }
    else{
        cout<<"Given Number is not Palindrome"<<endl;
    }
}
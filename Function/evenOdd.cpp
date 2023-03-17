#include<bits/stdc++.h>
using namespace std;

bool isEven(){
    int num;
    cin>>num;
    if(num&1){ 
        return 0;
        }
    return 1;
}

int main(){
    if(isEven()){
    cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}
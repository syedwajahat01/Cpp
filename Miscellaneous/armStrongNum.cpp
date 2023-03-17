#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int temp = num;
    int arm = 0;
    while(num>0){
        int r = num%10;
        arm = (r*r*r) + arm;
        num /= 10;
    }
    if(temp == arm){
        cout<<"Yes, its an armstrong number "<<endl;
    }
    else{
        cout<<"No, its no an armstrong number"<<endl;
    }

    return 0;
}
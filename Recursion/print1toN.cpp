#include<bits/stdc++.h>
using namespace std;

// void Print(int n){
//     if(n<=0){
//         return;
//     }
//     Print(n-1);
//     cout<< n <<" ";
// }


//Print N to 1
void Print(int n){
    if(n<=0){
        return;
    }
    
    cout<< n <<" ";
    Print(n-1);
}

int main(){

    int n;
    cin>>n;
    Print(n);
    return 0;
}
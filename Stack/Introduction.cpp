#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation of stack
    stack<int> s;
    //push
    for(int i=0; i<5; i++){
        s.push(i);
    }
    cout<<"Printing top element  "<<s.top()<<endl;
    return 0;
}
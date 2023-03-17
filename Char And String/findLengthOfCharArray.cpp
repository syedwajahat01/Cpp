#include<bits/stdc++.h>
using namespace std;

int findLength(char name[10]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}



int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Length of your name is:  "<< findLength(name)<<"\n";
    return 0;
}
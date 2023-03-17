#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Please enter the size of the array:\n";
    cin>>n;
    vector<int> v(n);
    cout<<"Please enter the values: \n";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[v[i]]++;
    }
    
    for(auto i:mp){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    return 0;
}
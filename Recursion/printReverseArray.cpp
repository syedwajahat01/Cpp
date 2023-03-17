#include<bits/stdc++.h>
using namespace std;

void printArray(int ans[], int n){
    cout<<"Your Reverse Array is  " << endl;
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }

}

void reverseArray(int arr[], int n){
    int a = 0, b = n-1;
    while(a<b){
        swap(arr[a], arr[b]);
        a++;
        b--;
    }
    printArray(arr, n);
}
int main(){
    int n = 5;
    int arr[] = {5,4,3,2,1};
    reverseArray(arr, n);
    return 0;
}
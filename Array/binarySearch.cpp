#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int s=0;
    int e=size-1;
    int mid = s+(e-s)/2;

    while(size!=0){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid<key]<key){
            s = e+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[9]={1,4,0,2,6,3,9,7,8};
    int idx = binarySearch(arr, 9, 3);
    cout<<idx;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={100,20,30,25,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = n-1;
    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for(auto x:arr)
    cout<<x<<" ";
    
    return 0;
}
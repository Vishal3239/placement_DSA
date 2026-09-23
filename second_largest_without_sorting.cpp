#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={110,80,100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = arr[0];
    int second = INT_MIN;
    for(int i =1;i<n;++i){
        if(arr[i]>first){
            second=first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i] != first)
        second=arr[i];
    }
    cout<<"first: "<<first<<endl;
    cout<<"second: "<<second<<endl;


}
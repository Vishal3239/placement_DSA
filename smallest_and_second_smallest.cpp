#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={100,20,30,25,5,96,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    int fs = arr[0];
    int se = INT_MIN;
    for(int i = 1;i<n;++i){
        if(arr[i]<fs){
            se = fs;
            fs = arr[i];
        }
        else if(arr[i]<se && arr[i]!=fs){
            se=arr[i];
        }
    }
    cout<<"first small = "<<fs<<endl;
    cout<<"second small = "<<se<<endl;
    
    return 0;
}
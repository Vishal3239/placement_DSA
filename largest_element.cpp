#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[]={8,10,20,6,60,80,12,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int mx = arr[0];
    for(int i = 1;i<n;++i){
        if(arr[i]>mx)
        mx = arr[i];
    }
        cout<<mx;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long arr[n];
    long long prev=0, increase=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<prev){
            increase+=prev-arr[i];
            arr[i]=prev;
        }
        prev=arr[i];
    }
    cout<<increase<<endl;

}
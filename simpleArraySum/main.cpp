#include <bits/stdc++.h>
using namespace std;


int main(){
    int x; cin>>x;
    int arr[x]; int sum=0;
    for(int i=0;i<x;i++){
        cin>>arr[i];
        sum+=arr[i];

    }
    cout<<sum;
}


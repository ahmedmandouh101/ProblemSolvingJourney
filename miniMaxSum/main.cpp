#include <bits/stdc++.h>
using namespace std;

int main() {

    long long arr[5];
    long long sum=0;
    for (long long i = 0; i < 5; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    long long min =arr[0];
    for(long long i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    long long max=arr[0];
    for(long long i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<sum-max<<" "<<sum-min;


}


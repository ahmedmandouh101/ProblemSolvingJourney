#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        int min,max;
        int sum=0;
        if(x>=y){
            max=x;
            min=y;
        }else
        {
            max=y;
            min=x;
        }
        for(int i=min+1;i<max;i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;

    }
}

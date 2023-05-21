#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n,odd;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        odd=0;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            if(a%2==1){
                odd++;
            }
        }
        cout<<odd<<endl;
    }

}

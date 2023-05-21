#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    int space=x-1;
    for(int i=1;i<=x;i++){
        for(int a=1;a<=space;a++){
            cout<<" ";
        }

        for(int z=1;z<i*2;z++){
            cout<<"*";
        }
        space--;
        cout<<endl;
    }
}

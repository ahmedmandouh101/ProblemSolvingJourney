#include <bits/stdc++.h>
using  namespace std;

int main(){
    int x; cin>>x;
    int key; cin>>key;
    int array[x];
    for(int i=0;i<x;i++){
        cin>>array[i];
        if(key==array[i]){
            cout<<i+1;
        }
    }

}
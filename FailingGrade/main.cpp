#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,P; cin>>N>>P;
    int F=0;
    for(int i=0;i<N;i++){
        int A; cin>>A;
        if(A<P){
            F++;
        }
    }
    cout<<F;
}

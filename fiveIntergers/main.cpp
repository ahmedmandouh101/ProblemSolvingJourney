#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
//    int counter=1;
//    if(b!=a)counter++;
//    if(c!=a and c!=b)counter++;
//    if(d!=a and d!=b and d!=c)counter++;
//    if(e!=a and e!=b and e!=c and e!=d)counter++;
//    cout<<counter;
     set<int>st;
     st.emplace(a);
     st.emplace(b);
     st.emplace(c);
     st.emplace(d);
     st.emplace(e);
     cout<<st.size();

}

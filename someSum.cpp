
#include <iostream>

using namespace std;

int main(){

    int n,a,b , sum=0;
    int big, small;
    cin>>n>>a>>b;
    if(a>=b){
    	big=a;
    	small=b;
	}else{
		big=b;
		small=a;
	}

    for(int i=1; i<=n;i++){
        if(big>=i&& i>=small){
        	sum+=i;
		}
    }
    cout<<sum;

}

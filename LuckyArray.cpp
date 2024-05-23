#include <iostream>
using namespace std;

int main(){
	int size,flag=0;
	cin>>size;
	int arr[size];
	int min=INT_MAX;
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<size;i++){
//		if(arr[i]<min){
//			min=arr[i];
//		}
//	}
//	for(int i=0;i<size;i++){ 
//		if(arr[i]==min){
//			flag++;
//		}
//	}
	for (int i = 0; i < size; i++) {
        cin >> arr[i];


        if (arr[i] < min) {
            min = arr[i];
            flag = 1;
        } else if (arr[i] == min) {
            flag++;
        }
    }
	
	if(flag%2==0){
		cout<<"Unlucky";
	}else{
		cout<<"Lucky";
	}
	
	return 0;
	
}

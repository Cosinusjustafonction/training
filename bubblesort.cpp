#include <iostream>
using namespace std;
void sorti(int arr[],int length){
	for (int i =0;i<length;i++){
		if (arr[i]<arr[i+1]){
			swap(arr[i],arr[i+1]);
		}

	}


}
	
int main(){
	int mainarr[] = {1,4,3,5,8};
	for (int j=0;j<(sizeof(mainarr)/sizeof(mainarr[0]))-1;j++){
		sorti(mainarr,4);
	}
	
	
	for (int i=0;i<(sizeof(mainarr)/sizeof(mainarr[0]));i++){
		cout<<mainarr[i];
	}
}

#include <iostream>

using namespace std;

void powerset(int arr[], int size){
	for (int i=1;i<16;i++){
		for(int j =0; j<4;j++){
			if(i&(1<<j))
			   printf("%d",arr[j]);
			
		}
		printf("\n");
	}
}
int main() {
	int arr[] = {1,2,3,4};
	int size = sizeof(arr)/sizeof(int);
	powerset(arr,size);
	return 0;
}

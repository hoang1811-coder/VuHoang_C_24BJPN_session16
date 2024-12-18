#include<stdio.h>
	//b2: tao ham update
	void update(int *arr, int new, int index);
int main(){
	//b1:tao ra cac mang ngau nhien
	int arr[]={1,2,3,4,5,6};
	
	//b4: goi ham
	update(arr, 100, 2);
	
	//b5: 
	for(int i=0; i<6; i++){
		printf("*arr[%d] = %d\n", i, arr[i]);
		
	}

	
	
	return 0;
	//b3
	void update(int *arr, int new, int index){
		*(arr + index) = new;
	}
	
}

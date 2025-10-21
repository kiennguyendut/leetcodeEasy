#include<stdio.h>

void rev(int arr[], int l, int r) {
	if(l > r) {
		return;
	}
	
	int temp = arr[l];
	arr[l] = arr[r];
	arr[r] =temp;
	
	rev(arr, l + 1, r - 1);

}

int main() {
	int arr[5] = { 1, 2, 3, 4, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int l = 0;
	int r = size - 1;
	rev(arr, l, r);
	
	for(int i = 0; i < size - 1; i++) {
		printf("After revert, Array is %d ",arr[i]);
	}
	
	return 0;
}	
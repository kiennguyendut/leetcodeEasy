#include<stdio.h>

void reverse(int arr[], int n){
	int l = 0;
	int r = n - 1;
	while(l < r) {
		//swap element
		int temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
		
		//move pointer toward middle
		l++;
		r--;
	}
}

int main(){
	int arr[5] = { 1, 2, 3, 4, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	reverse(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);	
    }
	return 0;
}
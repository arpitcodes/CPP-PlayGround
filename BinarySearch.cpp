/*
Implementation of Binary Search Using Recursion
*/
#include<stdio.h>
#include<conio.h>

int recBinarySearch(int arr[], int low, int high, int key){
	int mid;
	
	if(high >= low){
		mid = (low+high)/2;
		if(arr[mid] == key){
			return mid;
		}
		else{
		 if(arr[mid] >= key){
			return recBinarySearch(arr, low, mid-1,key);
		}
		else{
			return recBinarySearch(arr, mid+1, high, key);}}
	}else{
		return -1;
	}	
}


int main(){
	
	int arr[] = {100,120,135,150,170,185,195,200,205,305};
	int k,n,res;
	printf("Enter the value for search: \n");
	scanf("%d",&k);
	n = sizeof(arr)/sizeof(arr[0]);
	res = recBinarySearch(arr, 0, n-1, k);
	if (res !=-1)
		printf("%d was found at index %d\n",k,res+1);	
	else
		printf("%d was not found", k);	
	return 0;
}

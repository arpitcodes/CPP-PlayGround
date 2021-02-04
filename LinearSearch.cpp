/*
Implementation of Linear Search Using Recursion
*/

#include<stdio.h>
#include<conio.h>

int recLinearSearch(int arr[], int low, int high, int key){
if(high < low)
	return -1;
if(arr[low] == key)
	return low;
if(arr[high] == key)
	return high;
return recLinearSearch(arr, low+1, high-1, key);
}
int main(){
	int arr[] = {2,3,4,5,6,7,8,10,12,15};
	int i,k,n,res;
	printf("Enter the value for search: \n");
	scanf("%d",&k);
	n = sizeof(arr)/sizeof(arr[0]);
	res = recLinearSearch(arr, 0, n-1, k);
	if (res !=-1)
		printf("%d was found at index %d\n",k,res+1);	
	else
		printf("%d was not found", k);	
	return 0;
}


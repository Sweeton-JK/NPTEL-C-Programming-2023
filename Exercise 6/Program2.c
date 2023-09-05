#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]); /*Accepts the elements of the array */

    int arr1[n];
	for(i=0;i<n;i++)
    {
      arr1[i] = arr[i];
    }
	
	int j=0;
	for(i=n-1;i>=0;i--)
    {
      arr[j] = arr1[i];
      j++;
    } 

    for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}
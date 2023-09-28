#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
   int array[100], search, c, n, position;
   /* search - element to search, c - counter, n - number of elements in array,
   position - The position in which the element is first found in the list. */

    scanf("%d", &n); // Number of elements in the array is read from the test case data

    for (c = 0; c < n; c++)
    scanf("%d", &array[c]); //Elements of array is read from the test data

    scanf("%d", &search);  //Element to search is read from the test case data

   /* Use the following in the printf statement to print the output
   printf("%d is not present in the array.", search);
   printf("%d is present at location %d.", search, position+1); //As array[0] has the position 1
   */
  	int count=0;
    for(int i=0;i<n;i++)
    {
      if (array[i]==search)
      { 
        position=i;
        count++;
        printf("%d is present at location %d.\n", search, position+1);
      }
    }

    if (count==0)
         printf("%d is not present in the array.\n", search);
    return 0;
}
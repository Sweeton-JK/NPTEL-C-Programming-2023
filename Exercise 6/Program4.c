#include<stdio.h>
 
int main() 
{
   int array[50], i, size;
 
   scanf("%d", &size); /*Accepts the size of array from test case data */

   for (i = 0; i < size; i++)
   scanf("%d", &array[i]); /* Read the array elements from the test case data */

    int temp[50],count=0;

    for (int i = 0; i < size; i++)
      {
        int j;
      
        for (j = 0; j < count; j++)
        {
          if (array[i] == temp[j])
            break;
        }
        if (j == count)
        {
          temp[count] = array[i];
          count++;
        }
      }

    size=count;

    for(i=0;i<size;i++)
      array[i]=temp[i];

    for (i = 0; i < size; i++) 
    {
      printf("%d\n", array[i]);
    }

}
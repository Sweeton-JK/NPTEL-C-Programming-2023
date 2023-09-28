#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

/* Use the printf statements as below:
 printf("%d found at location %d.", search, variable_name);
 printf("Not found! %d isn't present in the list.", search);
*/
 int first,last,mid,flag;
 first=0;
 last=n-1;
 
  while(first<=last)
  {
    mid=(first+last)/2;

    if(search ==array[mid]){
      flag=1;
      break;
    }
    else
      if(search >array[mid])
      first=mid+1;
      else
      last=mid-1;
  }
 
    if(flag==1)
       printf("%d found at location %d.\n", search, mid+1);
    else
       printf("Not found! %d isn't present in the list.\n", search);
    return 0;
}
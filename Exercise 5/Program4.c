#include<stdio.h>
int main()
{
    int N;
    float sum = 0.0;
    scanf("%d",&N); /*Read the value of N from test cases provided*/

/* Complete the program. Please use the printf statement given below:

printf("Sum of the series is: %.2f\n",sum);

*/
    	float i;
	for(i=1.0;i<=(float)N;i++)
    {
      sum += 1/i;
    }
	
	printf("Sum of the series is: %.2f",sum);
	return 1;
}
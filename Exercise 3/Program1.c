#include <stdio.h>
#define PI 3.14
void main()
{
    int radius;
    float area;
    /* Enter the radius of a circle */
    scanf("%d", &radius);

/*Here the first part and the last part of the program is already written. 
You have to write only the middle portion by carefully considering the
variables used. You can use more variables if required but no other input and output
statements can be used as the test input and corresponding output is already provided. 
There are two public test cases which you can see and check whether your program is correct. 
There is also one or two private test cases, the result of which you cannot
see and which are used for evaluation purpose*/ 
/*For example in this program the middle part can be written as:
area = PI * radius * radius;  
in the space provided */
	area = PI*radius*radius;
printf("Area of a circle = %5.2f", area);
}
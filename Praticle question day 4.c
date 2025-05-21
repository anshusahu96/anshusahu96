// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  int day, years, weeks;
  day= 1329;
  printf("Number of days : %d\n", day);
  years = day / 365;
  printf("Years : %d\n", years);
  weeks = (day % 365) / 7;
  printf("Weeks : %d\n", weeks);
  day = day - ((years*365)+(weeks*7));
  printf("Days : %d\n", day);
  // Calculate sum of two integers 
  int a , b;
  printf("First number :");
  scanf("%d\n",&a);
  printf("Second number :");
   scanf("%d\n",&b);
 int c = a + b ;
 printf("Sum of the above two integers = %d\n", c);
 
 // calculate product of two intgers
 int num1 , num2, num3;
 printf("Enter first number =");
 num1= scanf("%d\n", &num1 );
 printf("Enter second number =");
  num2= scanf("%d\n", &num2 );
  num3 = num1 * num2;
  printf("Product of above of two numbers %d\n", num3);
        return(0);
        
    
}


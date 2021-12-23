/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int i, j, num, isPrime;
 printf("Enter any number to print Prime factors: ");
 scanf("%d", &num);
 printf("All Prime Factors of %d are: \n", num);
 for(i=2; i<=num; i++)
 {
 if(num%i==0)
 {
 isPrime = 1;
 for(j=2; j<=i/2; j++)
 {
 if(i%j==0)
 {
 isPrime = 0;
 break;
 }
 }
 if(isPrime==1)
 {
 printf("%d, ", i);
 }
 }
 }
 return 0;
}

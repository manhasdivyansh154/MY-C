//Factorial of a number using function 
#include <stdio.h>
void factorial(int n){
  int sum =1;
      if(n==0){
        printf("1");
      }
    else{
        for(;n>0;--n){
            {sum*=n;}
        }
        printf("%d", sum);
    }
}
int main()
{
    int num;
    scanf ("%d", &num);
    factorial(num);
    return 0;
}
 //Check Number is even or odd using function
#include <stdio.h>
void oddEven(int n)
{
  if(n%2==0){
      printf("even");
  }
    else{
        printf("odd");
    }
}
int main()
{
    int num;
    scanf ("%d", &num);
    oddEven(num);
    return 0;
}
//Write diameter(), area() functions to find diameter and area of circle 
#include <stdio.h>
float getDiameter(float n)
{
    return n+n;
}
float getArea(float n)
{
    return 3.1416*n*n;
}
int main()
{
  float num;
  scanf ("%f", &num);
  printf("%.2f\n%.2f",getDiameter(num),getArea(num));
  return 0;
}
//Find cube of a number using function
#include <stdio.h>
void cube(int n)
{
  int cube= n*n*n;
    printf("%d", cube);
}
int main()
{
    int num;
    scanf ("%d", &num);
    cube(num);
    return 0;
}
//Write max(), min() functions for two numbers
#include <stdio.h>
int max(float n1, int n2)
{
    if(n1 > n2)
        return n1;
    else
        return n2; 
}
int min(float n1, int n2)
{
    if(n1 < n2)
        return n1;
    else
        return n2;  
}
int main()
{
  int n1, n2;
  scanf ("%d%d", &n1, &n2);
  printf("%d %d",max(n1,n2),min(n1,n2));
  return 0;
}
//Multiplication table of a number using function
#include <stdio.h>
void table( int n, int m){
  // Write your code here
    for(int i=1;i<=m;i++) {
        printf("%d\n", n * i);
    }
}
int main()
{
    int n, m;
    scanf ("%d", &n);
    scanf ("%d", &m);
    table(n, m);
    return 0;
}
//Find power of a number using functions
#include <stdio.h>
int power(int num, int pow)
{
    if (pow < 0) {
        return -1;   // negative powers not handled
    }
    if (pow == 0) {
        return 1;    
    }
    int result = 1;
    for (int i = 1; i <= pow; i++) {
        result *= num;
    }
    return result; 
}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",power(a,b));
  return 0;
}
//Add two numbers using function
#include <stdio.h>
int add (int a , int b){
    return a+b;
}
int main()
{
    int a,b;
    scanf ("%d", &a);
    scanf ("%d", &b);
    printf("%d", add(a,b));
    return 0;
}
//Number is prime or not
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int verifyPrime(int n) {
  // Write your code here
    if(n<=1){
        return 0;
    }
  for(int i=2;i*i<=n;i++){
      if(n%i==0)
          return 0;
  }
    return 1;
}
int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
      scanf("%d",&no);
     
    if (verifyPrime(no))
      printf("PRIME\n"); 
    else 
          printf("NOT PRIME\n"); 
   }
}
//Print all odd numbers between a and b using function
#include <stdio.h>
void printOdds(int a, int b)
{
  for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
}
int main()
{
  int a,b;
  scanf("%d%d", &a,&b);
  printOdds(a, b);
  return 0;
}
//Find Number of digits in a number using function
#include <stdio.h>
void numDigits(int n)
{
   int count = 0;
    if(n==0){
        printf("1");
        return ;
    }
    while(n != 0){
        n = n / 10;
        count++;
    }
    printf("%d", count);
}
int main()
{
  int num;
  scanf ("%d", &num);
  numDigits(num);
  return 0;
}
//Print all prime numbers between a and b using functions 
#include <stdio.h>
void printPrimes(int a, int b)
{
    int i, j, count, found = 0;
    for(i = a; i <= b; i++)
    {
        if(i < 2)
            continue;
        count = 0;
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }
        if(count == 2)
        {
            printf("%d ", i);
            found = 1;
        }
    }
    if(found == 0)
        printf("-1");  
}
int main()
{
  int a,b;
  scanf("%d%d", &a,&b);
  printPrimes(a, b);
  return 0;
}
//Check number is square or not using functions
#include <stdio.h>
void isSquare(int n)
{
    int i;
    for(i = 0; i * i <= n; i++){
        if(i * i == n){
            printf("yes");
            return;
        }  
    }
     printf("no");
}
int main()
{
    int num;
    scanf ("%d", &num);
    isSquare(num);
    return 0;
}
//Check number is armstrong or not using functions 
#include <stdio.h>
void isArmstrong(int n)
{
    int temp = n, digits = 0, sum = 0, rem, i;
    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        int power = 1;
        for(i = 0; i < digits; i++)
        {
            power = power * rem;
        }
        sum = sum + power;
        temp /= 10;
    }
    if(sum == n)
        printf("yes");
    else
        printf("no");
}
int main()
{
    int num;
    scanf ("%d", &num);
    isArmstrong(num);
    return 0;
}

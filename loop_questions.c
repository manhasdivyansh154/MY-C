//Sum of first n terms (using for loop)
#include <stdio.h>
int main()
{  int n;
 scanf("%d", &n);
 int sum = 0;
 for(int i=0;i<=n;i++){
     sum+=i;
 }
 printf("%d", sum);
    return 0;
}
//Multiplication table ( using for loop)
#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=m;i++){
        printf("%d\n", n*i);
    }
    return 0;
}
//Factorial of a number
long fact(int n) {
    long f = 1;
    int i;
    for(i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;    
}
//Write a program to swap the value of two variables.
#include <stdio.h>
int main()
{int n,m,temp;
 scanf("%d %d", &n, &m);
 temp=n;
 n=m;
 m=temp;
 printf("%d\n%d", n,m);
    return 0;
}
//Write a program to swap the value of two variables without using a third variable.
#include <stdio.h>
int main()
{ int n,m;
 scanf("%d %d", &n, &m);
 n=n+m;
 m=n-m;
 n=n-m;
 printf("%d\n%d", n, m);
    return 0;
}
//Write a program to find the sum of all the digits of a number.
#include <stdio.h>
int main()
{
    int N, n;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
     int sum = 0;
     scanf("%d", &n);
     while(n > 0){
            sum = sum + (n % 10);
            n = n / 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
//Write a function formNumber() that reads in a set of n single digits and convert them into a single integer.
#include <stdio.h>
int main(){
     int n, digit;
    int num = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &digit);
        num = num * 10 + digit;
    }
    printf("%d", num);
  return 0;
}
//Compare reverse and original number
#include <stdio.h>
int main()
{
    int n,digit;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int n, original, reversed=0;
        scanf("%d", &n);
        original = n;
    while(n>0){
        int digit = n%10;
        reversed=reversed*10 +digit;
        n=n/10;
    }
        if(original==reversed){
            printf("Equal\n");
        }
        else {
            printf("Not Equal\n");
        }
    }
    return 0;
}
//Sum of a set of numbers
#include <stdio.h>
int main()
{
    int n, num ,sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &num);
        sum+= num;
    }
    printf("%d", sum);
    return 0;
}

//Given a set of n students examination marks ( in the range 0 to 100) make a count of the number of students that passed the examination. A pass is awarded for all marks of 50 and above.

#include <stdio.h>
int main()
{   int n, marks, count=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &marks);
        if(marks>=50){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
//Write a program to generate and print all the primes in the first n positive integers. 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=2;i<=n;i++){
        int isPrime = 1;
    for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d\n", i);
        }
    }
    return 0;
}
//


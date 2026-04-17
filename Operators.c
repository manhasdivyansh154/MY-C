//Form a 4 digit number
#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    int number =a*1000+b*100+c*10+d;
    printf("%d", number);
    return 0;
}
//Reverse a 4 digit number
#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    int rev=(i%10)*1000+(i/10%10)*100+(i/100%10)*10+i/1000;
    printf("%d", rev);
    return 0;
}
//Convert days into years, weeks and days
#include <stdio.h>
int main()
{
 int years,week,days;
    scanf("%d", &days);
    years=days/365;
    days=days%365;
    week=days/7;
    days=days%7;
    printf("%d %d %d", years,week,days);
    return 0;
}
//Given 2 angles of a triangle, find the 3rd angle
#include <stdio.h>
int main()
{
    int angle1,angle2,angle3;
    scanf("%d %d", &angle1, &angle2);
    angle3 = 180- angle1 -angle2;
    printf(" %d", angle3);
    return 0;
}
//Sum of the first and the last digit of a 4 digit number
#include <stdio.h>
int main()
{ int n,number;
 scanf("%d", &n);
 number=(n%10)+(n/1000);
     printf("%d", number);
    return 0;
}
//Calculate amount using compound interest 
#include <stdio.h>
int main()
{float p,r,t,number;
 scanf("%f %f %f", &p, &r, &t);
 number=p*pow((1+r/100),t);
     printf("%.1f", number);
    return 0;
}
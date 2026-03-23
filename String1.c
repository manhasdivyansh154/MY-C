// #include <stdio.h>
// int main()
// {
//     char a[30]="hello";
//     char b[]="hallo";
//     printf("%s\n",a);
//     printf("%s\n",b);
//     return 0;
// }


//copy two string and also tell weather they are equal or not
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[30]="hello";
//     char b[30];
//     strcpy(b,a);
//     printf("%s\n",a);
//     printf("%s\n",b);
//     if(strcmp(a,b)==0)
//         printf("both string are equal");
//     else
//         printf("both string are not equal");
//     return 0;
// }

//reverse a string
// #include <stdio.h>
// #include <string.h>  
// int main()
// {
//     char a[30]="hello code";
//     char b[30];
//     int i,j;
//     j=strlen(a)-1;   
//     for(i=0;a[i]!='\0';i++)
//     {
//         b[j]=a[i];
//         j--;   
//     }
//     b[i]='\0';
//     printf("%s\n",a);
//     printf("%s\n",b);
//     return 0;    
// }


// copy a string 
// #include <stdio.h>
// #include <string.h>
// int  main(){
//     char a[]="hello";
//     char b[30];
//     strcpy(b,a);
//     printf("%s\n",a);
//     printf("%s\n",b);
//     return 0;
// }


//reverse the positioning of the words in a string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[30]="hello ji code krlo ji";
//     char b[30];
//     int i,j,k=0;
//     while(a[i]!='\0' || b[i]!='\0'){
//         if(a[i]!=b[i]){
//             isEqual=0;
//             break;
//         }
//         i++;
//     }
//     if(isEqual)
//         printf("both string are equal");
//     else
//         printf("both string are not equal");
//         return 0;
// }


//print the pyramid pattern both left and right upper and lower
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
     for(i=1;i<=5;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=5-i+1;k++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}


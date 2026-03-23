// reverse a numbers in array
// #include <stdio.h>
// int main() {
//     int i, n=7;
//     int a[7]={1,20,44,55,66,77,88};
//     int b[7]={0};
//     for(int i=0; i<n; i++){
//         b[i] = a[n-1-i];
//         printf("%d ", b[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int i, n = 7;
//     int a[7] = {1, 20, 44, 55, 66, 77, 88};
//     int tmp;
//     for (i = 0; i < n/2; i++) {
//         tmp = a[i];
//         a[i] = a[n-1-i];
//         a[n-1-i] = tmp;
//     }
//     for (i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }



// printing second maximum numbers in array
// #include <stdio.h>
// int main() {
//     int i;
//     int a[7] = {1,20,33,44,56,67,78};
//     int max = a[0];
//     int second_max = a[0];
//     for (i = 1; i < 7; i++) {
//         if (a[i] > max) {
//             second_max = max;
//             max = a[i];
//         } else if (a[i] > second_max && a[i] != max) {
//             second_max = a[i];
//         }
//     }
//     printf("Second maximum number is: %d\n", second_max);
//     return 0;
// }

// printing  maximum numbers in array
// #include <stdio.h>
// int main() {
//     int i;
//     int a[7] = {1,20,33,44,56,67,78};
//     int max = a[0];
//     for (i = 1; i < 7; i++) {
//         if (a[i] > max) {
//             max = a[i];
//         }
//     }
//     printf("Maximum number is: %d\n", max);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int i, even = 0, odd = 0;
//     int a[7] = {1, -20, 33, -44, 56, -67, 78};
//     for (i = 0; i < 7; i++) {
//         if (a[i] % 2 == 0) {
//             even++;
//             printf("%d is even and ", a[i]);
//         } else {            
//             odd++;
//             printf("%d is odd and ", a[i]);
//         }
//         if (a[i] > 0) {
//             printf("positive\n");
//         } else if (a[i] < 0) {
//             printf("negative\n");
//         } else {
//             printf("zero\n");
//         }
//     }
//     return 0;

// }


// #include <stdio.h>
// int main() {
//     int i, n = 7;
//     int a[7] = {1, 20, 44, 55, 66, 77, 88};
//     int tmp;
//     for (i = 0; i < n/2; i++) {
//         tmp = a[i];
//         a[i] = a[n-1-i];
//         a[n-1-i] = tmp;
//     }
//     for (i = 0; i < n ; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }



// Scan 2D array and print it


#include <stdio.h>
int main() {
    int i, j;
    int a[2][3];
    printf("Enter 6 numbers:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The 2D array is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
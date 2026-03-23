// Max in 2D Array
// #include <stdio.h> 
// int main() 
// { int i, j; 
//     int a[3][3] = {{1, 2, 3},  {4,5,6},  {7,8,9}}; 
//     int max = a[0][0];
//      for (i = 0; i < 3; i++) 
//      { for (j = 0; j < 4; j++) 
//         { if (a[i][j] > max)
//              { max = a[i][j];
//              } 
//             } 
//         } 
//         printf("Maximum number is: %d\n", max); 
//         return 0;
//      }

// max in 2D array using Scanf
// #include <stdio.h>
// int main() {
//     int i, j;
//     int a[3][3];
//     printf("Enter numbers:\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     int max = a[0][0];
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             if (a[i][j] > max) {
//                 max = a[i][j];
//             }
//         }
       
//     }
//      printf("Maximum number is: %d\n", max);
//     return 0;
// }


// transpose of 2D array
// #include <stdio.h> 
// int main() 
// { int i, j; 
//     int a[3][3]; 
//     printf("Enter numbers:\n");
//      for (i = 0; i < 3; i++) 
//      { for (j = 0; j < 3; j++) 
//         { scanf("%d", &a[i][j]);
//          } 
//         }
//          printf("Transpose of the array is:\n"); 
//          for (j = 0; j < 3; j++) {
//              for (i = 0; i < 3; i++) 
//              { 
//                 printf("%d ", a[i][j]); }
//                  printf("\n"); 
//                 }
//                   return 0; 
//               }


// sum of two array

// Multiple of two array
// #include <stdio.h> 
// int main() { 
//     int i, j; 
//     int a[3][3], b[3][3], multiple[3][3]; 
//     printf("Enter numbers for first array:\n");
//     for (i = 0; i < 3; i++) { 
//         for(j=0; j < 3; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter numbers for second array:\n");{
//     for(i = 0; i < 3; i++){
//         for(j = 0; j < 3; j++){
//             scanf("%d", &b[i][j]); } 
//         }
//         for(i = 0; i < 3; i++){ 
//             for(j = 0; j < 3; j++){
//                 multiple[i][j] = a[i][j]*b[j][i]; } 
//             }
//             printf("Mulyiple of the two arrays is:\n"); {
//             for(i=0; i< 3; i++){
//                 for(j = 0; j < 3; j++)
//                 printf("%d ", multiple[j][i]);
//             }
//             printf("\n");

//             }
            
//         }
//         return 0;
//     }
#include <stdio.h>

int main()
{
   int r, c, number;
   printf("Enter the number : ");
   scanf("%d", &number);
   for (r = number; r >= 1; r--) {
      
      for (c = r; c <= number; c++) {
         printf("%d ", c);
      }
      printf("\n");
      
   }
   return 0;
}
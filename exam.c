#include <stdio.h>
int main()
{
   int a;
   printf("Enter your rating \n");
   scanf("%d", &a);
   switch (a)
   {
   case 1:
      printf("your rating is 1");
      break;
   case 2:
      printf("your rating is 2");
      break;
   case 3:
      printf("your rating is 3");
      break;
   case 4:
      printf("your rating is 4");
      break;
   case 5:
      printf("your rating is 5");
      break;
   default:
      printf("your rating is invlaid");
      break;
   }

   return 0;
}
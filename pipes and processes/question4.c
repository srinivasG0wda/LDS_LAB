#include <stdlib.h>
#include <stdio.h>
int main()
{
   int num;
   printf("Enter the Number \n");
   scanf("%d",&num);
   int  n, i;
   n = fork();
   if (n > 0)
{ //when n is not 0, then it is parent process
 printf("PARENT PROCESS\n");
          if(num % 2 == 0)
            printf("%d is even.", num);
          else
            printf("%d is odd.", num);
}
   else
{ //when n is 0, then it is child process
           printf("\n CHILD PROCESS\n");
  int fact=1;
      for(i=1;i<=num;i++)
    {
      fact=fact*i;
      }
  printf("Factorial of %d is: %d",num,fact);
    }
   return 0;
}
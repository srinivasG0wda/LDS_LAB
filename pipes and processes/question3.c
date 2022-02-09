#include <stdio.h>
#include <sys/types.h>
#include<stdlib.h>
#include <unistd.h>
int main()
 {

   int x = fork(); //create child process
   if (x > 0) //if x is non zero, then it is parent process
      printf("Parent , PID is : %d\n", getpid());
   else if (x == 0)
 {
      sleep(5);
      x = fork();
      if (x > 0) {
         printf("Child- PID :%d and PID of parent : %d\n", getpid(), getppid());
         while(1)
            sleep(1);
         printf(" Child- PID of parent : %d\n", getppid());
      }else if (x == 0)
      printf("grandchild -> PID of parent : %d\n", getppid());
   }
   return 0;
}
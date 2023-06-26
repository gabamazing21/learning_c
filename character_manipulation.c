#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
/**
* main - learning character manipulation
* Return: always 0
*/
int main(void)
{
 char c;

      c = CHAR_MIN;
      while(c != CHAR_MAX){
              printf("%d\n", c);
              c = c+1;
      }

      exit(EXIT_SUCCESS);

}


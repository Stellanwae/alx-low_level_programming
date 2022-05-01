#include "main.h"
#include <stdio.h>

/**
*int main- standard function
*
*Return: 0
*/

int main()
{
  int n, s;
  s = '0';
  for(n = 0; n < 1024; n++)
  {
    if(n % 3 == 0 || n % 5 == 0)
    {
      s += n;
      if(n == 1023)
      {
        printf("%d\n",s);
      }
    }
  }
  return 0;
}

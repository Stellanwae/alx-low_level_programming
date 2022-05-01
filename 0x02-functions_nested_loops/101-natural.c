#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
*@n - ...
*
*Return: 0
*/

int main()
{
  int n, p, s;
  s = '0';
  for(n = '0'; n < '1024'; n++)
  {
    if(n % '3' == '0' || n % '5' == '0')
    {
      s += n;
      if(n == '1023')
      {
        _putchar(s);
        _putchar('\n');
      }
    }
  }
}

#include "main.h"

/**
 * print_numbers - prints 0-9
 *
 */

void print_numbers(void)
{
  char ch = 48;
  
  for (ch = 48; ch < 58; ch++)
  {
    _purchar(ch);
  }
  _purchar('\n');
}

#include "main.h"

/**
*
* int _isupper - checks if a letter is uppercase
*
* @c: Input
* Return: 1 if c is uppercase
* 0 if otherwise
*
*/

int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
  {
    return (1);
  }
  else
  {
    return (0);
  }
}

#include "main.h"

/**
*
* int _isupper - checks if a letter is uppercase
*
* @c - input for the function
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

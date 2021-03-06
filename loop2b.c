#include<stdio.h>
#include <stdlib.h>

int
is_prime_number (int num, int i)
{
  if (num < 2)
    {
      printf ("\n Enter numbers greater than 1");
      exit (0);
    }
  if (i == 1)
    {
      return 1;
    }
  else
    {
      if (num % i == 0)
	{
	  return 0;
	}
      else
	{
	  return is_prime_number (num, i - 1);
	}
    }
}


int
main ()
{
  int n, flag;
  printf ("Enter a number: \n");
  scanf ("%d", &n);
  flag = is_prime_number (n, n / 2);

  if (flag == 1)
    {
      printf ("%d is a prime number\n", n);
    }
  else
    {
      printf ("%d is not a prime number\n", n);
    }

  return 0;
}

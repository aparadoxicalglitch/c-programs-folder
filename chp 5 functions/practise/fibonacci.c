#include<stdio.h>
int fib (int);
int main ()
{
  int n, result;
  printf ("Enter the Nth Number: ");
  scanf ("%d", &n);
  result = fib (n);
  printf ("The %dth number in Fibonacci series is %d\n", n, result);
  return 0;
}
 
/* function for  recursive fibonocci call */
int fib (int n)
{    printf("Calling fib(%d)\n", n);
  if (n == 0)
    {
      return 0;
    }
  else if (n == 1)
    {
      return 1;
    }
  else
    {
      return (fib (n - 1) + fib (n - 2));
    }
}
 /* Fibonacci Series using Dynamic Programming
#include<stdio.h>
 
int fib(int n)
{
  // Declare an array to store Fibonacci numbers. 
  int f[n+2];   // 1 extra to handle case, n = 0
  int i;
 
  // 0th and 1st number of the series are 0 and 1
  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++)
  {
      // Add the previous 2 numbers in the series and store it 
      f[i] = f[i-1] + f[i-2];
  }
 
  return f[n];
}
 int main ()
{
  int n = 9;
  printf("%d", fib(n));
  getchar();
  return 0;
} */
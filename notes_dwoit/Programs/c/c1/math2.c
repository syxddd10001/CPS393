/*Source: math2.c
  Purpose: source code for factorial and fibonacci functions
*/
long fact(long n) {
  if (n == 0) return(1);
  else return (n*fact(n-1));
}
long fibonacci(long n) {
  if (n == 0)      return (0);
  else if (n == 1) return (1);
  else             return (fibonacci(n-1) + fibonacci(n-2));
}

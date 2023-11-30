/*Source: fact.c
  Purpose: function fact(int n) computes n!
  Input argument: n an integer
  Output: n! an integer
  Note: a program using fact.c must include fact.h
*/
long fact(long n) 
  {
    if (n < 0)
       return(-1);
    else if (n == 0)
       return(1);
    else
       return (n*fact(n-1));
}


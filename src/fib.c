/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
   
//SICK CODE YA KNO?!
//ASSUMING FIB STARTS AT 1

assert(n>0);
    if (n==1)
     return p;
     return fib(n-1,p+pp,p);
    
    
}

/*************************************************************************
* Title: (CIS265_10A) Macros.
* File: disp.h
* Author: James Eli
* Date: 10/19/2017
*
* (a) Write a macro DSP(f, x) that expands into a call of printf that 
* displays the value of the function f when called with argument x. For 
* example,
*   DISP(sqrt, 3.0);
* Should expand into:
*   printf("sqrt (%g) = %g\n", 3.0, sqrt(3.0)); 
* (b) Write a macro DISP2(f, x, y) that’s similar to DISP but works for 
* functions with two arguments.
*
* Submitted in partial fulfillment of the requirements of PCC CIS-265.
*************************************************************************
* Change Log:
*   10/19/2017: Initial release. JME
*************************************************************************/
#ifndef _DISP_H_
#define _DISP_H_

#include <stdio.h>
#include <math.h>

// My macro definitions.
#define DISP(f, x) printf(#f " (%g) = %g\n", (double)x, (double)f(x)); 
#define DISP2(f, x, y) printf(#f " (%g, %g) = %g\n", (double)x, (double)y, (double)f(x, y)); 

#endif


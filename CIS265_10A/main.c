/*************************************************************************
* Title: (CIS265_10A) Macros.
* File: main.c
* Author: James Eli
* Date: 9/2/2017
*
* (a) Write a macro DISP(f, x) that expands into a call of printf that 
* displays the value of the function f when called with argument x. For 
* example,
*   DISP(sqrt, 3.0);
* Should expand into:
*   printf("sqrt (%g) = %g\n", 3.0, sqrt(3.0)); 
* (b) Write a macro DISP2(f, x, y) that’s similar to DISP but works for 
* functions with two arguments.
*
* Notes:
*  (1) Compiled with MS Visual Studio 2017 Community (v141), using C
*      language options.
*
* Submitted in partial fulfillment of the requirements of PCC CIS-265.
*************************************************************************
* Change Log:
*   09/02/2017: Initial release. JME
*************************************************************************/
#include "disp.h"

#ifdef NDEBUG
int main(void) {
	// Test DISP macros.
	DISP(sqrt, 16.0);
	DISP(abs, -1);
	DISP(sin, 0.5);
	DISP(round, 1.5);

	// Test DISP2 macros.
	DISP2(fmin, 1, -2);
	DISP2(fmax, 1, -2);
	DISP2(atan2, 0.5, 1.5);
	DISP2(pow, 4.0, 2.5);
}
#endif

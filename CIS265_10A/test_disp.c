/*************************************************************************
* Title: (CIS265_10A) Macros.
* File: test_disp.c
* Author: James Eli
* Date: 10/19/2017
*
* This code compiles under Debug version and performs tests upon DISP 
* and DISP2 macros inside the release version of program. This code does 
* not compile in the release version.
*
* See main.c and disp.h files for further information.
*
* Notes:
*  (1) Compiled with MS Visual Studio 2017 Community (v141), using C
*      language options.
*
* Submitted in partial fulfillment of the requirements of PCC CIS-265.
*************************************************************************
* Change Log:
*   10/19/2017: Initial release. JME
*************************************************************************/
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "Disp.h"

#define MATCH -1 // Return value from strcmp function indicating a match.

#ifndef NDEBUG

int main(void) {
	char buffer[80];
	FILE *stream;
	char *expectedOutput[8] = { 
		"sqrt (16) = 4", "abs (-1) = 1", "sin (0.5) = 0.479426", "round (1.5) = 2", 
		"fmin (1, -2) = -2", "fmax (1, -2) = 1", "atan2 (0.5, 1.5) = 0.321751", "pow (4, 2.5) = 32"
	};
	printf("Testing DISP and DSIP2 macros...\n");

	// This runs the release version of program which writes its output to a pipe. 
	// Open this pipe with read text attribute, and read it like a text file.
	if ((stream = _popen("..\\release\\CIS265_10A.exe", "rt")) == NULL)
		exit(EXIT_FAILURE);

	int i = 0;
	// Read pipe & assert results until end of file, or error occurs. 
	while (fgets(buffer, 128, stream)) 
		assert(strcmp(expectedOutput[i++], buffer) == MATCH);

	// Close pipe and print return value of stream. 
	if (feof(stream)) {
		_pclose(stream);
		printf("Test passed.\n");
	}
	else
		printf("Error: Failed to read pipe to the end.\n");
}

#endif


# Pima CC CIS265 Week #10 Project A

(a) Write a macro DSP(f, x) that expands into a call of printf that displays the value of the function f when called with argument x. For 
example,
```C
  DISP(sqrt, 3.0);
```
Should expand into:
```C
  printf("sqrt (%g) = %g\n", 3.0, sqrt(3.0)); 
```
(b) Write a macro DISP2(f, x, y) that’s similar to DISP but works for functions with two arguments.

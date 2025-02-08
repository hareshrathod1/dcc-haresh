/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 #include <stdio.h>
 #include <assert.h>

 void minmax(int xs[], int n, int *min, int *max)
 {
     assert(min && max);

     if (n <= 0) return;

     /* initialize */ *min = *max = xs[0];

     size_t i;
     for (i = 1; i < n-1; i += 2) {
	  int m, M;

	  if (xs[i] < xs[i+1]) {
	      m = xs[i];
	      M = xs[i+1];
	  } else {
	      m = xs[i+1];
	      M = xs[i];
	  }

	  if (m < *min) *min = m;
	  if (M > *max) *max = M;
     }

     if (i < n) {
	if (xs[i] < *min) *min = xs[i];
	if (xs[i] > *max) *max = xs[i];
     }
 }

 int main()
 {
     int xs[] = { 1,2,-4,9,-8,7,5,0,-9,8,6,665,5,5,5,57,-9,-9,87,-0,-7 };
     int m, M;

     minmax(xs, 9, &m, &M);
     printf("%d %d\n", m, M);

     minmax(xs, 7, &m, &M);
     printf("%d %d\n", m, M);
     
     return 0;

 }
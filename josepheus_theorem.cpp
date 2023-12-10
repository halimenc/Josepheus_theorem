#include <stdio.h>
#include <math.h>
#define MAXITER 50

//This is a script that explains the JOSEPHUS THEOREM
//n=2^a+b
//last=j(n)=2b+1 

int main()
{
	int i, a, b, last;
	for (i = 1; i < MAXITER; i++)
	{
		int N = i;
		a = log2(N);
		b = N - pow(2, a);
		last = 2 *b + 1;
		printf(" J(%3d)=%3d\n", N, last);
	}
	return 0;
}

#include <stdio.h>

int buf[20] = {0,1,2,3,4,5,6,7,8,9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

//
void backfunc (int *buf, int a, int b) {
	int mid = (a+b)/2;
	if (b -a < 2) {
		if (a == b)
			printf ("%d\n", a);
		else
			printf ("%d,%d\n", a, b);
		return;

	} else
		printf ("%d\n", mid);
	backfunc (buf, a, mid-1);
	backfunc (buf, mid+1, b);
}

//
int main () {
	backfunc (buf, 0, sizeof (buf)/sizeof (int)-1);
	return 0;
}


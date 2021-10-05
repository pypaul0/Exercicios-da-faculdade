#include <stdio.h>
int main() {
	int x, y = 1,*p;
	x = 9;
	p = &x;
	x = x * 3;
	printf("%d\n", *p);
	p = &y;
	y = y + (*p);
	printf("%d\n", y);
	printf("%d\n", *p);
}

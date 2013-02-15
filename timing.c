#include <stdio.h>
#include <sys/time.h>
#include <time.h>

main()
{
	struct timeval start;
	struct timeval end;
	float x = 1.00001;
	float i;
	gettimeofday(&start, NULL);
	for (i = 0; i < 100000; i++) {
		x = x * 1.00001;
	}
	gettimeofday(&end, NULL);
	printf("%f\n", x);
	
	printf("%ld\n", (end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec));
}

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
int seed = -2147483648;
int get_rand (void) {
	srand(seed);
	seed += 2;
	return rand() % 10;
}

void find_frequencies (int selection) {
	int i = 0, rand_num = 0;
	int ranges[10] = {0};
	while (i < selection) {
		rand_num = get_rand ();
		if ((rand_num == 0) && (rand_num < 1)) 
			ranges[0]++;
		else if ((rand_num == 1) && (rand_num < 2))
			ranges[1]++;
		else if ((rand_num == 2) && (rand_num < 3))
			ranges[2]++;
		else if ((rand_num == 3) && (rand_num < 4))
			ranges[3]++;
		else if ((rand_num == 4) && (rand_num < 5))
			ranges[4]++;
		else if ((rand_num == 5) && (rand_num < 6))
			ranges[5]++;
		else if ((rand_num == 6) && (rand_num < 7))
			ranges[6]++;
		else if ((rand_num == 7) && (rand_num < 8))
			ranges[7]++;
		else if ((rand_num == 8) && (rand_num < 9))
			ranges[8]++;
		else if ((rand_num == 9) && (rand_num < 10))
			ranges[9]++;
		i++;	
	}
	i = 0;
	while (i < 10) {
		printf("Frequency on [ %d ; %d ) = %d\n", i, i + 1, ranges[i]);
		i++;
	}
	printf("\n");
}

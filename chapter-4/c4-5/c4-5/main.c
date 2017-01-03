//
//  main.c
//  c4-5
//
//  Created by Xavier Chong on 2017-01-01.
//  Copyright © 2017 XJCHONG. All rights reserved.
//

// Write a program which consumes an 11 digit UPC and produces a
//  check-digit.

#include <stdio.h>

int main(void) {
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total;
	printf("Enter the 11-digit UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
		  &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = (3 * first_sum) + (second_sum);
	
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
	return 0;
}

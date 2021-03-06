// OS Assignment 3.cpp : Defines the entry point for the console application.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Program1.h"
#include "Program2.h"
#include "Program3.h"
#include "Program4.h"

int main()
{
	unsigned int number_of_points = 1000000;
	srand((unsigned)time(NULL));
	printf("Number of ponts = %d\n", number_of_points);
	printf("Program1 runtime = %f seconds\n\n", program1(number_of_points));
	printf("Program2 runtime = %f seconds\n\n", program2(number_of_points));
	printf("Program3 runtime = %f seconds\n\n", program3(number_of_points));
	printf("Program4 runtime = %f seconds\n\n", program4(number_of_points));
}


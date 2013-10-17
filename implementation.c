#include <averages_header.h>
/*
 * implementation.c
 *
 *  Created on: Oct 17, 2013
 *      Author: C15Geoffrey.Novakows
 */

int* movingAverage(int allNumbers[], int numberOfSamples, int* movingAverage, int size){
	int n = numberOfSamples;
	int sum = 0;
	int* pointer;
	int i, x;
	for(i = 0; i < size; i++){
		*pointer = allNumbers[i];
		pointer++;
		for(x = 1; x < n; x++){
			*pointer = allNumbers[i+x];
			pointer++;
		}
		*movingAverage = sum / n;
		movingAverage++;
		sum = 0;
		for(x = 0; x < n; x++){
			pointer--;
		}
	}
	return movingAverage;
}

int maximum(int* allNumbers, int maximum, int size){
	int i;
	for(i = 0; i < size; i++){
	if(*allNumbers > maximum){
		maximum = *allNumbers;
	}
	allNumbers++;
	}
	return maximum;
}

int minimum(int* allNumbers, int minimum, int size){
	int i;
	for(i = 0; i < size; i++){
	if(*allNumbers < minimum){
		minimum = *allNumbers;
	}
	allNumbers++;
	}
	return minimum;
}

int rangeCalc(int max, int min){
	return max - min;
}




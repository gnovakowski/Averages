/*
 * averages_header.h
 *
 *  Created on: Oct 17, 2013
 *      Author: C15Geoffrey.Novakows
 */

#ifndef AVERAGES_HEADER_H_
#define AVERAGES_HEADER_H_

int* movingAverage(int allNumbers[], int numberOfSamples, int* movingAverage, int size);
int maximum(int* allNumbers, int maximum, int size);
int minimum(int* allNumbers, int minimum, int size);
int rangeCalc(int max, int min);

#endif /* AVERAGES_HEADER_H_ */

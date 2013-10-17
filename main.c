#include <msp430.h> 
#include <averages_header.h>

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    int max;
    int min;
    int* Averages;
    int range;
    int numbers[] = {45, 42, 41, 40, 43, 45, 46, 47, 49, 45};
    int size = 10;
    max = -256;
    min = 255;
    *Averages = 0;

    Averages = movingAverage(numbers, 2, Averages, size);
    max = maximum(numbers, Maximum, size);
    min = minimum(numbers, Minimum, size);
    range = rangeCalc(Maximum, Minimum);

	return 0;
}

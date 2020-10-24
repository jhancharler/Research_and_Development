/**
 * @file stats.c
 *
 * @brief Produces statistical analysis of array.
 * 
 * Analyses an array and reports analytics on max, min, mean and median. Also
 * sorts data and finally prints to console.
 *
 * @author Jhan Charler
 * @date 24/10/2020
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_array(test, SIZE);

}

void print_statistics(unsigned char arr[], int size)
{}

void print_array(unsigned char arr[], int size){

	printf("[");
	for (int i = 0; i < size; i++){
		printf("%i, ", arr[i]);
	}
	printf("\b\b]\n");	// remove the final comma and space
}

 unsigned char find_median(unsigned char arr[], int size)
 {}

 unsigned char find_mean(unsigned char arr[], int size)
 {}

 unsigned char find_maximum(unsigned char arr[], int size)
 {}

 unsigned char find_minimum(unsigned char arr[], int size)
 {}

 unsigned char* sort_array(unsigned char arr[], int size)
 {}

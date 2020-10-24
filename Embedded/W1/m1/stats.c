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

  printf("Mean = %i\n", find_mean(test, SIZE)); 

  printf("Max = %i\n", find_maximum(test, SIZE)); 

  printf("Min = %i\n", find_minimum(test, SIZE)); 


}

void print_statistics(unsigned char arr[], int size)
{}

// prints contents of array
void print_array(unsigned char arr[], int size){ 

	printf("Printing array:\n[");
	for (int i = 0; i < size; i++){
		printf("%i, ", arr[i]);
	}
	printf("\b\b]\n");	// remove the final comma and space
}

 unsigned char find_median(unsigned char arr[], int size){

 	// Sort array

 	// Go to middle
 }

 //calculates and returns mean
 unsigned char find_mean(unsigned char arr[], int size){

 	unsigned int sum = 0;

 	for (int i=0; i<size; i++){
 		sum += (unsigned int)arr[i];
 	}

 	float ans = sum / size;

 	unsigned char avg = (unsigned char)ans;

 	return avg;
 }

 unsigned char find_maximum(unsigned char arr[], int size){

 	unsigned char max = 0;

 	for (int i = 0; i < size; i++){
 		if (arr[i] > max){
 			max = arr[i];
 		}
 	}

 	return max;
 }

 unsigned char find_minimum(unsigned char arr[], int size){
 	unsigned char min = 0xFF;

 	for (int i = 0; i < size; i++){
 		if (arr[i] < min){
 			min = arr[i];
 		}
 	}

 	return min;
 }

 unsigned char* sort_array(unsigned char arr[], int size){

 }

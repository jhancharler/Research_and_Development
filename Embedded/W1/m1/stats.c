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

  // Print min, max, mean, median and the sorted array.
  print_statistics(test, SIZE);

}

void print_statistics(unsigned char arr[], int size){

  print_array(arr, size);

  printf("Min = %i\n", find_minimum(arr, size));

  printf("Max = %i\n", find_maximum(arr, size)); 

  printf("Mean = %i\n", find_mean(arr, size)); 

  printf("Median = %i\n", find_median(arr, size)); 

  print_array(arr, size);

}

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
 	sort_array(arr, size);

 	// Go to middle
 	int middle = size / 2;

 	return arr[middle];
 }

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

 void sort_array(unsigned char arr[], int size){

 	printf("Sorting array.\n");
 	merge_sort(arr, 0, size-1);
 }

 void merge_sort(unsigned char arr[], int start, int end){

 	if (start >= end) return;

 	int middle = start + ((end - start)/2);

 	merge_sort(arr, start, middle); // sort left side
 	merge_sort(arr, middle+1, end); // sort right side

 	merge(arr, start, middle, end);

 	return;
 }

 void merge(unsigned char arr[], int start, int middle, int end){

 	unsigned char tempArr[SIZE];

 	int i = start;
 	int j = middle+1;
 	int pos = start;
 	while (i < middle+1 && j < end+1){

 		// Merge
		if (arr[i] < arr[j]){
			tempArr[pos] = arr[i];
			i++;
			pos++;
		}
		else{
			tempArr[pos] = arr[j];
			j++;
			pos++;
		}
 	}

 	// Corner cases
 	while (i < middle+1){
		tempArr[pos] = arr[i];
		i++;
		pos++;
 	}

 	while (j < end+1){
		tempArr[pos] = arr[j];
		j++;
		pos++;
 	}

 	for (int i = start; i < end+1; i++){
 		arr[i] = tempArr[i];
 	}
 }



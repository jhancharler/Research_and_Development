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


}

void print_statistics(int* arr, int size);

void print_array(int* arr, int size);

int find_median(int* arr, int size);

int find_mean(int* arr, int size);

int find_maximum(int* arr, int size);

int find_minimum(int* arr, int size);

int* sort_array(int* arr, int size);
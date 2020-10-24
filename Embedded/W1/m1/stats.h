/**
 * @file stats.h
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

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints stats to console.
 *
 * Prints the min, max, mean and median of an array to console.
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return Void. 
 */
void print_statistics(unsigned char arr[], int size);

/**
 * @brief Prints array to screen
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return Void. 
 */
 void print_array(unsigned char arr[], int size);

 /**
 * @brief Returns median value of array (rounded down)
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The median of array. 
 */
 unsigned char find_median(unsigned char arr[], int size);

 /**
 * @brief Returns the mean of an array
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The mean of array.
 */
 unsigned char find_mean(unsigned char arr[], int size);

 /**
 * @brief Returns the maximum number in an array
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The max value in array.
 */
 unsigned char find_maximum(unsigned char arr[], int size);

 /**
 * @brief Returns the minimum number in an array
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The min value in array.
 */
 unsigned char find_minimum(unsigned char arr[], int size);

 /**
 * @brief Sort and returns array using merge sort
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The pointer to the start of the array.
 */
 void sort_array(unsigned char arr[], int size);

  /**
 * @brief Helper function to sort_array
 *
 * This is called recursively. Applies the merge sort algorithm.
 * The function is called with smaller and smaller start/end interval
 *
 * @param arr The array to be analysed.
 * @param start The starting point of array to sort
 * @param end The end of array to sort
 *
 * @return Void
 */
 void merge_sort(unsigned char arr[], int start, int end);

  /**
 * @brief Merges two sorted arrays
 *
 * This is called recursively. Applies the merge sort algorithm.
 * The function is called with smaller and smaller start/end interval
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 * @param start The starting point of first array
 * @param middle The end point of first array and 1 less than start of second array
 * @param end The end of second array
 *
 * @return Void
 */
 void merge(unsigned char arr[], int start, int middle, int end);

#endif /* __STATS_H__ */

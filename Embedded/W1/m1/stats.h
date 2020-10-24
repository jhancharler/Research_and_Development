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
void print_statistics(int* arr, int size);

/**
 * @brief Prints array to screen
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return Void. 
 */
 void print_array(int* arr, int size);

 /**
 * @brief Returns median value of array (rounded down)
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The median of array. 
 */
 int find_median(int* arr, int size);

 /**
 * @brief Returns the mean of an array
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The mean of array.
 */
 int find_mean(int* arr, int size);

 /**
 * @brief Returns the maximum number in an array
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The max value in array.
 */
 int find_maximum(int* arr, int size);

 /**
 * @brief Returns the minimum number in an array
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The min value in array.
 */
 int find_minimum(int* arr, int size);

 /**
 * @brief Sort and returns array using ...
 *
 * @param arr The array to be analysed.
 * @param size The size of array.
 *
 * @return The pointer to the start of the array.
 */
 int* sort_array(int* arr, int size);

#endif /* __STATS_H__ */

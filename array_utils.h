/*
 * Name: Luciano Carvalho (lguedesdecarvalhon2@huskers.unl.edu)
 *
 * Date: 2023 - 10 - 12
 *
 * Header file of some functions to manipulate a given array,
 */

/**
 * Checks if contains the value x in a array.
*/
int contains(const int *arr, int size, int x);

/**
 * Checks if contains a value x in a array in the range
 * of the index i and j.
*/
int containsWithin(const int *arr, int size, int x, int i, int j);

/**
 * Create a new copy of the array, increasing or decreasing its
 * size. 
*/
int * paddedCopy(const int *arr, int oldSize, int newSize);

/**
 * Reverses the original array.
*/
void reverse(int *arr, int size);

/**
 * Returns a copy of the original array inverted.
*/
int * reverseCopy(const int *arr, int size);


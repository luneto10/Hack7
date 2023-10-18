/*
 * Name: Luciano Carvalho (lguedesdecarvalhon2@huskers.unl.edu)
 *
 * Date: 2023 - 10 - 12
 *
 * Some functions to manipulate a given array,
 */
#include <stdlib.h>

#include "array_utils.h"

int contains(const int *arr, int size, int x)
{
    if (arr == NULL)
    {
        return 0;
    }

    if (size < 0)
    {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return 1;
        }
    }
    return 0;
}

int containsWithin(const int *arr, int size, int x, int i, int j)
{
    if (arr == NULL)
    {
        return 0;
    }

    if (size < 0 || i < 0 || j < 0)
    {
        return 0;
    }

    for (int indexStart = i; indexStart <= j; indexStart++)
    {
        if (arr[indexStart] == x)
        {
            return 1;
        }
    }
    return 0;
}

int *paddedCopy(const int *arr, int oldSize, int newSize)
{
    if (arr == NULL)
    {
        return NULL;
    }

    if (oldSize < 0 || newSize < 0)
    {
        return NULL;
    }

    int *newArray = (int *)malloc(newSize * sizeof(int));
    if (newSize < oldSize)
    {
        for (int i = 0; i < newSize; i++)
        {
            newArray[i] = arr[i];
        }
    }
    else
    {
        for (int i = 0; i < oldSize; i++)
        {
            newArray[i] = arr[i];
        }

        for (int i = 0; i < (newSize - oldSize); i++)
        {
            newArray[(oldSize) + i] = 0;
        }
    }
    return newArray;
}

void reverse(int *arr, int size)
{
    if (arr == NULL)
    {
        return;
    }

    if (size < 0)
    {
        return;
    }

    int *arrayTemp = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        arrayTemp[i] = arr[(size - 1) - i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = arrayTemp[i];
    }

    free(arrayTemp);
}

int *reverseCopy(const int *arr, int size)
{
    if (arr == NULL)
    {
        return NULL;
    }

    if (size < 0)
    {
        return NULL;
    }

    int *arrayCopy = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        arrayCopy[i] = arr[(size - 1) - i];
    }
    return arrayCopy;
}

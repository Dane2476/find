/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include <math.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */


bool search(int value, int values[], int n)
{
    int max = n;
    int min = 0;

    while (true)
    {

        int mid = (max + min)/2;

        if (value == values[mid])
        {
            return true;
        }
        else if (max - min == 1)
        {
            return false;
        }
        else if (value > values[mid])
        {
            min = mid;
        }
        else if (value < values[mid])
        {
            max = mid;
        }

    }

    return false;
}


void sort(int values[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
       int min = i;
       int j;

       for (j = i; j < n - 1; j++)
       {
           if (values[j + 1] < values[min])
           {
               min = j + 1;
           }
        }
        if (min != i)
        {
            int temp = values [i];
            values[i] = values[min];
            values[min] = temp;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%i\n", values[i]);
    }
    return;
}

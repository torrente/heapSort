/*==============================================================================
Program: Heap.cpp 
Programmer: David Torrente
Program Description: This program will ask the user to enter the size of an 
                     array to populate with values. The array will then be 
                     converted into a heap, and again sorted in ascending 
                     order. Each version or the array is displayed to the
                     console. This file contains the function definitions 
                     needed to turn an array into a heap, and also to sort
                     it. It also contains helper functions that are used
                     within the driver program.
==============================================================================*/

#include <iostream>
#include "Heap.h"

using namespace std;

void heapify(int arrayParameter[], int size)
{
     //Parent is always index/2
     for (int i = size/2; i>=1; i--)
     {
         percolateDown(arrayParameter, i, size);
     } 
}

void percolateDown(int array[], int subTreeIndex, int size)
{
     int temp;
     int childLeft = 2*subTreeIndex; //child is always 2*index
     
     while (childLeft <= size)
     {
           //first check is to make sure that the heap
           //looks only at the second to the last element, since
           //it will compare this to said element + 1
           //if the child node on the right is larger than the one
           //on the left, use it as the comparison value.
           if (childLeft < size && array[childLeft] < array[childLeft+1])
           {
                 childLeft++;
           }
           
           //if the parent contains a value less than
           //the child, swap the two.
           if (array[subTreeIndex]<array[childLeft])
           {
              temp = array[subTreeIndex];
              array[subTreeIndex] = array[childLeft];
              array[childLeft] = temp;
              subTreeIndex = childLeft;
              childLeft = 2*childLeft;
           }
           
           else
           {
               break;
           }
     }                   
}

void heapSort(int arrayParameter[], int size)
{

     int temp;
     
     heapify(arrayParameter, size);

     for(int i = size; i >=2; i--)
     {
             temp = arrayParameter[1];
             arrayParameter[1] = arrayParameter[i];
             arrayParameter[i] = temp;
             percolateDown(arrayParameter, 1, i-1);
     }
             
}

void populateArray(int arrayParameter[], int size)
{
     for (int i = 1; i <= size; i++)
     {
         cout<< "Please enter in an integer to add to ";
         cout<< "array location " << i << ": ";
         cin>> arrayParameter[i];
     }
}    

void displayArray(int arrayParameter[], int size)
{
         for (int i = 1; i <= size; i++)
     {
         cout<<i<<" "<< arrayParameter[i]<<endl;
     }
}


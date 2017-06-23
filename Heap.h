/*==============================================================================
Program: Heap.h 
Programmer: David Torrente

Program Description: This program will ask the user to enter the size of an 
                     array to populate with values. The array will then be 
                     converted into a heap, and again sorted in ascending 
                     order. Each version or the array is displayed to the
                     console. This file contains the function prototypes 
                     needed to turn an array into a heap, and also to sort
                     it. It also contains helper functions that are used
                     within the driver program.
==============================================================================*/


/*==============================================================================
void heapify(int[], int)

Purpose: Take an array of any length and apply the heapify algorithm to it. This
         algorithm will make it so that each parent node is greater than both
         of the children below it. Note that this array used [1] as the 
         first entry. As such, it counts to the size of the array passed in.
Precondition: None.
Postcondition: The array passed in will be modified so that the heapify 
               algorithm is applied to it. 
==============================================================================*/
void heapify(int[], int);

/*==============================================================================
void heapSort(int[], int)

Purpose: Take a heap or array, and sort it in ascending order. This function
         first applies the heaify function, as a heap is needed to properly
         sort. This allows either a heap (which will be unchanged) or array
         to be passed in. This then applies the heap sort algorithm to the 
         array. Note that this array used [1] as the first entry. As such, 
         it counts to the size of the array passed in.
Precondition: None (can sort either a heap or array without a problem). 
Postcondition: The heap, represented as an array that is passed in,
                will now be in ascending order.
==============================================================================*/
void heapSort(int[], int);

/*==============================================================================
void displayArray(int[], int)
Purpose: Display the contents of an array. Note that this implementation is 
         based on 1, so element [0] is not included in the display.
Precondition: None
Postcondition: The contents of an array are displayed. 
==============================================================================*/
void displayArray(int[], int);

/*==============================================================================
void percolateDown(int[], int, int)
Purpose: percolates through a heap and moves the values into proper order such
         that each value that is found to be less than the parent is moved
         down the listing. Must be run on multiple segments in order to 
         fully percolate the lower values down the tree. Note that this array
         used [1] as the first entry. As such, it counts to the size 
         of the array passed in.
Precondition: None
Postcondition: The array heap will have it's current segment properly sorted.
               
==============================================================================*/
void percolateDown(int[], int, int);


/*==============================================================================
void populateArray(int[], int)

Purpose: Populates the array passed in with specific integers.
Precondition: None
Postcondition: The array passed in as a parameter will have its' values
               assigned one at a time by the user. Note that this array skips
               value [0] and populates to the value of size, rather than
               size -1.
==============================================================================*/
void populateArray(int[], int);

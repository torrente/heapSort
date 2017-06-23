/*==============================================================================
Program: DriverProgram8.cpp 
Programmer: David Torrente
Program Description: This program will ask the user to enter the size of an 
                     array to populate with values. The array will then be 
                     converted into a heap, and again sorted in ascending 
                     order. Each version of the array is displayed to the
                     console. Note: populateRandom is commented out in the
                     driver. 
==============================================================================*/

#include <iostream>
#include "Heap.h"

using namespace std;

int main()
{

    int arraySize;
    int * array;
    char option;
    
    cout<<"Welcome to the heapify program."<<endl;
    cout<<"Press 'h' or 'H' to create an array and sort it or any other key to quit."<<endl;
    cout<<"Option: ";
    cin>>option;
    
    while (option == 'h' || option == 'H')
    {        
        cout<<"Enter array size greater than 0: ";
        cin>>arraySize;
        while(arraySize<=0)
             {
                 cout<<"Invalid input. Please enter an array size greater than 0: ";
                 cin>>arraySize;
             }
         
        array = new int[arraySize + 1];
        populateArray(array, arraySize);
        displayArray(array, arraySize);
    
        cout<<"----------heaping----------"<<endl;
        heapify(array, arraySize);
        displayArray(array, arraySize);
    
        cout<<"----------heaping sorted----------"<<endl;
        heapSort(array, arraySize);
        displayArray(array, arraySize);
 
        delete [] array;
        
        cout<<"Press 'h' or 'H' to create an array and sort it or any other key to quit."<<endl;
        cout<<"Option: ";
        cin>>option;


    }//END While 
 
 system("pause");
 return 0;   
}


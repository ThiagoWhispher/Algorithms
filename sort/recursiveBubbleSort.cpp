#include <bits/stdc++.h> 

using namespace std; 
  

void bubbleSort(int array [], int rightIndex) { 
    if (rightIndex == 1) 
        return; 

    for (int i = 0; i < rightIndex-1; i++) 
        if (array[i] > array[i+1]) 
            swap(array[i], array[i+1]); 
  
    bubbleSort(array, rightIndex-1); 
} 
  
void printArray(int array[], int rightIndex) { 
    for (int i = 0; i < rightIndex; i++) 
        cout << array[i] << " ";
    cout << "" << endl;
} 
  
int main() { 
    int array[] = {3,77,2, 34, 25, 11, 12, 9, 7}; 
    int lenght = sizeof(array)/sizeof(array[0]); 
    bubbleSort(array, lenght); 
    printArray(array, lenght); 
} 
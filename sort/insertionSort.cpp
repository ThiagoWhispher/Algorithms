#include<bits/stdc++.h>

using namespace std;
void printArray (int arg[], int length) {
  for (int n = 0; n < length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}


void insertionSort(int array [], int leftIndex, int rightIndex){
    for (int i = leftIndex+1; i <= rightIndex; i++){
        int key = array[i];
        int j = i-1;
        while(j>= leftIndex && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
    printArray(array,rightIndex);
}

int main(){
   int array [] = {9,3,8,2, 4 , 1, 7 ,6,10};
   int size = sizeof(array) / sizeof(array[0]);
   insertionSort(array, 0 , size);
}

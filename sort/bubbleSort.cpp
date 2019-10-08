#include <bits/stdc++.h>

using namespace std;

void printArray (int arg[], int length) {
  for (int n = 0; n < length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

void bubbleSort(int array [], int leftIndex, int rightIndex){
    for(int i = leftIndex; i < rightIndex; i++){
        for(int j = leftIndex ; j < rightIndex ; j++){
            if(array[j] > array[j + 1]){
                int aux = array[j];
                array[j] = array[j + 1];
                array[j+1] = aux;
            }
        }
    }
    printArray(array,rightIndex);
}

int main(){
   int array [] = {8, 9, 4, 10, 1, 2};
   int size = sizeof(array) / sizeof(array[0]);
   bubbleSort(array, 0 , size);
}

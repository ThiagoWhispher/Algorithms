#include<bits/stdc++.h>

using namespace std;

int binarySearch(int array [], int leftIndex, int rightIndex, int toSearch){
    if(leftIndex > rightIndex)
        return -1;

    int middle = leftIndex + (rightIndex - leftIndex ) / 2;

    if(array[middle] == toSearch){
        return middle;
    }
    if(array[middle] > toSearch){
        return binarySearch(array, leftIndex, middle - 1 ,toSearch);
    }
    
    return binarySearch(array, middle + 1,rightIndex ,toSearch);  

}


int main(){
    int array[] = {30, 82 ,74 ,26 ,99 ,26 ,3 ,82 ,54 ,4 ,28 ,1 ,88 ,89 ,66	,69	,83	,58	, 6,
    31	,13	,47	,59	,85	,7,	20	,22	,48	,77	,92	,52	,2	,92	,15	,94	,43	,37	,64	,13	,83	,13	,62	};
    int toSearch;
    int n = sizeof(array)/sizeof(array[0]); 
    cout << "number to seach" << endl;
    
    cin >> toSearch;

    sort(array, array + n);
    
    cout << "in positon = "<< binarySearch(array,0, n - 1 , toSearch) << endl;
}
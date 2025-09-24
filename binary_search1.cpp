#include<iostream>
/* 
    mid = (start + end) / 2  use kora jabe na cos int er range 2^31 -1 
    ekhn 2^31 -1 + 2^31-1 / 2 hoi tahole range er baire chole jai tai ei formula use kore hobe

    r binary search always monchromus hoite hobe r na hoile sorting korte hobe either incresing or decreasing
*/
using namespace std;

int binary_search(int arr[], int size, int key)
{
   int start = 0;
   int end = size - 1;

   int mid = start + (end - start)/2;

   while(start <= end){

    if(arr[mid] == key){
        return mid;
    }

    if(key > arr[mid] ){
        start = mid + 1;
    }

    else if(key < arr[mid] ){
        end = mid - 1;
    }

    mid = start + (end - start)/2;

   }

   return -1;
}



int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int even_index = binary_search(even, 6, 10);
    int odd_index = binary_search(odd, 5, 16);

    cout << even_index << endl;
    cout << odd_index << endl;
}
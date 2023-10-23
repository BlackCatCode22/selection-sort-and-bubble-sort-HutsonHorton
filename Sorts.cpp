//Programmer Hutson Horton
//Date 10/23/23
//Resources: CIT 66 and Videos Provided
#include <iostream>

using namespace std;

void bubbleSortAscending(int* array, int size){
    for(int i = 0; i < size -1; i++){
         for(int j = 0; j < size -i -1; j++){
                //If want descending, swap > with <
                //If j[1] > j[2], store j[1] into temp, overwrite j[1] with j[2], overwrite j[2] with j[1]
                //Compare, if applicable, swap 'em!
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }

         }

    }
}



int main()
{
int array[] = {9,1,3,5,8,7,4,6,2};
int size = sizeof(array) / sizeof(array[0]);
    for(int i : array){
        cout << i << endl;
    }

bubbleSortAscending(array, size);
for(int i = 0; i < size; i++){
    cout << "\n" << array[i] << endl;
}

for( int i = 0; i < size-1; i++){
    int smallest = array[i];
    int indexOfSmallest = i;
        for(int j = i + 1; j < size; j++){
                if(array[j] < min){
                    smallest = array[j];
                    indexOfSmallest = j;
                }
    }
}
  return 0;



}

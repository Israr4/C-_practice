// bubble sort bilkul insertion sort ki tarah ha bas is ma baqi values ko left side pa la ka jana hota ha

#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
 
  for (int i = 0; i < (size-1); i++) //loop to control iterations
   {
    int swapped = 0;
    for (int j = 0; j < (size-i-1); j++) //loop to shift largest number to right in one itreration
    {
      if (array[j] > array[j+ 1]) // agar number bara ho ga to wo right side pa shift hota jaya ga
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        swapped = 1;
      }
    }
    if (swapped == 0)
      break;
   }
}



void printArray(int array[],int size) 
{
  for (int i = 0; i < size; ++i)
  {
    cout << "  " << array[i];
  }
  cout << endl;
}

int main()
{
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  cout << "Unsorted Array in Ascending Order:\n";
  printArray(data, size);
  bubbleSort(data, size);
  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
  return 0;
}
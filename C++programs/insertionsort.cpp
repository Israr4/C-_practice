// Step 1 – Pick next element
// Step 2 – Compare with all elements in the sorted sub-list on the left
// Step 3 – Shift all the elements in the sorted sub-list that is greater than the
// value to be sorted
// Step 4 – Insert the value
// Step 5 – Repeat until list is sorted
// It is used small arrays

#include <iostream>
  using namespace std;

void insertionSort(int arr[]) //  5 4 9 2 8 
{
  int current;
  int j = 0;
  for (int i = 1; i < 5; i++) // array values 5 han lekin loop ma 4 la raha han kyo ka 5 ma sa 4 values ki condition check ho gi // akhri 4 element show karaya ga
  {
    current = arr[i];
    j = i - 1;// j = 0
    while (j >= 0 && arr[j] > current)// 0>=0 && arr[0]>4  //agar yeh condition matlab agli value choti ho gi to yeh condition apply ho gi ni to wesa hi raha gi ARRAY
    {
      arr[j + 1] = arr[j];// arr[0+1] = arr[0] (4=5)
       j --;  // -1
    }
    arr[j + 1] = current; // arr[-1+1] = 4;  so 4 5 
  }

}

int main() {
  int myarray[5];
  cout << "Enter 5 integers in any order" << endl;
  for (int i = 0; i < 5; i++) 
  {
    cin >> myarray[i];
  }

  cout << "Before Sorting: " << endl;
  for (int i = 0; i < 5; i++) 
  {
    cout << myarray[i] << " ";
  }

  insertionSort(myarray);

  cout << endl << "After Sorting: " << endl;
  for (int i = 0; i < 5; i++) 
  {
    cout << myarray[i] << " ";
  }
  cout<<endl;

  return 0;
}

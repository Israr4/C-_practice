// agar 5 values han to un ma sa sab sa choti value ko left side pa la ayan ga  is algorithm ka through 
// us ka bad 4 ma sa ek ko left side pa la ayan ga  
// phir 3 ma sa 
// phir 2 ma sa 
// phir last one

#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n)
{
    int i,j,min;
    for(i=0;i<n;i++)  //loop to control iterations
    {
        min = i;
        for(j=i+1;j<n;j++) // yeh loop har ek value ka lia jitni total values hon gi utni bari chla ga
        {
            if (arr[j] < arr[min])
                min = j; // jo sab sa choti value ho gi wo is ma save ho gi
        }
        swap(arr[i],arr[min]); //bad ma yeh simple value swap ho jaya gi current value sa
    }
}
int main()
{
    int arr[] = {5,4,10,1,6,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Unsorted Array   :";
    print(arr,n);
    cout<<"Sorted   Array   :";
    selectionSort(arr,n);
    print(arr,n);
    return 0;
}
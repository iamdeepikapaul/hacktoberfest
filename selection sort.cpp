#include <iostream>
using namespace std;

void selectionSort(int *array, int n)
{
    int temp;
    int min;

    for (int i = 0; i < n; ++i)
    {
        min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] < array[min])
                min = j;
        }
        if (min != i)
        {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}

int main()
{
	int n;
	cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
    	cin>>array[i];
	}

    
    selectionSort(array, n);

   for(int i=0;i<n;i++){
   	cout<<array[i]<<" ";
   }
   cout<<endl;
    return 0;
}

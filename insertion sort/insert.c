#include<time.h>

#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}





int main()
{
    clock_t start,end;
    int arr[10000];
    int n;
    printf("enter the number of array elements\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
      arr[i]=rand();
    }
    start=clock( );
    insertionSort(arr, n);
    end=clock( );
    printf("array after insertion sort is:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
      printf("time required for insertion sort is %.5f\n ",((double)(end-start)/CLOCKS_PER_SEC));

    return 0;
}

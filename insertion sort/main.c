#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    printf("after sorting : \n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    int n,i,arr[5000];
    clock_t start,end;
   
    printf("enter length of array : ");
    scanf("%d",& n);
    printf("elements of array are initialized\n");
    for(i=0;i<n;i++){
        arr[i]=rand();
    }
    printf("before sorting : \n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    start=clock();
    insertion_sort(arr,n);
    end=clock();
    printf("time required is : %f",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
 int num[10];

int linear_search (int a[10],int n)
{
for(int i=0;i<10;i++)
{
    if(a[i]==n)
    return i;
     
}  
return -1;
}


void sort(int a[10])
{
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>=a[j])
            {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
}


int binary_search(int a[10],int l,int r,int n){
   sort(a);

 while (l <= r) {
        int m = l + (r - l) / 2;

        if (a[m] == n)
            return m;
          
        if (a[m] < n)
            l = m + 1;
     
        else
            r = m - 1;
    }
    
    return -1;
     
}



int main()
{
   
    int n,r,res,choice;

    for(int i=0;i<10;i++)
    {
      r=rand();
      num[i]=r;
    }

    printf("The array elements are:\n");

      for(int i=0;i<10;i++)
    {
     printf("%d\n",num[i]);
    }


  printf("Enter choice\n1.linear\n2.binary\n");
 scanf("%d",&choice);

  switch(choice)
  {
      case 1: printf("Enter value to be searched\n");
               scanf("%d",&n);
              res=linear_search(num,n);
              if(res==-1)
              printf("Element not found in linear search\n");
              else
              printf("Element found in linear search\n");
              break;


     case 2:printf("Enter value to be searched\n");
               scanf("%d",&n);
              res=binary_search(num,0,9,n);
              if(res==-1)
              printf("Element not found in binary search\n");
              else
              printf("Element found in binary search\n");
              break;
  }
   
    
}

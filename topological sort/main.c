#include<stdio.h>
#define max 20
int a[max][max],n;

void topological_sort()
{
  int v[max],ver[max],i,j,p=1,flag=0;
  for(i=1;i<=n;i++)
  v[i]=0;
  while(p<=n)
{
  j=1;
  while(j<=n)
{
  flag=0;
  if(v[j]==0)
{
    for(i=1;i<=n;i++)
  if((a[i][j]!=0)&&(v[i]==0))
{
  flag=1;
  break;
  
}
  if(flag==0)
{
  v[i]=1;
  ver[p++]=j;
  break;
}
}
  j++;
  if(j<n)
   printf("\n topological order is not possible\n");
}
}
printf("\ntopological order obtained is\n");
for(i=1;i<=p;i++)
printf("\t%d",ver[i]);
}


int main()
{
  int i,j,n;
  printf("enter the no of vertices\n");
  scanf("%d",&n);
  printf("enter the adjacency matrix\n");
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
  topological_sort();
    return 0;
}

#include <stdio.h>
#include <time.h>
int a[20][20],queue[20],visited[20],n,i,j,front=0,rear=-1;
void bfs(int v){
    for(i=1;i<=n;i++){
        if(a[v][i] && !visited[i]){
            queue[++rear]=i;
        }
    }
    if(front<=rear){
        visited[queue[front]]=1;
        bfs(queue[front++]);
    }
}
int main(int argc, const char * argv[]) {
   
    int v;
    printf("Enter the number of vertices : ");
    scanf("%d",& n);
    printf("Enter adjescency matrix\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=1;j++){
            queue[i]=0;
            visited[i]=0;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",& a[i][j]);
        }
    }
    printf("Enter the starting vertiex : ");
    scanf("%d",& v);
    bfs(v);
    printf("The node which are Reachable are : \n");
    for(i=1;i<=n;i++){
        if(visited[i]){
            printf("%d\t",i);
        }
    }
    printf("\n");
    return 0;
}

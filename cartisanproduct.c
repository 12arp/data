#include<stdio.h>
int main()
{
    int a[10],b[10],n,m;
    printf("Enter size of set A\n");
    scanf("%d",&n);
    printf("Enter element of set A\n");
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    printf("Enter size of set B\n");
    scanf("%d",&m);
    printf("Enter element of set B\n");
    for(int i=0;i<m;i++)
      scanf("%d",&b[i]);
    
    printf("{");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" (%d %d) ",a[i],b[j]);
            printf(",");
        }
    }
    printf("}");
    return 0;
}
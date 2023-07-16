#include<stdio.h>
int height[100];
int main()
{
    int a,b,i,j,number;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++) scanf("%d", &height[i]);

    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(height[i] < height[j])
            {
                number=height[i];
                height[i]=height[j];
                height[j] = number;
            }
        }
    }

    for(i=0;i<a;i++)
    {
      printf("%d ",height[i]);
      if((i+1)%b==0) printf("\n");
    }
    return 0;
}
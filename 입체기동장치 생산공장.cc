#include<stdio.h>

struct aot
{
  int i;
  int j;
};

int main()
{
  aot device[101]={0};
  int n,i,a,b;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d %d",&a,&b);
      device[a].i = a;
      device[a].j = b;
    }

  for(i=1;i<=100;i++)
    {
      if(device[i].i != 0) printf("%d %d\n",device[i].i,device[i].j);
    }
  return 0;
}

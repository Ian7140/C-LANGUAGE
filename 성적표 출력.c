#include<stdio.h>
#include<algorithm>
#define MAX_SIZE 101

using namespace std;
struct information
{
  char name[MAX_SIZE];
  int score;
  int chart;
};

bool cmp(information a, information b)
{
  if(a.score == b.score) return a.chart < b.chart;
  return a.score> b.score;
}
int main()
{
  struct information info[MAX_SIZE];
  int m,n,i;
  scanf("%d %d",&m,&n);
  for(i=0;i<m;i++)
    {
      scanf("%s %d",info[i].name, &info[i].score);
      info[i].chart = i;
    }
  sort(info, info+m, cmp);
  for(i=0;i<n;i++) printf("%s\n",info[i].name);
  return 0;
}

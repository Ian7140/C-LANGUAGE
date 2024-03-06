#include<stdio.h>
#include<algorithm>
#define MAX_SIZE 201

using namespace std;
struct result
{
  int score;
  int rank = 1;
};

int main()
{
  struct result total_grade[MAX_SIZE];
  int n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&total_grade[i].score);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          if(total_grade[i].score < total_grade[j].score)
            total_grade[i].rank += 1;
        }
    }

  for(i=0;i<n;i++)
    {
      printf("%d %d\n",total_grade[i].score , total_grade[i].rank);
    }
  return 0;
}

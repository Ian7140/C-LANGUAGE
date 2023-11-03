#include<stdio.h>
#include<string.h>
#define MAX_SIZE 3000

typedef struct
{
	int x;
	int y;
} friend;

int main()
{
	friend student[MAX_SIZE];
	int n,m,a,b,i,j,search,check=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++) scanf("%d %d",&student[i].x,&student[i].y);
	scanf("%d %d",&a,&b);
	search = a;
	for(j=0;j<m;j++)
	{
		for(i=0;i<m;i++)
		{
			if(student[i].x == search) search = student[i].y;
			else if(student[i].y == search) search = student[i].x;
			if(search == b)
			{
				check = 1;
			}
		}
		if(check==1) break;
	}
	if(check == 1) printf("YES");
	else printf("NO");
	return 0;
}

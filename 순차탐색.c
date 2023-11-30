// #include<stdio.h>
// int list[65];
// int search(int n, int key)
// {
// 	for(int i=0;i<n;i++)
// 	{
// 		if(key==list[i]) return i+1;
// 	}
// 	return -1;
// }
// int main()
// {
// 	int result,n,i,key;
// 	scanf("%d",&n);
// 	for(i=0;i<n;i++) scanf("%d",&list[i]);
// 	scanf("%d",&key);
// 	result = search(n,key);
// 	if(result == -1) printf("실패");
// 	else printf("%d",result);
// 	return 0;
// }
#include<stdio.h>
#define MAX_SIZE 65
int height[MAX_SIZE];
int search(int num, int find_height){
	for(int i=0;i<num;i++){
		if(height[i] == find_height) return i+1;
	}
	return 0;
}
int main(){
	int num,find_height,index=0;
	scanf("%d",&num);
	for(int i=0;i<num;i++) scanf("%d",&height[i]);
	scanf("%d",&find_height);
	index = search(num,find_height);
	if(index) printf("%d",index);
	else printf("실패");
	return 0;
}

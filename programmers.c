#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    int i,check=0;
    scanf("%s",word);
    if(strlen(word)== 4 && word[0]=='l' && word[1]=='o' && word[2]=='v' && word[3]=='e')
    {
        printf("I love you.");
    }
    return 0;
}
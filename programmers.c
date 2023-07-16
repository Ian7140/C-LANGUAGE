#include<stdio.h>
#include<string.h>
char alphabet[30] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int count[30]={0};
int main()
{
    char sentence[100];
    int n,i;
    gets(sentence);
    for(i=0;i<strlen(sentence);i++)
    {
        if(sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            count[sentence[i]-'a'] += 1;
        }
    }

    for(i=0;i<26;i++)
    {
        printf("%c:%d\n",alphabet[i],count[i]);
    }
    return 0;
}
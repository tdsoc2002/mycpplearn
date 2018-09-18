#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    char ch[100];
    scanf("%d %s",&n,ch);
    int l=strlen(ch);
    for(i=0;i<l;i++)
    {
        ch[i]=((ch[i]-'a')+n)%26+('a');
    }
    puts(ch);
    return 0;
}
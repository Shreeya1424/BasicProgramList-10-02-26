//Input: strs = ["eat","tea","tan","ate","nat","bat"] 
//Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

#include <stdio.h>
#include <string.h>

void sortString(char str[])
{
    int i, j;
    char temp;

    int n = strlen(str);

    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void main()
{
    char strs[10][20];
    char sorted[10][20];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d",&n);

    printf("Enter words:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",strs[i]);
        strcpy(sorted[i],strs[i]);
        sortString(sorted[i]);
    }

    int visited[10] = {0};

    printf("Anagram Groups:\n");

    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
            continue;

        printf("[");

        for(j=i;j<n;j++)
        {
            if(strcmp(sorted[i],sorted[j])==0)
            {
                printf("%s ",strs[j]);
                visited[j]=1;
            }
        }

        printf("]\n");
    }

}
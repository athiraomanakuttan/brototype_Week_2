#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findLength(char word[]);
int checkString(char word[], char reverce[], int size);
void main()
{
    int size, flag;
    char word[100], reverce[100];
    printf("Enter the word\n");
    scanf("%s", word);
    size = findLength(word);
    int m = size - 1;
    for (int i = 0; i < size; i++)
    {
        reverce[i] = word[m];
        m--;
    }
    reverce[size] = '\0';
    flag = checkString(word, reverce, size);
    if (flag == 0)
        printf("The string is palindrom\n");
    else
        printf("The string is Not palindrom\n");
}
int findLength(char word[])
{
    int count = 0, i = 0;
    while (word[i] != '\0')
    {
        count += 1;
        i += 1;
    }
    return count;
}
int checkString(char word[], char reverce[], int size)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (word[i] != reverce[i])
        {
            flag = 1;
            return flag;
        }
    }
    return flag;
}
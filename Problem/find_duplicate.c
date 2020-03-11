/* Write a programe to find duplicate (only 2 time) in string */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100] = {0}, arr[100] = {0}, ch;
    int m, n, i, j, count, index = 0;
    printf("Enter String\n");
    scanf("%[^\n]", str);
    n = strlen(str);
    for (i = 0, index = 0; i <= n; i++)
    {
        if (strchr(arr, str[i]) == NULL)
        {
            for (j = 0, count = 0; j <= n; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                }
            }
            if (count == 2)
            {
                arr[index++] = str[i];
            }
        }
    }
    n = strlen(arr);
    for (i = 0; i < n; i++)
    {
        for (j = 0, count = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                ch = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ch;
            }
        }
    }
    printf("%s\n", str, arr);
}
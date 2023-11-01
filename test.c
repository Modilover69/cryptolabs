#include <stdio.h>
#include <string.h>

void and_strings(char *str1, char *result)
{
    int i;
    for (i = 0; i < strlen(str1); i++)
    {
        result[i] = str1[i] & 127;
    }
}

int main()
{
    char str1[] = "101010";
    char result[10];

    and_strings(str1, result);
    printf("%s\n", result);
    return 0;
}
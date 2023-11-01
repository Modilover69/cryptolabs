// Based on Ceaser cipher

// string -> Come home tomorrow

/*
A - 0
B - 1
C - 2
D - 3
E - 4
F - 5
G - 6
H - 7
I - 8
J - 9
K - 10
L - 11
M - 12
N - 13
O - 14
P - 15
Q - 16
R - 17
S - 18
T - 19
U - 20
V - 21
W - 22
X - 23
Y - 24
Z - 25

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int k = 3;
char *Ceaser_Cipher(char *str1)
{
    char *encry_str[20];
    // formula C = (k+E) %26
    int len = strlen(str1);

    for (int i = 0; i < len; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        int chars = str1[i] - 65;
        int encrypted = (chars + k) % 26;
        char val = encrypted + 65;
        encry_str[i] += val;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c", encry_str[i]);
    }
}
void main()
{
    Ceaser_Cipher("Come home tomorrow");
}
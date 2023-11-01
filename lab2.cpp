// AND and XOR with 127
#include <iostream>
#include <string.h>
using namespace std;
void Encrypt(char tmp[])
{
    char str1[20], str2[20];
    int len = strlen(tmp);
    cout << "After performing AND operation : ";
    for (int i = 0; i < len; i++)
    {
        str1[i] = tmp[i] & 127;
        cout << str1[i];
    }
    cout << "\nAfter performing XOR operation : ";
    for (int i = 0; i < len; i++)
    {
        str2[i] = tmp[i] ^ 127;
        cout << str2[i];
    }
}
int main()
{
    char tmp[20];
    cout << "Enter your string : ";
    cin.getline(tmp, 20);

    Encrypt(tmp);

    return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
    string encryption_keys = "QWERTYUIOPLKJHGFDSAZXCVBNMzxcvbnmlkjhgfdsaqwertyuiop_";
    string temp;
    cout << "Enter your string : ";
    cin >> temp;
    int len = temp.size();

    cout << "Before encryption : " << temp << endl;

    for (int i = 0; i < len; i++)
    {
        if (isalpha(temp[i]))
        {
            int index = str1.find(temp[i]);
            temp[i] = encryption_keys[index];
        }
        else
        {
            continue;
        }
    }
    cout << "After encryption : " << temp << endl;
    return 0;
}
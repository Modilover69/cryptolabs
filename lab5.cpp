// hill cipher

/*Formula -
    E(K.P) = (K * P) mod 26
*/

#include <iostream>
using namespace std;

class Hill_cipher
{
    char key[10][10], plaintext[10][10];
    int encrypted_text[10][10];
    int m1, n1, m2, n2;

public:
    void getKey()
    {
        cout << "Enter rows and columns of matrix : ";
        cin >> m1 >> n1;
        cout << "Enter the key matrix : ";
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                cin >> key[i][j];
            }

            cout << '\n';
        }
    }

    void Display_key()
    {
        cout << "Your key matrix is : \n";
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                cout << key[i][j] << '\t';
            }

            cout << '\n';
        }
    }

    string Encrypt()
    {
        string temp;
        cout << "Enter rows and columns of matrix : ";
        cin >> m2 >> n2;
        if (n1 == m2)
        {
            cout << "Enter plaintext to encrypt : ";
            for (int i = 0; i < m2; i++)
            {
                for (int j = 0; j < n2; j++)
                {
                    cin >> plaintext[i][j];
                    plaintext[i][j] = plaintext[i][j] % 65;
                }
                cout << '\n';
            }

            cout << "Your plaintext is : \n";
            for (int i = 0; i < m2; i++)
            {
                for (int j = 0; j < n2; j++)
                {
                    cout << int(plaintext[i][j]) << '\t';
                }

                cout << '\n';
            }

            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n2; j++)
                {
                    encrypted_text[i][j] = 0;
                    for (int k = 0; k < n1; k++)
                    {
                        encrypted_text[i][j] += int(key[i][k]) * int(plaintext[k][j]);
                    }
                    encrypted_text[i][j] = encrypted_text[i][j] % 26;
                }
            }

            cout << "Your encrypted text is : ";
            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n2; j++)
                {
                    temp += char(encrypted_text[i][j] + 65);
                }
            }
        }
        else
        {
            cout << "Invalid input" << endl;
        }
        return temp;
    }

    void Decrypt(string encrypted_text, int A[][10])
    {
    }

    // int *Transpose(int A[10][10])
    // {
    //     int temp[10][10];
    //     for (int i = 0; i < m1; i++)
    //     {
    //         for (int j = 0; j < n1; j++)
    //         {
    //             temp[j][i] = A[i][j];
    //         }
    //     }

    //     return temp;
    // }
};
int main()
{
    Hill_cipher h1;
    h1.getKey();
    h1.Display_key();
    string test = h1.Encrypt();
    cout << test;
    return 0;
}
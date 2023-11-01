#include <iostream>
#include <string>

using namespace std;

string caesar_cipher_encyption(string text, int shift)
{
    string encrypted_text = "";
    for (char c : text)
    {
        if (isalpha(c))
        {
            int ascii_code = c;
            ascii_code += shift;

            char encrypted_character = ascii_code;
            encrypted_text += encrypted_character;
        }
        else
        {
            encrypted_text += c;
        }
    }

    return encrypted_text;
}

string caesar_cipher_decyption(string text, int shift)
{
    string decrypted_text = "";
    for (char c : text)
    {
        if (isalpha(c))
        {
            int ascii_code = c;
            ascii_code -= shift;

            char encrypted_character = ascii_code;
            decrypted_text += encrypted_character;
        }
        else
        {
            decrypted_text += c;
        }
    }

    return decrypted_text;
}

int main()
{
    string text = "Come home tomorrow";
    int shift = 3;

    string encrypted_text = caesar_cipher_encyption(text, shift);
    cout << "The encrypted text is: " << encrypted_text << endl;

    string decrypted_text = caesar_cipher_decyption(encrypted_text, shift);
    cout << "The Decrypted text is: " << decrypted_text << endl;

    return 0;
}

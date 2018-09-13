//Implementation of encryption and decryption using Affine Cipher


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ch;
    cout << "\t\tAFFINE CIPHER\n\nChoose one of the options:\n1. Encryption\n2. Decryption\n";
    cin >> ch;

    string s;
    int a, b;

    cout << "\nEnter the text: "; //Input should contain single string having lowercase alphabets only
    cin >> s;

    cout << "\nEnter the key values a and b: "; //a should be co-prime to 26(size of alphabet)
    cin >> a >> b;

    int inv = 0;

    switch (ch) {
    case 1:

        cout << "\nThe encrypted text is: ";

        for (int i = 0; i < s.length(); i++) {
            int ind = (a * (s[i] - 'a') + b) % 26; //mod 26 is taken for the English alphabet

            cout << char('a' + ind);
        }

        cout << "\n";

        break;

    case 2:

        for (int i = 0; i < 26; i++) //finding the multiplicative modular inverse
        {
            if ((a * i) % 26 == 1)
                inv = i;
        }

        cout << "\nThe decrypted text is: ";

        for (int i = 0; i < s.length(); i++) {
            int ind = inv * (s[i] - 'a' - b + 26) % 26;
            cout << char('a' + ind);
        }

        cout << "\n";

        break;

    default:

        cout << "\nInvalid Input!\n";
    }
}

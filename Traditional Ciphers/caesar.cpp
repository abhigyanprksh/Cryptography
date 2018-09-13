//Implementation of encryption and decryption using Caesar Cipher


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ch;
    cout << "\t\tCAESAR CIPHER\n\nChoose one of the options:\n1. Encryption\n2. Decryption\n";
    cin >> ch;

    string s;
    int key;
    
    cout << "\nEnter the text: "; //Input should contain single string having alphabets only
    cin >> s;

    cout << "\nEnter the key value: ";
    cin >> key;

    switch (ch) {
    case 1:

       cout << "\nThe encrypted text is: ";

        for (int i = 0; i < s.length(); i++) {
            if (islower(s[i]))
                cout << char('a' + (s[i] - 'a' + key) % 26);
            else
                cout << char('A' + (s[i] - 'A' + key) % 26);
        }

        cout << "\n";

        break;

    case 2:

        cout << "\nThe decrypted text is: ";

        for (int i = 0; i < s.length(); i++) {
            int shift = key % 26;

            if (islower(s[i])) {
                if (shift > (s[i] - 'a')) {
                    shift = shift - s[i] + 'a';

                    cout << char('z' - shift + 1);
                }

                else
                    cout << char(s[i] - shift);
            }

            else {
                if (shift > (s[i] - 'A')) {
                    shift = shift - s[i] + 'A';

                    cout << char('Z' - shift + 1);
                }

                else
                    cout << char(s[i] - shift);
            }
        }

        cout << "\n";

        break;

    default:

        cout << "\nInvalid Input!\n";
    }
}

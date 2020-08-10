/* Name - Siddhi Khetan
    Section - C
    class roll no -51
    University roll no - 2014886 */
#include <iostream>
#include <string>
using namespace std;

void encryptt(string str)
{
    char pos1 = '#';
    char pos2 = '$';
    int number_of_char, ascii;

    for (int i = 0; i <= str.length(); i++)
    {
        char ascii = str[i];
        number_of_char = ascii >= 97 ? ascii - 96 : ascii - 64;
        for (int j = 0; j < number_of_char; j++)
        {
            if (i % 2 == 0)
                cout << pos1;
            else
                cout << pos2;
        }
    }
}

int main()
{
    string text;
    cout << "Enter a word to encrypt : ";
    cin >> text;
    cout << "Encrypted Text : ";
    encryptt(text);
    return 0;
}

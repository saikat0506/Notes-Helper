/* Write a program to check whether a Character is a Number or Vowel or Consonant or Special character. */

#include <iostream>
using namespace std;

void character_checking(char ch)
{
    if (48 <= ch && 57 >= ch)
    {
        cout << ch << " is a number";
    }
    else if ((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') || (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U'))
    {
        cout << ch << " is a vowel";
    }
    else if ((ch == 'b' || ch == 'B') || (ch == 'c' || ch == 'C') || (ch == 'd' || ch == 'D') || (ch == 'f' || ch == 'F') || (ch == 'g' || ch == 'G') || (ch == 'h' || ch == 'H') || (ch == 'j' || ch == 'J') || (ch == 'k' || ch == 'K') || (ch == 'l' || ch == 'L') || (ch == 'm' || ch == 'M') || (ch == 'n' || ch == 'N') || (ch == 'p' || ch == 'P') || (ch == 'q' || ch == 'Q') || (ch == 'r' || ch == 'R') || (ch == 's' || ch == 'S') || (ch == 't' || ch == 'T') || (ch == 'v' || ch == 'V') || (ch == 'w' || ch == 'W') || (ch == 'x' || ch == 'X') || (ch == 'y' || ch == 'Y') || (ch == 'z' || ch == 'Z'))
    {
        cout << ch << " is a consonant";
    }
    else if ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
    {
        cout << ch << " is a special character";
    }
}

int main()
{
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    return 0;
    character_checking(ch);
}
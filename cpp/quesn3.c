#include <iostream>
using namespace std;

void converterFunc(string &string)
{
    int ln = string.length();
    for (int i = 0; i < ln; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] = string[i] - 32;
        else if (string[i] >= 'A' && string[i] <= 'Z')
            string[i] = string[i] + 32;
    }
}

int main()
{
    string string = "Hello World!!!!";
    converterFunc(string);
    cout << string;
    return 0;
}

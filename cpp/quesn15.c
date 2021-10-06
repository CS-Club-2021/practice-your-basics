#include <iostream>
#include <string>
using namespace std;

string adderFunc(string s1, string s2)
{
    double n1 = std::stod(s1);
    double n2 = std::stod(s2);
    double sum = n1 + n2;

    return std::to_string(sum);
}
int main()
{
    string s1, s2;
    cout << "Please enter string 1 : ";
    cin >> s1;
    cout << "Please enter string 2 : ";
    cin >> s2;

    cout << "The sum of these two numbers is : " << adderFunc(s1, s2) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int n1 = 5, n2 = 5;

int merge(int a1[], int a2[], int n1, int n2, int result[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            result[k++] = a1[i++];
        }
        else
        {
            result[k++] = a2[j++];
        }
    }
    while (i < n1)
    {
        result[k++] = a1[i++];
    }
    while (j < n2)
    {
        result[k++] = a2[j++];
    }
}

int main()
{
    int a[n1] = {1, 3, 5, 7, 9}, b[n2] = {2, 4, 6, 8, 10};
    int result[n1 + n2];
    merge(a, b, n1, n2, result);
    cout << "The result is : ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << "\t" << result[i];
    }
}

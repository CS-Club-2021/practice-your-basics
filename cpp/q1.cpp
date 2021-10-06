#include <iostream>
#include <iomanip>
using namespace std;
void solve()
{
	for (int i = 2000; i <= 3200; i++)
	{
		if (i % 7 == 0 && i % 5 != 0 && i!=3199)
			cout << setw(2) << setfill('0') << i << ", ";
	}
	cout << "3199";
	cout << endl;
}
int main()
{
	solve();
	return 0;
}
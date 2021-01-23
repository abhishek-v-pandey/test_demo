#include <stdio>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter two numbers" << endl;
	cin >> a >> b;
	int sum = add(a, b);
	cout << sum << endl;
}
int add(int x, int y)
{
	int z = x + y;
	return z;
}
#include <iostream>
#include <cmath>

using namespace std;

int f(int n, int r, int k)
{
	if (n == 0 && r == 0)
	{
		return 1;
	}

	if (n > 0 && 0 <= r && (r <= n * (k - 1) + 1))
	{
		int result = 0;
		for (int i = 0; i <= k - 1; i++) 
		{
			int g = f(n - 1, r - i, k);
			result += f(n - 1, r - i, k); // Ðåêóðñ³ÿ ôóíêö³¿ f
		}
		return result;
	}

	return 0;
}

int main() {
	int t;
	cout << "Enter t (0 <= t <= 10): "; 
	cin >> t;

	int m = pow(10, t);
	cout << "m = 10^t = " << m << endl << endl;

	int n;
	cout << "Enter n: ";
	cin >> n;

	int k;
	cout << "Enter k: ";
	cin >> k;

	int x = 0;
	for (int i = 0; i <= n * (k - 1); i++)
	{
		x += f(n, i, k) % m;
	}

	cout << "x = " << x << endl;
	return 0;
}



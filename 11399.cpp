#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	vector<int> a(n, 0);
	vector<int> sum(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i < n; i++)
	{
		int now = a[i];
		int now_index = i;
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[j]<a[i])
			{
				now_index = j + 1;
				break;
			}
			if (j == 0)
			{
				now_index = 0;
			}
		}

		for (int j = i; j > now_index; j--)
		{
			a[j] = a[j - 1];
		}

		a[now_index] = now;
	}

	sum[0] = a[0];

	for (int i = 1; i < n; i++)
	{
		sum[i] = sum[i - 1] + a[i];
	}

	int result = 0;

	for (int i = 0; i < n; i++)
	{
		result = result + sum[i];
	}

	cout << result;

	return 0;
}

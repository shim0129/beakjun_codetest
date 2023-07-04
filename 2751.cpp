#include <iostream>
#include <vector>

using namespace std;

static vector<int> a;
static vector<int> tmp;

void merge(int fr, int ba)
{
	if (ba - fr < 1)
	{
		return;
	}

	int m = fr + (ba - fr) / 2;

	merge(fr, m);
	merge(m + 1, ba);

	for (int i = fr; i <= ba; i++)
	{
		tmp[i] = a[i];
	}

	int k = fr;
	int index1 = fr;
	int index2 = m + 1;

	while (index1 <= m && index2 <= ba)
	{
		if (tmp[index1] > tmp[index2])
		{
			a[k] = tmp[index2];
			k++;
			index2++;
		}
		else
		{
			a[k] = tmp[index1];
			k++;
			index1++;
		}
	}
	//남아있는 수들 정렬
	
	while (index1 <= m)
	{
		a[k] = tmp[index1];
		k++;
		index1++;
	}
	for(index2;index2<=ba;index2++)
	{
		a[k] = tmp[index2];
		k++;
	}
}

int  main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	a= vector<int> (num + 1, 0);
	tmp =vector<int>(num + 1, 0);

	for (int i = 1; i <= num; i++)
	{
		cin >> a[i];
	}

	merge(1, num);

	for (int i = 1; i <= num; i++)
	{
		cout << a[i] << "\n";
	}
}

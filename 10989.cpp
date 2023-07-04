#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int count[10001] = { 0 };
	int index;

	for (int i = 1; i <= num; i++)
	{
		cin >> index;
		count[index]++;
	}

	for (int i = 0; i <= 10000; i++)
	{
		if (count[i] != 0)
		{
			for(int j=0; j<count[i];j++)
				cout << i << "\n";
		}
	}
}

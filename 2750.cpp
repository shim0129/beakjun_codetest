#include <vector>
#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); //이거 제발 빼먹지 않기!!

	int num = 0;
	cin >> num;
	//받을 숫자의 개수

	vector<int> a(num, 0); //0으로 초기화

	for (int i = 0; i < num; i++) 
	{
		cin >> a[i];
	}

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
			else continue;
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << a[i] << "\n";
	}

	return 0;
}

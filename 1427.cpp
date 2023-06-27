#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string num;
	cin >> num;

	vector<int> a(num.length(), 0);
	

	for (int i = 0; i < num.length(); i++)
	{
		a[i] = stoi(num.substr(i, 1)); //각 문자 할당 형변환은 기본!
	}

	for (int i = 0; i < num.length(); i++)
	{
		int max = i; //index 이용해서 잘 표현할 수 있어야함
		for (int j = i+1; j < num.length(); j++)
		{
			if (a[j] > a[max])
			{
				max=j;
			}
		}
		swap(a[i],a[max]);
	}

	
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i];
	}
	return 0;
}

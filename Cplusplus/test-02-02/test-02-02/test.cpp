#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	int p = 0;
	cin >> p;
	for (i = 1; i < p; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i >= 10)
			{
				if (j < 10)
					printf("%c*%d=%d ", (char)i - '0' + 61, j, i * j);
				else
					printf("%c*%c=%d ", (char)i - '0' + 61, (char)j - '0' + 61, i * j);
			}
			else
				printf("%d*%d=%d ", i, j, i * j);
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;


int main()
{
	bool a = false;
	int max = 0;
	int answ = 0;

	for(int j = 1; j < 1000; j++)
	{
		int rem = 1;
		int sum = 0;
		int remain[1000] = {0};
		while(remain[rem] == 0)
		{
			while(rem < j)
			{
				if(remain[rem] != 0)
				{
					a = true;
					break;
				}
				remain[rem] = 1;
				rem = rem*10;
			}


			while(rem > j)
				rem = rem - j;

			if(rem == j)
			{
				break;
			}
		}

		for(int i = 0; i < j; i++)
			sum = sum + remain[i];

			if(sum > max)
			{
				max = sum;
				answ = j;
			}


	}

	cout << max << endl << answ;
	cin >> max;
}

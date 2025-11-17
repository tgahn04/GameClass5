#include <iostream>
#include <cmath>

using namespace std;

void sieve(int n)
{
	bool prime[100];

	for (int i = 2; i <= n; i++)
	{
		prime[i] = true;
	}

	int limit = static_cast<int>(sqrt(n));

	for (int i = 2; i <= limit; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= n; )
			{
				prime[j] = false;
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (prime[i])
		{
			cout << i << " ";
		}
	}
}

int main()
{
#pragma region 에라토스테네스의 체

	// for (int i = 2; i <= 17; i++)
	// {
	// 	bool prime = true;
	// 
	// 	for (int j = 2; j < i; j++)
	// 	{
	// 		if (i % j == 0)
	// 		{
	// 			prime = false;
	// 			break;
	// 		}
	// 	}
	// 	
	// 	if (prime)
	// 	{
	// 		cout << i << " ";
	// 	}
	// }
	


#pragma endregion


	return 0;
}
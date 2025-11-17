#include <iostream>

using namespace std;

int function(int x, int y)
{
	int r = x % y;

	if (r == 0)
	{
		return y;
	}
	else
	{
		return function(y, r);
	}

}

int main()
{
#pragma region 유클리드 호제법
	// 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로
	// 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다,

	// int x = 2354;
	// int y = 3326;
	// int value = 0;
	// 
	// for (int i = 1; i <= x && i <= y; i++)
	// {
	// 	if (x % i == 0 && y % i == 0)
	// 	{
	// 		value = i;
	// 	}
	// } 
	// 
	// cout << "x, y의 최대 공약수 : " << value << endl;

	int x;
	int y;

	cout << "x의 값 : ";
	cin >> x;

	cout << "y의 값 : ";
	cin >> y;

	cout << "x와 y의 최대 공약수 : " << function(x, y);

#pragma endregion


	return 0;
}
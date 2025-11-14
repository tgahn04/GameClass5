#include <iostream>

using namespace std;

int main()
{
#pragma region 유클리드 호제법
	// 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로
	// 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다,

	int x = 2354;
	int y = 3326;
	int value = 0;

	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			value = i;
		}
	} 

	cout << "x, y의 최대 공약수 : " << value << endl;


#pragma endregion


	return 0;
}
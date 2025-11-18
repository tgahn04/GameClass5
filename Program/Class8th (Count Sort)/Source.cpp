#include <iostream>

using namespace std;


int main()
{
#pragma region 계수 정렬
	// 데이터의 값을 비교하지 않고, 각 원소에 데이터가
	// 몇 개 있는 지 개수를 세어 저장한 다음 정렬하는 알고리즘입니다.

	// O(n + k) 
	// n: 입력되는 데이터의 개수
	// k: 데이터 값의 범위 (O ~ k)

	// 정수 범위가 제한되어 있을 때 사용 가능한 알고리즘입니다.

	int list[] = { 1, 1, 3, 1, 2, 3, 4, 4, 2, 5 };
	int size = sizeof(list) / sizeof(list[0]);

	int count[5] = { 0, };

	for (int i = 0; i < size; i++)
	{
		count[list[i] - 1]++;
	}

	for (int i = 0; i < 5; i++)
	{
		if (list[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
			{
				cout << i + 1 << " ";
			}
		}
	}

#pragma endregion


	return 0;
}
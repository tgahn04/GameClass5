#include <iostream>

using namespace std;

int main()
{
#pragma region 선택 정렬
	// 주어진 리스트 중에 최소값을 찾은 다음 특정한 위치에서
	// 결과를 교체하는 방식으로 정렬하는 알고리즘입니다.

	int list[] = { 9, 6, 7, 3, 5, 8, 2, 1, 4, 11, 15 };
	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0; i < size - 1; i++)
	{
		int min_index = i;

		for (int j = i + 1; j < size; j++)
		{
			if (list[j] < list[min_index])
			{
				min_index = j;
			}
		}

		swap(list[i], list[min_index]);
	}

	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
#pragma endregion


	return 0;
}
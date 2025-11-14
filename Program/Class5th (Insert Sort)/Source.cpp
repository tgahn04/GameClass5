#include <iostream>

using namespace std;

int main()
{
#pragma region 삽입 정렬
	// 데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
	// 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘입니다.

	int list[] = { 8, 5, 6, 2, 4, 7, 1, 3, 9, 10 };
	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0; i < size; i++)
	{
		int key = list[i];
		int index = i - 1;

		while (index >= 0 && key < list[index])
		{
			list[index + 1] = list[index];

			index--;
		}

		list[index + 1] = key;
	}

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion


	return 0;
}
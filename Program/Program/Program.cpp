#include <iostream>

using namespace std;

bool Search(int list[], int size, int target)
{
	int start = 0;
	int end = size - 1;

	while (start <= end)
	{
		int pivot = (start + end) / 2;

		if (list[pivot] == target) // 찾았을 때
		{
			return true;
		}
		else if (list[pivot] < target) // 왼쪽 탐색
		{
			start = pivot + 1;
		}
		else if (list[pivot] > target) // 오른쪽 탐색
		{
			end = pivot - 1;
		}
	}
	return false; // 못찾음
}

int main()
{
#pragma region 이분 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를 
	// 좁혀나가는 방식으로 동작하는 알고리즘입니다.

	int list[] = { 5, 6, 11, 13, 27, 55, 66, 92 };
	int size = sizeof(list) / sizeof(list[0]);
 
	int target = 27;

	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}

	if (Search(list, size, target))
	{
		cout << target << endl;
	}
	else
	{
		cout << "error" << endl;
	}

#pragma endregion


	return 0;
}
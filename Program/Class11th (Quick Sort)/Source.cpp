#include <iostream>

using namespace std;

void sort(int list[], int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int pivot = start;
	int left = start + 1;
	int right = end;

	while (left <= right)
	{
		while (left <= end && list[left] <= list[pivot])
		{
			left++;
		}
		while (right > start && list[right] >= list[pivot])
		{
			right--;
		}

		if (left > right)
		{
			swap(list[pivot], list[right]);
		}
		else
		{
			swap(list[left], list[right]);
		}
	}

	sort(list, start, right - 1);
	sort(list, right + 1, end);
}

int main()
{
#pragma region 퀵 정렬
	// 기준점을 획득한 다음 기준점을 기준으로 배열을 나누고 한 쪽에는
	// 기준점보다 작은 값들이 위치하게 한 다음 다른 한 쪽에는 기준점보다
	// 큰 값들이 위치하도록 합니다.

	// 나누어진 하위 배열에 대해 재귀적으로 큌 정렬을 호출하여
	// 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬합니다.

	int list[] = { 5, 3, 8, 4, 1, 6, 2, 7 };
	int size = sizeof(list) / sizeof(list[0]);

	sort(list, 0, size - 1);

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion


	return 0;
}
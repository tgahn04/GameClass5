#include <iostream>

using namespace std;

void combine(int list[], int start, int middle, int end)
{
	int left = middle - start + 1;
	int right = end - middle;
	int pivot = left + right;

	int* container = new int[pivot];
	int count = 0;

	int left_index = start;
	int right_index = middle + 1;

	while (left_index <= middle && right_index <= end)
	{
		if (list[left_index] <= list[right_index])
		{
			container[count++] = list[left_index++];
		}
		else
		{
			container[count++] = list[right_index++];
		}
	}

	while (left_index <= middle)
	{
		container[count++] = list[left_index++];
	}
	while (right_index <= end)
	{
		container[count++] = list[right_index++];
	}

	for (int i = 0; i < pivot; i++)
	{
		list[start + i] = container[i];
	}

	delete[] container;
}

void merge_sort(int list[], int start, int end)
{
	if (start < end) // 재귀 종료
	{
		int middle = (start + end) / 2;

		merge_sort(list, start, middle);	// 분할
		merge_sort(list, middle + 1, end);

		combine(list, start, middle, end); // 병합
	}
}



int main()
{
#pragma region 합병 정렬
	// 하나의 리스트를 두 개의 균일한 크기로 분할하고 분할된
	// 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를
	// 합하여 전체가 정렬된 리스트가 되게 하는 방법입니다.

	// 1. 리스트의 길이가 0 또는 1이 되면 이미 정렬된 것으로 봅니다.
	
	// 2. 그렇지 않은 경우

	// 2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의
	//		두 부분 리스트로 나눕니다.

	// 2-2. 각 부분 리스트를 재귀적으로 합병 정렬을 이용하여 정렬합니다.

	// 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합합니다.

	int list[] = { 3, 5, 2, 7, 4, 1, 8, 6 };
	int size = sizeof(list) / sizeof(list[0]);

	merge_sort(list, 0, size - 1);

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion


	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

#define INFINITY 10000000


class Dijkstra
{
private:
	vector<vector<int>> matrix;

public:
	void resize(int node)
	{
		int newSize = node + 1;

		matrix.resize(newSize); // 행 확장

		for (int i = 0; i < newSize; i++)
		{
			matrix[i].resize(); // 열 확장

			matrix[i][i] = 0; // 자기 루프 0
		}
	}

	void insert(int i, int j, int weight)
	{
	
	}
};

int main()
{
#pragma region 
	


#pragma endregion

	return 0;
}

//		1	2	3	4	5	6
//	   -----------------------
//	1 |	0	2	5	1	I	I
// 	  |
//	2 |	2	0	3	2	I	I
// 	  |
//	3 |	5	3	0	3	1	5
// 	  |
//	4 |	1	2	3	0	1	I
// 	  |
//	5 |	I	I	1	1	0	2
// 	  |
//	6 |	I	I	5	I	2	0
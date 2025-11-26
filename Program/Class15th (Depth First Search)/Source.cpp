#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

template <typename T>
class Graph
{
private:
	unordered_map<T, vector<T>> adjList;
	unordered_set<T> visited;

public:
	void insert(const T& i, const T& j)
	{
		adjList[i].push_back(j);
		adjList[j].push_back(i);
	}

	void search(const T& start)
	{
		visited.insert(start);
		cout << start << " ";

		for (const T& nextNode : adjList[start])
		{
			if (visited.find(nextNode) == visited.end())
			{
				search(nextNode);
			}
		}
	}

};

int main()
{
#pragma region 깊이 우선 탐색 (Depth First Search)
	// 그래프에서 한 방향으로 갈 수 있을 만큼 깊이 들어갔다가, 더 이상
	// 갈 수 없으면 다시 돌아와서 다른 경로를 탐색하는 방법입니다.

	Graph<char> graph;

	graph.insert('A', 'B');
	graph.insert('A', 'C');
	graph.insert('B', 'D');
	graph.insert('B', 'E');
	graph.insert('C', 'F');
	graph.insert('C', 'G');

	graph.search('A');

#pragma endregion


	return 0;
}
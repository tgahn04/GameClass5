#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

template <typename T>
class Graph
{
private:
	unordered_map<T, vector<T>> adjList;
	unordered_set<T> visited;
	queue<T> queue;

public:
	void insert(const T& i, const T& j)
	{
		adjList[i].push_back(j);
		adjList[j].push_back(i);
	}

	void search(const T& start)
	{
		queue.push(start);
		visited.insert(start);

		while (!queue.empty())
		{
			T current = queue.front();
			queue.pop();

			cout << current << " ";

			for (const T& nextNode : adjList[current])
			{
				if (visited.find(nextNode) == visited.end())
				{
					visited.insert(nextNode);
					queue.push(nextNode);
				}
			}
		}
	}
};

int main()
{
#pragma region 너비 우선 탐색 (Breadth First Search) O(V + E)
	// 하나의 시작 정점을 방문한 후 시작 정점에 인접한
	// 모든 정점들을 우선적으로 방문하는 탐색입니다.

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
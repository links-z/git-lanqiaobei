//#include <iostream>
//#include <vector>
//#include<string>
//#include<algorithm>
//#include<iomanip>
//#include<queue>
//using namespace std;
//typedef pair<int, int> pii;
//const int N = 100;
//int map[N][N];
//int dx[4] = {-1,0,1,0};
//int dy[4] = {0,1,0,-1};
//int n, m, ans;
//bool mark[N][N];
// void bfs() {
//	queue<pii>q;
//	memset(mark, -1, sizeof mark);
//	q.push({0,0});
//	mark[0][0] = 0;
//	while (!q.empty())
//	{
//		pii top = q.front();
//		for (int i = 0; i < 4; i++)
//		{
//			int nex = top.first + dx[i], ney = top.second + dy[i];
//			if (nex >= 0 && nex < n && ney >= 0 && ney < m && map[nex][ney] == 0)
//			{
//				mark[nex][ney] = mark[top.first][top.second] + 1;
//				q.push({ nex,ney });
//			}
//		}
//		q.pop();
//	}
//	cout << mark[n - 1][m - 1];
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; i < m; j++)
//		{
//			cin >> map[i][j];
//		}
//	}
//	bfs();
//	return 0;
//}
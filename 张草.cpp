//#include<iostream>
//using namespace std;
//#define int long long
//#define INF 0x3f3f3f3f
//int n, m,k;
//const int N = 1010;
//char a1[N][N];
//bool st[N][N];
//void solve() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin>> a1[i][j];
//		}
//		cout << endl;
//	}
//	cin >> k;
//	while (k--) {
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (a1[i][j] == 'g'&&st[i][j]!=true)
//				{
//					if (j + 1 < m &&a1[i][j+1]!='g')
//					{
//						a1[i][j + 1] = 'g';
//						st[i][j + 1] = true;
//					}
//					if (j - 1 >= 0 && a1[i][j - 1] != 'g')
//					{
//						a1[i][j - 1] = 'g';
//						st[i][j - 1] = true;
//					}
//					if (i + 1 < n && a1[i+1][j] != 'g')
//					{
//						a1[i + 1][j] = 'g';
//						st[i + 1][j] = true;
//					}
//					if (i - 1 >= 0 && a1[i-1][j] != 'g')
//					{
//						a1[i - 1][j] = 'g';
//						st[i - 1][j] = true;
//					}
//				}
//			}
//		}
//		memset(st, 0, sizeof st);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << a1[i][j] ;
//		}
//		cout << endl;
//	}
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	return 0;
//}
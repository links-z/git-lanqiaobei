//#include<iostream>
//using namespace std;
//const int N = 5e2+10;
//#define endl "\n"
//int a[N][N], sum[N][N];
//int n, m, k;
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + a[i][j] - sum[i - 1][j - 1];
//		}
//	}
//	int ans = 0;
//	//子矩阵和
//	for (int i = 1; i <= n; i++)// i,j 左上角
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			for (int i1 = i; i1 <= n; i1++)//i1,j1 右下角
//			{
//				for (int j1 = j; j1 <= m; j1++)
//				{
//					int s = sum[i1][j1] - sum[i - 1][j1] - sum[i1][j - 1] + sum[i - 1][j - 1];
//					if (s <= k) ans++;
//				}
//			}
//		}
//	}
//	
//	cout << ans << endl;
//}
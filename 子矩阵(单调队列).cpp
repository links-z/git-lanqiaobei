//#include<iostream>
//using namespace std;
//#define MAXN 0x3f3f3f3f
//#define int long long
//const int N = 1e3 + 10;
//int arr[1010][1010];
//int n, m, a, b;
//void solve() {
//	cin >> n >> m >> a >> b;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j=0;j< m;j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int max1=-MAXN, min1=MAXN; 
//	long long ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)    
//		{
//				for (int k = i; k < i+a; k++) 
//				{
//					for (int l = j; l < j+a ; l++)
//					{
//						
//						max1 = max(max1, arr[k][l]);
//						min1 = min(min1, arr[k][l]);
//					}
//				}
//				ans += max1 * min1;
//				max1 = -MAXN, min1 = MAXN;
//		}
//	}
//	ans = ans % 998244353;
//	cout << ans << endl;
//	
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	while(t--)
//	solve();
//	return 0;
//}
//单调队列
 
 
 
 
 
 
//#include<iostream>
//#include<vector>
//using namespace std;
//#define int long long
//const int N = 1e3 + 10;
//int g[N][N];
//int maxv[N][N];//maxv[1][1]以（1,1）为起点的最大值
//int minv[N][N];
//int n, m, a, b;
//int head = 0, tail = -1;
//int q[N];//存下标
//int max_line[1010][1010], min_line[1010][1010];
//void solve() {
//	cin >> n >> m >> a >> b;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> g[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)//求第几行的最小值
//	{
//		head = 0, tail = -1;
//		for (int j = 0; j < m; j++)
//		{
//			if (head <= tail && q[head] < j - b + 1)
//				head++;
//			while (head <= tail && g[i][q[tail]] >= g[i][j])
//				tail--;
//			q[++tail] = j;
//			if (j - b + 1 >= 0)
//			{
//				min_line[i][j - b + 1] = g[i][q[head]];
//			}
//		}
//	}
//
//	for (int j = 0; j < m; j++)//求第几列的最小值
//	{
//		head = 0, tail = -1;
//		for (int i = 0; i < n; i++)
//		{
//			if (head <= tail && q[head] < i - a + 1)
//				head++;
//			while(head <= tail && min_line[q[tail]][j] >= min_line[i][j])
//				tail--;
//			q[++tail] = i;
//			if (i - a + 1 >= 0)
//			{
//				minv[i - a + 1][j] = min_line[q[head]][j];
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)//求第几行的最大值
//
//	{
//		head = 0, tail = -1;
//		for (int j = 0; j < m; j++)
//		{
//			if (head <= tail && q[head] < j - b + 1)
//				head++;
//			while (head <= tail && g[i][q[tail]] <= g[i][j])
//				tail--;
//			q[++tail] = j;
//			if (j - b + 1 >= 0)
//			{
//				max_line[i][j - b + 1] = g[i][q[head]];
//				
//			}
//		}
//	}
//	for (int j = 0; j < m; j++)//求第几列的最大值
//	{
//		head = 0, tail = -1;
//		for (int i = 0; i < n; i++)
//		{
//			if (head <= tail && q[head] < i - a + 1)
//				head++;
//			while (head <= tail && max_line[q[tail]][j] <= max_line[i][j])
//				tail--;
//			q[++tail] = i;
//			if (i - a + 1 >= 0)
//				maxv[i - a + 1][j] = max_line[q[head]][j];
//		}
//	}
//	int ans=0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			ans = (ans + maxv[i][j] * minv[i][j])% 998244353;
//		}
//	}
//	cout << ans << endl;
//}

//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	while (t--)
//	solve();
//	return 0;
//}

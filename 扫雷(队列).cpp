//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<math.h>
//using namespace std;
//#define int long long
//#define INF 0x3f3f3f3f
//#define endl "\n"
//const int N = 100000 + 10;
//int st[N];
//int n, m;
//signed get_location(int x1,int y1,int x2,int y2) {
//	int num= (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
//	return num;
//}
//
//struct MyStruct
//{
//	int x, y, r;
//}a[N],b[N];//a 炸雷 b排雷
//void solve() {
//	cin>> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i].x >> a[i].y >> a[i].r;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> b[i].x >> b[i].y >> b[i].r;
//	}
//	int ans = 0;
//	int l = -1,r=m;
//	while (++l < r)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (st[i] == 0 && get_location(b[l].x, b[l].y, a[i].x, a[i].y) <= b[l].r * b[l].r)
//				//st 判断是否引爆 引爆就加入 排雷队列中
//			{
//				st[i] = 1;//标记为引爆过
//				ans++;
//				b[r++] = a[i];//加入排雷中 继续判断
//			}
//		}
//	}
//	cout << ans << endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	return 0;
//}
//

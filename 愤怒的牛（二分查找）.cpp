//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define int long long
//const int N = 1e5 + 10;
//int n, c;//n个隔间,c头牛
//int a[N];
//bool check_niu(int mid) {
//	int now = 0, sum = 1;//sum为放的个数，第一个随便放，now左指针
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] - a[now] >= mid)//区间内  足够间隔长度
//		{
//			sum++;
//			now = i;//以当前为左指针
//		}
//	}
//	return sum >= c;//是否满足比实际的牛多，这样以mid为间隔等放多少个牛
//}
//void solve(){
//	cin >> n >> c;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n );
//	int l = 1, r = 1e5,ans;
//	while (l <= r)
//	{
//		int mid = (l + r) / 2;
//		if (check_niu(mid))
//			l = mid + 1, ans = mid;
//		else
//			r = mid - 1;
//	}
//	cout << ans << endl;
//}
//
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	while(t--)
//	solve();
//	return 0;
//}
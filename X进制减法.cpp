//#include<iostream>
//using namespace std;
//#define int long long
//#define INF 0x3f3f3f3f
//#define endl "\n"
//const int N = 1e6+10;
//const int mod = 1000000007;
//int a[N], b[N];
//int n,ma,mb;
//void solve() {
//	cin >> n>>ma;
//	for (int i = ma; i >= 1; i--)//保证ma 和 mb 的个位对齐所以逆序 
//	{
//		cin >> a[i];
//	}
//	cin >> mb;
//	for (int i = mb; i >=1; i--)
//	{
//		cin >> b[i];
//	}
//	int ans = 0;
//	int w=1;//每位的权重
//	for (int i = 1; i <= max(ma, mb); i++)
//	{
//		//max函数 数据类型必须相同
//		int t = max(max(b[i], a[i]) + (long long)1, (long long)2);//每一位的进制取a i b i 最大的加一 都为零的为 2
//		ans += ((a[i] - b[i]) * w)%mod;
//		w = w * t%mod;
//	}
//	cout << ans%mod << endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	return 0;
//}
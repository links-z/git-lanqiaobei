//#include<iostream>
//#include<vector>
//using namespace std;
//#define int long long
//#define endl "\n"
//#define INF 0x3f3f3f3f
//typedef pair<int, int>pii;
//const int N = 1e5 + 30;
//int a[N];
//int n;
//bool check(int mid, int num) {
//	int small = 0;
//	int big = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num + mid > a[i]) small++;
//		if (num + mid < a[i]) big++;
//	}
//	if(mid!=0) small--;
//	if (small >= big) return true; //l=mid;
//	else return false;  //r=mid+1;
//}
//void hanshu(int n)
//{
//	
//}
//void solve() {
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		int num = a[i];
//		int l = 0, r = 1000;
//		while (l < r)
//		{
//			int mid = (l + r) / 2;
//			if (check(mid, num))
//				r = mid;
//			else
//				l = mid + 1;
//		}
//		cout << l << " ";
//	}
//}
//
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	return 0;
//}
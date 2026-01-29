//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//#define int long long
//#define endl "\n"
//#define INF 0x3f3f3f3f
//typedef pair<int, int>pii;
//const int N = 1e5 + 30;
//int a[N];
//int n;
//int sum[N];//sum[i]表示刷题数目不超过 i的人数
//// more = n-sum[a[i]] >=a[i]的人数 
//// less = sum[a[i] -1 ]; 刷题数比a[i] 少的人数
// bool check(int mid) {
//	
//	 int less = sum[mid - 1]-1; 
//	 int more = n - sum[mid];
//	 if (less >= more) return true;
//	 else return false;
//}
//
//void solve() {
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	int max1 = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		max1 = max(a[i], max1);
//		sum[a[i]] ++;
//	}
//	for (int i = 1; i <= max1 + 1; i++)
//	{
//		sum[i] += sum[i - 1];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int l = a[i], r = max1;
//		while (l < r)
//		{
//			int mid = (l + r) / 2;
//			if (check(mid))
//				r = mid;
//			else
//				l = mid + 1;
//		}
//		cout << l-a[i] << " ";
//	}
//}
//void solve1() {
//	int arr[N];
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		arr[i] = a[i];
//	}
//	sort(arr, arr + n);
//	int t=(n-1)/2;    
//	if (n % 2 != 0) {
//		for (int i = 0; i < n; i++)
//		{
//			int num = arr[t] - a[i];
//			if (num <= 0) {
//				a[i] = 0;
//			}
//			else {
//				a[i] = num + 1;
//			}
//		}
//	}
//	else {
//		int s = t + 1;
//		for (int i = 0; i < n; i++)
//		{
//			int num = arr[s] - a[i];
//			if (num <= 0) a[i] = 0;
//			else a[i] = num;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
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
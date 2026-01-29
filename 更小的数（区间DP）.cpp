//#include<iostream>
//#include<string>
//using namespace std;
//#define int long long
//#define x03f3f3f3f
//#define endl "\n"
//string str;
//const int N = 5010;
//int a[N];
//int f[N][N];
//int ans = 0;			
//void way(string str, int i, int j) {
//	i++;
//	j--;
//	if (i >= j)
//		return;
//	if (str[j] < str[i])
//	{
//		ans++;
//	}
//	else if (str[j] > str[i])
//		return;
//	else 
//		way(str, i, j);
//}
////void solve() {
////	cin >> str;
////	int ans = 0;
////	for (int len = 2; len <= str.size(); len++)//区间DP 先枚举区间 
////	{
////		for (int l = 0; l+len-1 < str.size(); l++)//在枚举每一个
////		{
////			int r = l + len - 1;
////			if (str[l] > str[r])
////				f[l][r] = 1;
////			else if (str[l] < str[r])
////				f[l][r] = 0;
////			else if (str[l] == str[r])
////			{
////				f[l][r] = f[l + 1][r - 1];
////			}
////			ans += f[l][r];
////		}
////	}
////	cout << ans << endl;
////}
//void solve1() {
//	cin >> str;
//	for (int i = 0; i < str.size() ; i++)
//	{
//		for (int j = i ; j < str.length(); j++)
//		{
//			if (str[j] < str[i])
//				ans++;
//			else if (str[j] == str[i]&&(j-i)>1)
//				way(str, i, j);
//		}
//	}
//	cout << ans << endl;
//}
//	
//
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve1();
//	return 0;
//}

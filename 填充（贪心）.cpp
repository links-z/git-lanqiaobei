//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//#define int long long
//void solve() {
//	int ans=0;
//	string s; cin >> s;
//	vector<bool>st(s.size()+5);
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] != '?')
//		{
//			if(!st[i])
//			{
//				if (i - 1 >= 0 && !st[i - 1] && s[i] == s[i - 1])
//				{
//
//					st[i - 1] = true;
//					st[i] = true;
//					ans++;
//				}
//				else if (i + 1 < s.size() && !st[i + 1] && s[i] == s[i + 1])
//				{
//					st[i] = true;
//					st[i + 1] = true;
//					ans++;
//				}
//			}
//		}
//		else
//		{
//			if (st[i])
//				continue;
//
//			if (!st[i - 1] && i - 1 >= 0)
//			{
//				
//				st[i] = true;
//				st[i - 1] = true;
//				ans++;
//			}
//			else if (!st[i + 1] && i + 1 < s.size())
//			{
//				
//				st[i] = true;
//				st[i + 1] = true;
//				ans++;
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

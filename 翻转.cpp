//#include<iostream>
//#include<string>
//using namespace std;
//#define int long long
//void solve() {
//	int ans = 0;
//	string s, t; cin >> t >> s;//s->t
//	for (int i = 1; i < s.size(); i++)
//	{
//		if (t[i] == s[i])
//			continue;
//		if (s[i - 1] == s[i + 1] && s[i - 1] == t[i])
//		{
//			s[i] = t[i];
//			ans++;
//		}
//	}
//	if (s == t)
//		cout << ans << endl;
//	else
//		cout << -1 << endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	cin >> t;
//	while(t--)
//	solve();
//}
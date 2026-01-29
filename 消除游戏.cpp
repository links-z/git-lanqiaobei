////#include<iostream>
////#include<string>
////#include<vector>
////#include<math.h>
////using namespace std;
////#define int long long
////#define endl "\n"
////#define INF 0x3f3f3f3f
////const int N = 2e5 + 10;
////char a[N];
////bool st[N];
////vector<int>v;
////void solve() {
////	string str;
////	cin >> str;
////	int t = 0;
////	while (t++< 9223372036854775807) {
////		for (int i = 1; i < str.size()-1; i++)  
////		{
////			
////				if (str[i] == str[i - 1] && str[i] != str[i + 1])
////				{
////					v.push_back(i);
////					v.push_back(i + 1);
////				}
////				else if (str[i] == str[i + 1] && str[i] != str[i - 1])
////				{
////					v.push_back(i - 1);
////					v.push_back(i);
////				}
////			
////		}
////		if (v.size() == 0)
////		{
////			cout << str << endl; 
////			break;
////		}
////		int n = v.size();
////		int p = 0;
////		for (int i = 0; i < n; i++)
////		{
////			if (i<2||v[i]!=v[i-1]&&v[i]!=v[i-2])  
////			{
////				str.erase(v[i] - p, 1);
////				p++;
////			if (str.size() == 0)
////				break;
////			}
////			
////		}
////		if (str.size()==0)
////		{
////			cout << "EMPTY";
////			break;
////		}
////		v.clear();
////	}
////	/*while (t++ < 10000001)
////	{
////		int n = str.size();
////		int x = n;
////		for (int i = 1; i < n-1; i++)
////		{
////			if ( str[i - 1] == str[i] && str[i] != str[i + 1])
////			{
////				st[i] = 1;
////				st[i + 1] = 1;
////			}
////			else if (  str[i - 1] != str[i] && str[i] == a[i + 1])
////			{
////				st[i - 1] = 1;
////				st[i] = 1;
////			}
////		}
////		int p = 0;
////		for (int i = 0; i < n; i++)
////		{
////			if (st[i] == 0)
////				a[p++] = str[i];
////		}
////		a[p] = '\0';
////		if (x == str.size())
////		{
////			cout << str<<endl;
////			break;
////		}
////		if (a[0] == '\n')
////		{
////			cout << "EMPTY";
////			break;
////		}
////	}*/
////}
//////int a[N];
//////int sum[N + 10];
//////int ans;
//////void solve() {
//////	
//////	int n; cin >> n;
//////	
//////	for (int i = 1; i <= n; i++)
//////	{
//////		cin >> a[i];
//////	}
//////	for (int i = n; i >= 1; i--)
//////	{
//////		sum[i] = sum[i + 1] + a[i];
//////	}
//////	
//////	for (int i = 1; i <= n; i++)
//////	{
//////		ans += a[i] * sum[i+1];
//////	}
//////	cout << ans << endl;
////}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//	
//	return 0;
//}
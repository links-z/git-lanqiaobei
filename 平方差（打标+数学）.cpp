//#include<iostream>
//#include<map>
//using namespace std;
//#define int long long
//#define endl "\n"
//#define INF 0x3f3f3f3f
//void solve() {
//	int a, b, n;
//	cin >> a >> b >> n;
//	int work = 5 * a+2*b;
//	int wek = 0;
//	wek = n / work;//需要几个完全周
//	int daywk = n - wek * work;//剩余的工作量
//	int sum = wek * 7;
//	if (daywk-5*a>0)
//	{
//		if (daywk - 5 * a - b > 0)
//			sum = sum + 7;
//		else if (daywk - 5 * a - b <= 0)
//			sum = sum + 6;
//	}
//	else if(daywk-5*a<0){
//		int an = (daywk + (a - 1)) / a;
//		sum = sum + an;
//	}
//	else {
//		sum++;
//	}
//	cout << sum << endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	/*cin >> t;
//	while (t--)
//	{
//		cin >> n >> m;
//		for (int i = 1; i <= m; i++)
//		{
//			for (int j = 1; j < i; j++)
//			{
//				
//				if (i!=j&&n % i == n % j)
//				{
//					cout << "Yes" << endl;
//					goto l1;
//				}
//			}
//		}
//		cout << "No"<<endl;
//		l1:;
//	}*/
//	solve();
//	return 0;
//}
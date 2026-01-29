//#include<iostream>
//using namespace std;
//const int N = 10;
//int asn[N];
//bool mark[N];
//int n;
//void dfs(int u) {
//	if (u == n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cout << asn[i] << " ";
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 1; i <= n; i++) 
//	{
//		if (mark[i] == false)
//		{
//			mark[i] = true;
//			asn[u] = i;
//			dfs(u + 1);
//			//¸´Ô­
//			mark[i] = false;
//			asn[u] = 0;
//		}
//	}
//}
//int main() {
//	cin >> n;
//	dfs(0);
//	return 0;
//}

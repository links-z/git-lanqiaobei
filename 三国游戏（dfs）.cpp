//#include<iostream>
//#include<vector>
//using namespace std;
//const int S = 1e5 + 10;
//int x=0, y=0, z=0;
//int n;
//int ans = 0;
//int a[S], b[S], c[S],d[S];
////u表示选到第几个了
////sum 表示当前选择的总和
//// cnt 表示已经选择了几个数了  
////tmp1 表示当前的数组 ，数组有三个 分别是 a 赢 ， b赢 ，c赢
//int dfs(int u,int sum,int cnt,vector<int>&tmp1) {
//	
//	if (u>=n)					
//	{
//		ans = max(ans, cnt);
//		return ans;
//	}
//	if ( sum + tmp1[u] >= 0)
//		dfs(u + 1, sum+d[u], cnt + 1,tmp1);
//	dfs(u + 1, sum,cnt ,tmp1);
//
//}
//int cal_ans(int a[], int b[], int c[]) {
//	vector<int>tmp(n);
//	int sum ;
//	for (int i = 0; i < n; i++)
//	{
//		tmp[i] = a[i] - (b[i] + c[i]);
//	}
//	sum=dfs(0, 0, 0, tmp);
//	return sum;
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> b[i];
//		
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> c[i];
//		
//	}
//	ans=cal_ans(a,b,c);
//	ans = max(ans, cal_ans(b, a, c));
//	ans = max(ans, cal_ans(c, b, a));
//	if (ans)
//		cout << ans;
//	else
//		cout << -1<<endl;
//	return 0;
//}
//贪心
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//#define int long long
//int n;
//int ans(vector<int>&a, vector<int>&b, vector<int>&c ) {
//	vector<int>tmp(n);
//	int sum = 0;
//	int cnt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		tmp[i] = a[i] - (b[i] + c[i]);
//	}
//	sort(tmp.begin(), tmp.end());
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (tmp[i] + sum > 0)
//		{
//			sum += tmp[i];
//			cnt++;
//		}
//		else
//			break;
//	}
//	return cnt;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n;
//	vector<int>a(n), b(n), c(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> b[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> c[i];
//	}
//	int answer=0;
//	answer=ans(a, b, c);
//	answer=max(answer,ans(b, a, c));
//	answer=max(answer,ans(c, b, a));
//	if (answer)
//		cout << answer<<endl;
//	else
//		cout << -1 << endl;
//	return 0;
//}
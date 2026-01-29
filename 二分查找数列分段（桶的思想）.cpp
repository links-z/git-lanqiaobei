//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 1e5;
//vector<int>a;
//int n, m;
//bool isok(int num) {//以num分段能分几段
//	int tongnum = 0;//桶的数量，能分几段
//	int zhuangnum = 0;//桶里面有几个数
//	int pos = 0;
//	while (pos < n)
//	{
//		if (zhuangnum + a[pos] > num)
//		{
//			tongnum++;
//			zhuangnum = 0;
//		}
//		else {
//			zhuangnum += a[pos];
//			pos++;
//		}
//	}
//	tongnum++;
//	return tongnum <= m; //分的段是否满足所要求分的段
//}
//void solve() {
//	cin >> n >> m;
//	int nummax=0, totalnum=0,num;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		a.push_back(num);
//		nummax=max(nummax, num);
//		totalnum += num;
//	}
//	int l = nummax, r = totalnum,ans;//左指针最大值，右指针总和
//	while (l<=r)
//	{
//		int mid = (l + r) / 2;
//		if (isok(mid))
//			ans=mid,r = mid-1;
//		else
//			l = mid + 1;
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
//#include<iostream>
//#include<queue>
//using namespace std;
//#define int long long
//#define INF 0x3f3f3f3f
//const int N = 5e4+10;
//int arr[N];
//bool st[N];
////void solve() {
////	int n, k;
////	cin >> n >> k;
////	for (int i = 0; i < n; i++)
////	{
////		cin >> arr[i];
////	}
////	for (int i = 0; i < k; i++)
////	{
////		int min = 100000000;
////		int pos = -1;
////		//找到最小值并且得到下标，标记为true
////		for (int j = 0; j < n; j++)
////		{
////			if (min > arr[j] && !st[j])
////			{
////				min = arr[j];
////				pos = j;
////			}
////		}
////		st[pos] = true;
////		for (int j = pos - 1; j >= 0; j--)
////		{
////			if (!st[j])
////			{
////				arr[j] += min;
////				break;
////			}
////			
////		}
////		for (int j = pos + 1; j < n; j++)
////		{
////			if (!st[j])
////			{
////				arr[j] += min;
////				break;
////			}
////		}
////	}
////	for (int i = 0; i < n; i++)
////	{
////		if (!st[i])
////			cout << arr[i]<<" ";
////	}
////	cout << endl;
////}
//void solve1() {
//	int n, k; cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < k; i++)
//	{
//		int pos = -1;
//		int min = 10000;
//		for (int i = 1; i <= n; i++)
//		{
//			if (min > arr[i] && st[i]==0) 
//			{
//				min = arr[i];
//				pos = i;
//			}
//		}
//		st[pos] = true;
//		for (int i = pos - 1; i >0; i--)
//		{
//			if (st[i] == 0)
//			{
//				arr[i] += min;
//				break;
//			}
//		}
//		for (int i = pos + 1; i < n + 1; i++)
//		{
//			if (st[i] == 0)
//			{
//				arr[i] += min;
//				break;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (st[i] == 0)
//			cout << arr[i]<<" ";
//	}
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve1();
//	return 0;
//}
// 
// 
// 
//堆，链表
//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//#define int long long
//
//typedef pair <int, int> pii;
//const int N = 5e5;
//int l[N], r[N], a[N];
//int st[N];
//void solve() {
//	int n, k; cin >> n >> k;
//	priority_queue<pii,vector<pii>,greater<pii>>q;//优先队列，小的优先级最高
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		q.push({ a[i],i });
//		st[i] = a[i];
//		l[i] = i - 1;
//		r[i] = i + 1;
//		if (r[i] == n)//当r[i]=n时,说明此时位置时n-1,右边到边界所以r[n]= -1
//			r[i] = -1;
//	}
//	int cnt = k;
//	while (k)
//	{
//		pii t = q.top();
//		q.pop();
//		if (t.first !=st[t.second])//判断当前的值是不是最新修改后的值，如果不是将新的值放入队列跳出本次循环
//		{
//			q.push({st[t.second],t.second});
//			continue;
//		}
//		k--;
//		int pos = t.second;
//		if (l[pos] >= 0)
//			st[l[pos]] += t.first;//当前位置的左边+
//		if (r[pos] >= 0)
//			st[r[pos]] += t.first;//当前位置的右边+
//		if (l[pos] >= 0)			//左边大于零说明左边有数据， pos被删除 影响左边数的右边值改变		
//			r[l[pos]] = r[pos];		//所以改变 l[pos]他的右边位置为pos的右边值 r[l[pos]]=r[pos]
//		if (r[pos] >= 0)
//			l[r[pos]] = l[pos];
//		st[pos] = -1; //被删除将值改为-1
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (st[i] != -1)
//			cout << st[i] << " ";
//	}
//	cout << endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	solve();
//}
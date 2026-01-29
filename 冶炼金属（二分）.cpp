//#include<iostream>
//using namespace std;
//const int N = 1e4 + 10;
//int a[N], b[N];
//int n;
//bool check_min(int mid) {
//	for (int i = 0; i < n; i++) 
//	{
//		if (b[i] < a[i] / mid)// false r=mid+1
//			return false;
//	}
//	return true; //true  r=mid
//}
//bool check_max(int mid) {
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i] > a[i] / mid) //r=mid-1
//			return false;      
//	}
//	return true; //true l=mid
//}
//void solve() 
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i] >> b[i];
//	}
//	//最小值   zuoce  b< ai/v   true
//	         //youce  b>=ai/v  false
//	int lmin = 1, rmin = 1e9;
//	while(lmin < rmin)
//	{
//		int mid = (lmin + rmin) / 2;
//		if (check_min(mid))
//		{
//			rmin = mid ;
//		}
//		else
//		{
//			lmin = mid+1;
//		}
//	}
//	cout << lmin<<" ";
//	//最大值  zuoce  b <= ai/v  flase    
//	//        youce  b  > ai/v  true
//	int lmax = 1, rmax = 1e9;
//	while(lmax < rmax)
//	{
//		int mid = (lmax + rmax + 1) / 2;
//		if (check_max(mid))  
//			lmax = mid;
//		else
//			rmax = mid -1;
//	}
//	cout<< lmax;
//	
//}
//
//int main() 
//{
//	solve();
//	/*cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i] >> b[i];
//	}
//	bool flag;
//	for (int i = 1; i < 1e6; i++)
//	{
//		flag = 1;
//		for (int j = 0; j < n; j++)
//		{
//			if (b[j] != a[j] / i)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << i << " ";
//			break;
//		}
//	}
//	for (int i = 1e6; i > 0; i--)
//	{
//		flag = 1;
//		for (int j = 0; j < n; j++)
//		{
//			
//			if (b[j] != a[j] / i)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << i;
//			break;
//		}
//	}*/
//}
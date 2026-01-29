//#include<iostream>
//using namespace std;
//const int N = 2e5;
//int ar[N];
//
//int main() {
//	int n,c;
//	cin >> n >> c;
//	int flag = 0;
//	for (int i = 0; i < n; i++)//a=b+c
//	{
//		cin >> ar[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int tmp = ar[i];		//arr mid	1 1 2 3 
//		int l = 0, r = n - 1;//tmp=arr[i]+c;  arr mid+c >tmp  r=mid-1 ; arr mid+c<=tmp l=mid
//		while (l < r)
//		{
//			int mid = (r + l+1) / 2;
//			if ((c + ar[mid]) <= tmp)
//				l = mid ;
//			else
//				r = mid-1 ;
//		}
//		if ((ar[l] + c )== tmp)
//			flag++;
//	}
//	cout << flag;
//	return 0;
//}
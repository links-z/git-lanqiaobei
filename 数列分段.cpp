//#include<iostream>
//using namespace std;
//int main() {
//	int n, m;
//	int l = 0;
//	int r = 0;
//	int arr[100000];
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		if (l < arr[i])
//			l = arr[i];
//		r += arr[i];
//	}
//	while (l <= r)//二分 找分段和的最小值  左 是数列最大值 右是数列全部和
//	{
//		int mid = (r + l) / 2;
//		int count = 1;
//		int sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] + sum <= mid)
//				sum += arr[i];
//			else
//			{
//				sum = arr[i];
//				count++;
//			}
//		}						//通过判断 count和m的大小 得出mid 
//		if (count <= m)			//count < m  mid 要变小   右边界r = mid - 1
//			r = mid - 1;		//count = m  mid 要变小   右边界 r = mid - 1
//		else
//			l = mid + 1;		//count > m  mid 要变大  左边界	l = mid + 1
//		
//	}
//	cout << l;					//找最小值 右边界不可靠 找左边界
//	return 0;
//}
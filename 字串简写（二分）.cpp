//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//const int N = 1e5;
//int main(){
//	string str;
//	char c1, c2;
//	int k;
//	int num=0;
//	int arr[N];
//	cin >> k >> str >> c1 >> c2;
//	/*for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] == c1)
//			for (int j = i+3; j < str.size(); j++)
//			{
//				if (str[j] == c2&&(j-i+1)>=4)
//				{
//					num++;
//				}
//			}
//	}
//	cout << num;*/
//	int ans=0;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] == c1)
//			arr[i] = i;
//		int l = sizeof(arr) / sizeof(arr[0]);
//		if (str[i] == c2)
//		{
//			if (i + 1 - k < 0 || (sizeof(arr) / sizeof(arr[0]) == 0))
//				continue;
//			int l = 0, r = (sizeof(arr) / sizeof(arr[0]) )- 1;
//			int mid;
//			while (l < r)
//			{
//				int mid = (l + r+1) / 2;
//				if (arr[mid] <= i - k + 1)
//					l = mid;
//				else
//					r = mid - 1;//c2-c1+1>=k   c1<=c2+1-k
//			}
//			if (arr[l] <= c2 + 1 - k)
//				ans += (l + 1);
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<sstream>
//using namespace std;
//const int N = 1e5;
//int arr[N];
//int main() {
//	int n,K;
//	cin >>n>>K;
//	int sum = 0;
//
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++)				
//	{												 
//		
//		stringstream s;
//		s.clear();
//		s.str(" ");
//		s << arr[i];
//		string num1=s.str();
//		
//		for (int j = 0; j < n ; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//			s.clear();
//			s.str(" ");
//			s << arr[j];
//			int num4;
//			string num2 = s.str();
//			string num3 = num1+ num2;
//			s.clear();
//			s.str(" ");
//			s << num3;
//			s >> num4;
//			if (num4 <= K)
//				sum++;
//		}
//	}
//	cout << sum;
//	return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    const int rows = 30;
//    const int cols = 20;
//
//    // 输入矩阵
//    vector<vector<int>> matrix(rows, vector<int>(cols));
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//
//     //计算辅助矩阵 dp
//    vector<vector<int>> dp(rows, vector<int>(cols, 0));
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            dp[i][j] = matrix[i][j];
//            if (i > 0) dp[i][j] += dp[i - 1][j];
//            if (j > 0) dp[i][j] += dp[i][j - 1];
//            if (i > 0 && j > 0) dp[i][j] -= dp[i - 1][j - 1];
//        }
//    }
//
//    // 计算最大子矩阵的和
//    int maxSum = INT_MIN;
//    const int subMatrixSize = 5;
//    for (int i = subMatrixSize - 1; i < rows; ++i) {
//        for (int j = subMatrixSize - 1; j < cols; ++j) {
//            int currentSum = dp[i][j];
//            if (i - subMatrixSize >= 0) currentSum -= dp[i - subMatrixSize][j];
//            if (j - subMatrixSize >= 0) currentSum -= dp[i][j - subMatrixSize];
//            if (i - subMatrixSize >= 0 && j - subMatrixSize >= 0) currentSum += dp[i - subMatrixSize][j - subMatrixSize];
//            maxSum = max(maxSum, currentSum);
//        }
//    }
//
//    cout << "最大子矩阵的和是：" << maxSum << endl;
//
//    return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//#define int long long
//#define MANN 0x3f3f3f3f
//int n, m, k;
//int ar[110][5];
//
//void solve() {
//	cin >> n >> m >> k;
//
//	for(int i=0;i<n;i++)
//		for (int j = 0; j < m; j++)
//		{
//			cin >> ar[i][j];
//		}
//	int h = 0, t = -1;
//	int q[110];
//	int sum1[110][5];//以(1,1)起点的和
//	int sum_le[110][5];
//	//先求每行k个的和 
//	int ans = 0;
//	memset(sum1, 0, sizeof(sum1)/4);
//	for (int i = 0; i < n; i++)
//	{
//		h = 0, t = -1;
//		int sum = 0;
//		for (int j = 0; j < m; j++)
//		{
//			
//			if (h <= t && q[h] < j - k + 1)
//				h++;
//			q[++t] = j;
//			if (h <= t &&  j - k + 1>=0)
//			{
//				for(int l=j-k+1;l<j;l++)
//				sum += ar[i][q[l]] ;
//				sum1[i][j - k + 1] = sum;
//				
//				
//			}
//		}
//		
//	}
//	
//	
//	for (int j = 0; j < m; j++)
//	{
//		h = 0, t = -1;
//		int sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (h <= t && q[h] < i - k + 1)
//				h++;
//			q[++t] = i;
//			if (h <= t && i - k + 1 >= 0)
//			{
//				
//				while (i - k + 1 < i - k + 1 + 2)
//					sum += sum1[q[h++]][j];
//				ans += sum;
//				sum = 0;
//				
//			}
//		}
//		
//	}
//	cout << ans;
//	
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	while (t--)
//	solve();
//	return 0;
//}
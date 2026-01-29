//#include <iostream>
//#include <vector>
//#include<algorithm>
//using namespace std;
//#define endl "\n"
//int way(int n) {//青蛙跳台阶
//	int dp[100];//dp[i]表示到i个台阶有dp[i]种方法
//	dp[0] = 1, dp[1] = 1;
//	for (int i = 2; 2 < n; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];//到i阶 只有两种方法 （由 i-1 迈一步上来  i-2 迈 两步上来）
//	}									//所以 到i阶 的方法 由 到i-1阶的方法数加到i-2的方法数 就是到i阶的两种方法
//	return dp[n];
//}
////非负整数num 返回变 0所需的步数 当前是偶数就除 2 奇数就减去 1
//int way1(int num) {//将数字变成 0 的操作次数
//	int f[100];//f[i]表示i变成零的次数
//	for (int i = 1; i < num; i++)
//	{
//		if (i % 2 == 1)//奇数
//		{
//			f[i] = f[i - 1] + 1;//f[i] i变成 0 的次数就等于 i-1 变成 0 的次数 加 i-1 的一个次数
//		}
//		else
//		{
//			f[i] = f[i / 2] + 1;// i变成零的次数等于 i/2 变成零的次数 （因为是偶数下一个数为i/2） 加 当前除以二的一次
//		}
//	}
//	return f[num];
//}
////数组每个下标代表一个阶梯 第i阶梯的花费是cost[i]  每爬一个台阶都要花费 体力（cost）支付一个cost 就可以
////向上爬一个或者两个台阶 找出到楼顶的最小花费  可以从 0 或者 1 层开始爬
//int way2(vector<int> &cost) {
//	int f[100];//f[i] 表示 到达i层所需的最小花费
//	f[0] = f[1] = 0;
//	for (int i = 2; i <= cost.size(); i++)
//	{
//		// 第i层的最少花费等于 min（i-1最小化费 +i-1向上爬所需的花费 ， i-2 层最小花费 + i-2爬花费） 
//		f[i] = min(f[i - 1] + cost[i - 1], f[i - 2] + cost[i - 2]);//cost[i] 表示从i层向上爬要的花费
//	}
//	return f[cost.size()];
//}

//#include<iostream>
//using namespace std;
//
//int gcd(int a, int b)//最大公因式求法(最大公约数)
//{
//    int tmp;
//    while (b > 0)  {  
//        tmp = a % b; 
//        a = b;    
//        b = tmp; 
//    }
//    return a;
//}
//int lcm(int a,int b) { //最小公倍数=两数乘机/最大公约数
//    int tmp = a * b;
//    tmp=tmp/ gcd(a, b);
//    return tmp;
//}
//int get_first(int x) {//获得当前数字的第一个数字
//	int num = 0;
//	while (x) {
//		num = x % 10; 
//		x /= 10; 
//	}
//	return num;
//}
//int get_last(int x)//获得当前数字的最后一个数字
//{
//	return x%10;
//}
//// 计算数字之和
//int digitSum(int num) {//计算当前数字各个位上数字的和
//    int sum = 0;
//    while (num > 0) {
//        sum += num % 10;
//        num /= 10;
//    }
//    return sum;
//}
//
//// 判断是否为质数（素数）
//bool isPrime(int num) {
//    if (num <= 1)
//        return false;
//    for (int i = 2; i*i <= sqrt(num); i++)
//    {
//        if (num % i == 0)
//            return false;
//    }
//    return true;
//}
//
//

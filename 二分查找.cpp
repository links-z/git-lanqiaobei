//#include<iostream>
//#include<string>
//using namespace std;
//const int N = 1e6 + 10;
//int arr[N];
//int main() {
//	//char ch[] = {'c','h','i','n','a'};
//	//char ch1[] = "china";
//	//string str = "chinapeople";
//	//long strl=strlen(ch1);//字符串长度函数（字符串的名字）
//	// sizeof(chl)所占的内存大小
//	//cout << sizeof(ch) << endl << sizeof(ch1)<<endl<<sizeof(str)<<endl<<strl<<endl;
//	//memset(ch1, 'Z', 2);//字符串清理函数memset（要操作的字符数组，要写入的初始化数据，要清理的字符个数）
//	//char c[] = "It's a computer";
//	//char c1[100] = "china jia you";
//	//strcpy_s(c1,"zhanglibin");//后面的字符串复制到第一个字符串
//	//strcat_s(c1,c);//后面的拼接到前面的，前面的字符串空间必须够用//前一个为变量
//	//strncat_s(c1, c + 3, 5);
//	int n,m,number;//n 数组长度 m查询个数
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	
//	for (int i = 0; i < m; i++)
//	{
//		cin >> number;//输入要查询的数
//		int l = 1, r = n;
//		while (l < r)
//		{
//			int mid = (l + r) / 2;
//			if (arr[mid] < number)
//				l = mid + 1;
//			else
//				r = mid;
//			if (arr[l] == number)
//				cout << l<<" ";
//			else
//				cout << " -1"<<" ";
//		}
//	}
//
//	return 0;

	//while (m--) {
	//	int number;//输入要查找的数字
	//	cin >> number;
	//	//开始二分  寻找左边界
	//	int l = 0, r = n - 1;
	//	int mid = 0;//左端点
	//	while (l < r)
	//	{
	//		mid = (r + l) / 2;
	//		if (arr[mid] >= number)//mid大于等于number 可能是number但是右边肯定不是 所以r=mid
	//			r = mid;
	//		else  //mid小于number mid左侧和此时mid 都不是number  右侧比此时mid大 有可能是mid
	//			l = mid + 1;
	//	}
	//	if (arr[l] != number)
	//		cout << -1 << endl;
	//	else
	//	{
	//		cout << l << " ";
	//		//找右边界
	//		l = 0, r = n - 1;
	//		while (l < r)
	//		{
	//			mid = (l + r + 1) / 2; //必须加1不然死循环 因为下面 mid-1
	//			if (arr[mid] <= number)//mid小于等于number  mid此时可能是number 但是左侧不可能是所以l=mid
	//				l = mid;
	//			else
	//				r = mid - 1;//mid大于number  mid 和 mid右侧都不可能是 number 所以r=mid-1
	//		}
	//		cout << r << endl;
	//	}
	//}
	//return 0;
//}
	

#include<iostream>
#include<vector>
using namespace std;
#include<string>
#include<typeinfo>

//void main() {
//	//int num = 23;
//	////cout << to_string(num) << endl;//int 转为 string  <string> to_string()
//	//char ch = '4';
//	//int num1 = atoi(&ch);//字符转为int
//	//cout << num1 << endl;
//	//char srl[] = "123";//字符串转为整数
//	//int num2 = atoi(srl);
//	//cout << num2 << endl;
//	//int num3 = atol(srl);//转为长整数
//	//int num4 = atof(srl);//转为浮点数
//	//bool isdigit（）;//是否是数字
//	//bool idalpha();//是否是字母	
//	//字符串冒泡排序
//	//string str;
//	//cin >> str;
//	//for (int i = 0; i < str.size() ; i++) {
//	//	int flag = 1;
//	//	for (int j = 0; j < str.size() - i -1;  j++) {
//	//		if (strcmp(&str[j],&str[j+1])>0) {//字符串比较大小不能直接用关系运算符（==除外），用的是 strcmp(a,b),返回负数则a<b,返回正数a>b,返回0则a ==b.
//	//			int temp = str[j]; 
//	//			str[j] = str[j+ 1];
//	//			str[j + 1] = temp;
//	//			flag = 0;
//	//		}
//	//	}
//	//	if (flag == 1)
//	//		break;
//	//}
//	//for (int i = 0;i<str.size();i++) {
//	//	cout << str[i] ;
//	//}
//	//字符串后移 123456
//	/*string str;
//	cin >> str;
//	int temp = str[str.size() - 1];
//	for (int i =str.size()-1;i>0;i--) {
//		str[i] = str[i - 1];
//	}
//	str[0] = temp;
//	cout << str;*/
//	/*string str{"123456"};
//	char ch = str[1];*/
//	/*cout<<"参数类型是char：" << atoi(&ch) << endl;
//	cout << "参数类型是string：" << atoi(&str[1]) << endl;*/
//	/*for (int i = 0;i<str.length();i++) {
//		cout << str[i]<<endl;
//	}*/
//
//	//string str("this is an example phrase");
//	//cout << str[1] << endl;
//	//cout << str[5] << endl;
//	//str.erase(1,5);//删除 从1开始的5个字符；删除的字符直接从一开始数
//	//cout << str<<endl;
//	//cout<< str[6] << endl;//str[i]表示第i+1个字符
//	
//	/*str.erase(str.begin()+9);
//	cout << str;*/
//	/*str.erase(4,6);*/
//	//str.erase(str.begin()+3,str.end()-13);//删掉的是3，和end-13之间的
//	//cout << str;
////	string str1,str2;
////	cin >> str1>>str2;
////	cout << str1 + str2;//+直接拼接字符串
//	//int arr[12][12];
//	//arr[0][0] = 1;
//	//int num=0;
//	//for (int i = 0;i<12;i++) {
//	//	for (int j = 0; j < i+1; j++) {
//	//		if (j == 0 || j == i) {
//	//			arr[i][j] = 1;
//	//			cout << arr[i][j]<<" ";
//	//		}
//	//		else {
//	//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//	//			cout << arr[i][j] << " ";
//	//		}
//	//	}
//	//	cout << endl;
//	//}
//	//for (int i = 0;i<12;i++) {
//	//	for (int j = 0;j<i+1;j++) {  
//	//		num++;
//	//		if (num == 5)
//	//			cout << arr[i][j];
//	//	}
//	//	
//	//}
//	vector<int>c;
//	for (int i = 0; i < 10; i++)
//	{
//		c.push_back(i);
//	}
//	
//}
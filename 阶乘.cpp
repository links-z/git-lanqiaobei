//#include <iostream>
//using namespace std;
//#define Max_Digits 5000
//#define int long long
//// 乘法运算，将一个数组与一个乘数相乘，更新结果数组并记录数字位数
//void multiply(int result[], int* digits, int multiplier) {
//    int carry = 0;
//    for (int i = 0; i < *digits; i++) {
//        int product = result[i] * multiplier + carry;
//        result[i] = product % 10; // 计算当前位的结果
//        carry = product / 10; // 计算进位
//    }
//    while (carry > 0) {
//        result[*digits] = carry % 10; // 将剩余的进位存储在新的位中
//        carry /= 10;
//        (*digits)++; // 增加数字位数
//    }
//}
//
//// 高精度阶乘计算
//void fact(int n) {
//    int result[Max_Digits] = { 0 }; // 结果数组，用于存储阶乘的每一位数字
//    int digits = 1; // 数字的位数，初始为1（只有一位数字1）
//    result[0] = 1; // 初始阶乘结果为1
//
//    for (int i = 2; i <= n; i++) {
//        multiply(result, &digits, i); // 计算每个数字与当前乘积的乘积，并更新结果数组
//    }
//
//    // 逆序打印结果数组，即为阶乘的结果
//    for (int i = digits - 1; i >= 0; i--) {
//        printf("%d", result[i]);
//    }
//    printf("\n");
//}
//int get_end(int x) {
//    
//    
//     return x %(int)1e9;
//    
//}
//signed main() {
//    int n = 1;
//    int sum = 0;
//    for (int i = 1; i <= (long long)2023; i++)
//    {
//        n =n*i%(int)1e9;
//        sum += n;
//        sum=sum % (int)1e9;
//        cout << sum<<endl;
//    }
//    return 0;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int arr[10000];
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
//void solve() {
//    int n;
//    cin >> n;
//    int ans1=0, ans2=0;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> arr[i];
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = i + 1; j <= n; j++)
//        {
//            if (gcd(arr[i], arr[j]) > 1)
//            {
//                ans1 = i;
//                ans2 = j;
//                break;
//            }
//            
//        }
//        if (ans1 != 0)
//            break;
//    }
//    cout << ans1<<" " << ans2<<endl;
//}
//signed main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//    solve();
//	return 0;
//}
//

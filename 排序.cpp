//#include<iostream>
//using namespace std;
//#define maxsize 100
//typedef struct {
//	int * data;
//	int length;
//}SqList;
//void InitList(SqList& L) {
//	L.data = new int[maxsize];
//	L.length = 0;
//
//}
//void Insert_(SqList& L) {
//	int i, j;
//	for ( i = 2; i <= L.length; i++)
//	{
//		if (L.data[i] < L.data[i - 1]) {
//			L.data[0] = L.data[i];
//			for ( j = i - 1; L.data[j] > L.data[0]; j--)
//			{
//				L.data[j + 1] = L.data[j];
//			}
//			L.data[j + 1] = L.data[0];
//		}
//	}
//}
//void Insert_mid(SqList& L) {
//	int i, j;
//	for (int i = 2; i <= L.length; i++)
//	{
//		if (L.data[i] < L.data[i - 1])
//		{
//			L.data[0] = L.data[i];
//			int low = 1, heigh = i-1;
//			while (low <= heigh)
//			{
//				int mid = (low + heigh) / 2;
//				if (L.data[mid] <= L.data[0]) low = mid + 1;
//				else	heigh = mid - 1;
//			}
//			for (j = i-1; j >= low; j--) {
//				L.data[j + 1] = L.data[j];
//			}
//			L.data[low] = L.data[0];
//		}
//	}
//}
//void Sheer(SqList& L) {
//	int d, i, j;
//	for (int d = L.length / 2; d >= 1; d /= 2) {
//		for (i = d + 1; i <= L.length; i++) {
//			if (L.data[i] < L.data[i - d]) {
//				L.data[0] = L.data[i];
//				for (j = i - d; j >= 0 && L.data[j]> L.data[0]; j -= d) {
//					L.data[j + d] = L.data[j];
//				}
//				L.data[j + d] = L.data[0];
//			}
//		}
//	}
//}
//void exchang(SqList &L) {
//	int flag = 0;
//	for (int i = 1; i <= L.length - 1; i++) {
//		for (int j = 1; j <= L.length - i; j++) { //1 length
//			if (L.data[j] > L.data[j + 1]) {
//				flag = 1;
//				int temp = L.data[j];
//				L.data[j] = L.data[j + 1];
//				L.data[j + 1] = temp;
//			}
//		}
//		if (flag == 0) break;
//	}
//}
//int partition(SqList L, int low, int high) {
//	int pivot = L.data[low];
//	while (low < high)
//	{
//		while (low < high && L.data[high] >= pivot) high--;
//		L.data[low] = L.data[high];
//		while (low < high && L.data[low] <=  pivot) low++;
//		L.data[high] = L.data[low];
//	}
//	L.data[low] = pivot;
//	return low;
//}
//void Qsort(SqList &L,int low,int high) {
//	if (low < high) {
//		int pivotloc = partition(L, low, high);
//		Qsort(L,low,pivotloc-1 );
//		Qsort(L, pivotloc+1, high);
//	}
//}
//unsigned main() {
//	SqList L;
//	InitList(L);
//	for (int i = 1; i <= 5; i++) {
//		cin >> L.data[i];
//		L.length++;
//	}
//	cout << "ÅÅÐòÇ°:" << endl;
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << L.data[i] << "   ";
//	}
//	cout << endl;
//	Qsort(L, 1, L.length);
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << L.data[i] << "   ";
//	}
//}
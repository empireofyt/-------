//#include<iostream>
//using namespace std;
//
//
////实现通用 对数组从大到小进行排序
////测试 char数组 int数组
//
//template<class T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法
//template<class T>
//void mySort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;//认定最大值下标
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] < arr[j]) {
//				max = j;//更新最大值下标
//			}
//		}
//		if (max != i) {
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////提供打印数组模板
//template<class T>
//void printArray(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << "    ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	//测试char数组
//	char charArr[] = "basdoqw";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02() {
//	//测试int数组
//	int intArr[] = { 5,3,7,234,53,76 };
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//
//
//int main() {
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
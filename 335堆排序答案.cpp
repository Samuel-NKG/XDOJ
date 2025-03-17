#include<iostream>
#include<vector>
using namespace std;
 
//����С���� �ݹ�~~~
//len �� num���� index�ǵ�һ����Ҷ�ӽڵ���±�
//ȷ���˽ڵ���ϱ�׼
void adjust2min(vector<int> &num, int len, int index) {
	int l = 2 * index + 1;  //���ӽڵ�
	int r = 2 * index + 2;  //���ӽڵ�
 
	int minIdx = index;
	if (l < len && num[l] < num[minIdx]) {
		minIdx = l;
	}
	if (r < len && num[r] < num[minIdx]) {
		minIdx = r;
	}
	if (minIdx != index) {
		swap(num[minIdx], num[index]);
		adjust2min(num, len, minIdx);
	}
}
 
void heapSort(vector<int> &num, int size) {
	//����С���ѣ������һ����Ҷ�ӽڵ����ϣ�
	for (int i = size / 2 - 1; i >= 0; i--) {
		adjust2min(num, size, i);
	}
 
	//����С���ѣ����δҪ��
//	for (int i = size - 1; i >= 1; i--) {
//		swap(num[0], num[i]); //β����С
//		adjust2min(num, i, 0); //����������
//	}
}
 
int main() {
	
	vector<int> num;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		num.push_back(k);
	}
	heapSort(num, num.size());
	for (int i = 0; i < n; i++) {
		cout << num[i] << ' ';
	}
 
 
}

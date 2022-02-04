#include<stdio.h>	
#include<iostream>
#include<string>
#include<map>
#include<set>
#include<stack>
#include<vector>
#include<functional>
#include<algorithm>

using namespace std;

// c++ reference�� ���ؼ� �н��ϱ�
// ���ڸ� �޴� �κп� & �� ��������ν�, C������ �����Ϳ� ����� ����                                    
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


void func_vec(vector<int> v) {
	v[10] = 7; //���� ���������?? ���� ������� �ʴ´�. �� �Լ����ڷ� ������ ���纻�� ������. ����ü�� �����ϴ�. 
}

int cmp1(vector<int> v1, vector<int> v2, int idx) {
	return v1[idx] > v2[idx]; 
	// �ð����⵵�� O(N) �̴�. 1�� ������ ���� �ִµ�, ���ڷ� vector�� ���� �� ���� �����ϱ� ������ �ᱹ���� vector ũ���� N��ŭ �ð��� �ҿ��
}

int cmp2(vector<int>& v1, vector<int>& v2, int idx) { // �ּ������� �ޱ� ������ �ð����⵵�� �޶��� O(1) 
	return v1[idx] > v2[idx];
}


int main(void) {

	// STL(standard template library) - vector �迭�� ����ϴ�. (c++������ vector ���� ũ�� ��ð� �ʿ��ϴ�.) 
	// ������ vector �� ũ�Ⱑ �ʿ����. 
	vector<int> v(100); //�����迭�̴�.  0���� �ʱ�ȭ �Ǿ�����, vector<int>�� ������ ���� �����ؼ� ������. 
	v[10] = 7;
	cout << v[10];


}
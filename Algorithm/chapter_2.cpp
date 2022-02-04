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

// c++ reference에 대해서 학습하기
// 인자를 받는 부분에 & 를 사용함으로써, C에서의 포인터와 비슷한 역할                                    
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


void func_vec(vector<int> v) {
	v[10] = 7; //값이 변경됬을까?? 값이 변경되지 않는다. 즉 함수인자로 보내면 복사본을 보낸다. 구조체와 동일하다. 
}

int cmp1(vector<int> v1, vector<int> v2, int idx) {
	return v1[idx] > v2[idx]; 
	// 시간복잡도는 O(N) 이다. 1로 착각할 수도 있는데, 인자로 vector를 받을 때 값을 복사하기 때문에 결국에는 vector 크기인 N만큼 시간이 소요됨
}

int cmp2(vector<int>& v1, vector<int>& v2, int idx) { // 주소정보만 받기 때문에 시간복잡도가 달라짐 O(1) 
	return v1[idx] > v2[idx];
}


int main(void) {

	// STL(standard template library) - vector 배열과 비슷하다. (c++에서는 vector 사용시 크기 명시가 필요하다.) 
	// 하지만 vector 는 크기가 필요없다. 
	vector<int> v(100); //가변배열이다.  0으로 초기화 되어있음, vector<int>를 보내면 값을 복사해서 보낸다. 
	v[10] = 7;
	cout << v[10];


}
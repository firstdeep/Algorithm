// 22.1.10 알고리즘 공부 시작 
// 시간복잡도, 완전 탐색, 그리디, 분할 정복, BFS, DFS, DP, 최단경로, 이분탐색, 슬라이딩 윈도, 투포인터, 유니온 파인드, 최소 스패닝 트리, 위상정렬, 비트 마스킹 DP, 최소 공통 조상(LCA) 

#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>


/*
[시간, 공간 복잡도]

시간 제한: 1초에 3억~5억번의 연산안에 종료되야함. 
for문의 경우 대부분 N에 비례한다고 생각하자. 
- 시간 복잡도 공부하기 
최악의 경우 logN초가 걸린다 왜?...
빅o 표기법 - 시간복잡도 그래프 

N에 따른 빅오를계산하여 시간복잡도 유추 
결론은 시간복잡도를 고려하여 코딩을 진행해야 한다. 
 
* 공간 복잡도 (매우 중요) 
512mb = 1.2억개 int (즉 배열문제에서 최대 범위가 5억개라면 해당 문제는 배열로 풀 수 없음)  
1byte = 2^3승 즉 8비트이다. 
int = 4byte
unsined char = 255
*/


// char = -128 ~ 127까지 (이상 이하)
// 무한 loop 에 빠지는 함수이다. 
// char값이 최대값을 넘었기 때문이다. 
// s가 128까지는 값이 되기 때문에 128이 되는 순간 이미 범위 값을 넘음 따라서 무한루프 발생 
// 해결 방법 char를 int로 변경하거나 혹은 128을 127로 변경 
void func1() {
	for (char s = 0; s < 128; s++) {
		std::cout << "hi";
	}
}


// i가 10이 되는 순간 integer overflow 발생한다. 
// a의 자료형을 long long으로 변경 
int func2() {
	long long a = 10;
	int mod = 1000000007;
	for (int i = 0; i < 10; i++) {
		a = 10 * a % mod;
	}
	return a;
}

// 10억 이하의 자연수 N 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수
int func3(long long N) {

	long long ex = 0;

	for (int i=0; i < N; i++) {
		if (pow(2, i) <= N) {
			ex = i;
		}
		else { break; }
	}

	// Another solution
	/*
	int val = 1;
	while (2 * val <= N) val *= 2;
	return val;
	*/

	return pow(2, ex);
}

// 실수 자료형 float 4byte(32bit), double 8byte(64bit) 
// sign, exponent fraction 으로 나뉜다. 
// IEEE 754 format 
// 컴퓨터 처리하는 2진수와 10진수의 관계 
// float 은 유효숫자 6자리, double 은 유효숫자 15자리 0.1 + 0.1 + 0.1 이 0.3과 다르다. 따라서 대부분 정수를 사용하고 만약 실수를 사용해야 한다면 double 을 주로 사용하는 걸로 하자 
// 매우 중요 
void fun4(void) {
	double a = 0.1 + 0.1 + 0.1;
	double b = 0.3;
	if (a == b) std::cout << "Same 1\n";
	if (abs(a - b) < 1e-12) std::cout << "same 2\n";
	// 즉 실수값을 같다고 취급할 때는 1e-12를 진행한다. 
	// 실수를 비교할 때는 등호를 사용하면 안된다. 
	// 실수의 저장/연산 과정에서 반드시 오차가 발생할 수 밖에 없다. 
}

int main() {
	// char 자로형은 8bit 이다. (-127 ~ 127) unsigned 의 경우 0 ~ 255까지 
	// 오른쪽부터 2^0부터 시작해서 맨 왼쪽이 -2^7승이다. - 2s complements 
	// integer의 경우 32비트 표현 가능한 수는 2^31승 -1 20억정도까지 담을 수 있음 
	// integer overflow 원인 
	// integet에 40억을 넣었을 때 -값이 나오는 이유
	// 주어진 범위를 넘어 1을 더하면 이전 값이 된다. 
	// 즉 범위밖에 값이 들어왔기 때문에 -값이 나온다. 
	// 해결방법: ineger overflow 를 막는 방법 

	// 만약에 input이 longlong이 넘는 수가 있을 경우에는 string으로 저장해야 하는데 
	// 이 문제의 경우 python 으로 코딩하기 

	// [실수형] 이진수를 
	int A = func3(97615282);
	std::cout << A << std::endl;
	return 0;
}


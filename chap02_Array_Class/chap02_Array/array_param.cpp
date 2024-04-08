#include <cstdio>
#define MAX_SIZE 10

void sub(int x, int arr[]) {
	x = 10;
	arr[0] = 10;
}
void main()
{
	int var;
	int list[MAX_SIZE];

	var = 0;
	list[0] = 0;
	sub(var, list);
	printf("var=%d, list[0]=%d\n", var, list[0]);

} // 이 프로젝트의 의미: 인수형 var는 값을 넣어줘도 변하지 않는데, list 안의 값은 변했다.
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//	num1 = printf("12345\n");
//	num2 = printf("Ilove my home\n");
//	printf("%d %d \n", num1, num2);
//	return 0;
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//
//int Add(int num1, int num2)
//{
//	return num1 + num2;
//}
//
//void ShowAddResult(int num)
//{
//	printf("덧셈결과 출력: %d \n", num);
//}
//
//int ReadNum(void)
//{
//	int num;
//	scanf("%d", &num);
//	return 0;
//}
//
//void HowToUseThisProg(void)
//{
//	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
//	printf("자! 그럼 두개의 정수를 입력하세요. \n");
//}
//
//int main(void)
//{
//	int result, num1, num2;
//	HowToUseThisProg();
//	num1 = ReadNum();
//	num2 = ReadNum();
//	result = Add(num1, num2);
//	ShowAddResult(result);
//	return 0;
//}

#pragma warning(disable:4996)
#include <stdio.h>
int AbsoCompare(int num1, int num2);
int GetAbsValue(int num);

int main(void)
{
	int num1, num2;
	printf("두 개의 정수 입력:");
	scanf("%d %d", &num1, &num2);
	printf("%d와 %d중 절댓값이 큰 정수: %d \n", num1, num2, AbsoCompare, GetAbsValue(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsValue(int num)
{
	return 0;
}

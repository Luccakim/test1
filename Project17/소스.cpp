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
//	printf("������� ���: %d \n", num);
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
//	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
//	printf("��! �׷� �ΰ��� ������ �Է��ϼ���. \n");
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
	printf("�� ���� ���� �Է�:");
	scanf("%d %d", &num1, &num2);
	printf("%d�� %d�� ������ ū ����: %d \n", num1, num2, AbsoCompare, GetAbsValue(num1, num2));
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

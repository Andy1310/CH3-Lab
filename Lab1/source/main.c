#include <stdio.h>
#include <stdlib.h>

int Odd(int u);
int Even(int u);
int TotalSum(int u);

int main(void)
{
	int a, Sum;
	char c;
	printf("1+2+...+n�A�п�Jn=");
	scanf_s("%d",&a);
	printf("�аݭn���_�ƩM(O)�A���ƩM(E)�A�٬O��ƩM(I)?�п��:");
	scanf_s(" %c", &c);

	switch (c)
	{
	case 'O':
		Sum = Odd(a);
		break;
	case 'E':
		Sum = Even(a);
		break;
	case 'I':
		Sum = TotalSum(a);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n", Sum);
	system("pause");
	return 0;
}

int Odd(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}
int Even(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}
int TotalSum(int u)
{
	return Even(u) + Odd(u);
}
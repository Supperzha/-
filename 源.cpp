#include <stdio.h>

int i = 1;
void move(int n, char start, char end);
void hanio(int n, char start, char tran, char end);

int main()
{
	int n;
	scanf_s("%d", &n);
	hanio(n,'A','B','C');
}

void move(int n, char start, char end) 
{
	printf("��%d��������%d�����Ӵӵ�%c���������ƶ���------->��%c��������\n", i++, n, start, end);
}
void hanio(int n, char start, char tran, char end)
{
	if (n == 1)
	{
		move(n, start, end);
	}
	else
	{
		hanio(n - 1, start, end, tran); //����n-1���startΪ��㣬endΪ��תվ��tranΪĿ������
		move(n, start, end);
		hanio(n - 1, tran, start, end); //����n-1����tranΪ��㣬startΪ��תվ��endΪĿ������
	}
}
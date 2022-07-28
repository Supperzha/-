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
	printf("第%d步：将第%d个盘子从第%c的柱子上移动到------->第%c的柱子上\n", i++, n, start, end);
}
void hanio(int n, char start, char tran, char end)
{
	if (n == 1)
	{
		move(n, start, end);
	}
	else
	{
		hanio(n - 1, start, end, tran); //将第n-1块从start为起点，end为中转站，tran为目标柱。
		move(n, start, end);
		hanio(n - 1, tran, start, end); //将第n-1块以tran为起点，start为中转站，end为目标柱。
	}
}
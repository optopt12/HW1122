#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[100];
	int i, j, tmp, n;
	printf("請輸入陣列大小: ");
	scanf_s("%d", &n);
	printf("請輸入排序數據: \n");
	for (int a = 0; a < n; a++)
	{
		printf("第%d個數字: ", a + 1);
		scanf_s("%d", &A[a]);
	}

	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j <= i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
				for (int a = 0; a < n; a++)
				{
					printf("%d ", A[a]);
				}
				printf("\n");
			}
		}
	}
}
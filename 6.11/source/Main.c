#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[100];
	int i, j, tmp, n;
	printf("�п�J�}�C�j�p: ");
	scanf_s("%d", &n);
	printf("�п�J�ƧǼƾ�: \n");
	for (int a = 0; a < n; a++)
	{
		printf("��%d�ӼƦr: ", a + 1);
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
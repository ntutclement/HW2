#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double man, hrw, abc, dd,e,gg;
	int a,b,c,d,f;
	printf("��J�N�X: �g�z(1)���~�u(2)��Ī��u(3)�s�u(4)\n");
	scanf_s("%d", &a);

	while (a != -1) {
		switch (a) {
		case 1:
			{
				printf("�g�z�H��\n");
				printf("�g�~=$1000\n");
			}
			break;
		case 2:
			{
				printf("���~�u\n");
				printf("��J�C�g�u�@�ɼ�: ");
				scanf_s("%d", &b);
				if (b <= 40) {
					c = b * 10;
					printf("�~��=$%d\n", c);
				}
				if (b > 40) {
					c = 40 * 10 + (b - 40) * 15;
					printf("�~��=$%d\n", c);
				}
			}
			break;
		case 3:
			{
				printf("��Ī��u\n");
				printf("��J��g�P����B: ");
				scanf_s("%d", &d);
				e = 250 + d * 0.057;
				printf("�g�~=%.2lf\n", e);
			}
			break;
		case 4:
		    {
				printf("�s�u\n");
				printf("��J�C�g�Ͳ����: ");
				scanf_s("%d", &f);
				gg = f * 0.3;
				printf("�p�S=%.2lf\n", gg);
			}
			break;
		}
		printf("��J�N�X(1234)");
		scanf_s("%d", &a);
	}
}
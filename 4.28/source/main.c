#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double man, hrw, abc, dd,e,gg;
	int a,b,c,d,f;
	printf("輸入代碼: 經理(1)時薪工(2)抽傭金工(3)零工(4)\n");
	scanf_s("%d", &a);

	while (a != -1) {
		switch (a) {
		case 1:
			{
				printf("經理人員\n");
				printf("週薪=$1000\n");
			}
			break;
		case 2:
			{
				printf("時薪工\n");
				printf("輸入每週工作時數: ");
				scanf_s("%d", &b);
				if (b <= 40) {
					c = b * 10;
					printf("薪資=$%d\n", c);
				}
				if (b > 40) {
					c = 40 * 10 + (b - 40) * 15;
					printf("薪資=$%d\n", c);
				}
			}
			break;
		case 3:
			{
				printf("抽傭金工\n");
				printf("輸入當週銷售金額: ");
				scanf_s("%d", &d);
				e = 250 + d * 0.057;
				printf("週薪=%.2lf\n", e);
			}
			break;
		case 4:
		    {
				printf("零工\n");
				printf("輸入每週生產件數: ");
				scanf_s("%d", &f);
				gg = f * 0.3;
				printf("計酬=%.2lf\n", gg);
			}
			break;
		}
		printf("輸入代碼(1234)");
		scanf_s("%d", &a);
	}
}
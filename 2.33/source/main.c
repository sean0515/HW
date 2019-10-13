#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float Km;
	float gascash;
	float gasdis;
	float stop;
	float go;
	float total;

	printf("請依序輸入以下資訊，將為您計算您開車所需的花費\n一整天的總里程數(Km)\n汽油一公升多少錢\n平均一公升能行駛多少公里\n一天的停車費\n一天的通行費\n");
	scanf_s("%f%f%f%f%f", &Km, &gascash, &gasdis, &stop, &go);
	total = (Km * gascash / gasdis) + stop + go;
	printf("您開車的總花費為 %.2f 元", total);
	system("pause");
	return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float Km;
	float gascash;
	float gasdis;
	int stop;
	int go;
	int total;

	printf("�Ш̧ǿ�J�H�U��T�A�N���z�p��z�}���һݪ���O\n�@��Ѫ��`���{��(Km)\n�T�o�@���ɦh�ֿ�\n�����@���ɯ��p�h�֤���\n�@�Ѫ������O\n�@�Ѫ��q��O\n");
	scanf_s("%f%f%f%d%d", &Km, &gascash, &gasdis, &stop, &go);
	total = (Km*gascash / gasdis) + stop + go;
	printf("�A�}�����`��O��%d\n", total);
	system("pause");
	return 0;
}
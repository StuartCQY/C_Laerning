#include<stdio.h>	// Ԥ�����

int main()	//������
{
	int max(int x, int y, int z);
	int a, b, c, d;
	printf("������������(�Կո���ָ�)��");
	scanf_s("%d %d %d", &a, &b, &c);
	d = max(a, b, c);
	printf("max=%d\n", d);
	return 0;
}

/// <summary>
/// max�Խ�����
/// ���ܣ�������������������������
/// </summary>
/// <returns></returns>
int max(int x, int y, int z)
{
	int k;
	if (x > y && x > z)
		k = x;
	else if (y > x && y > z)
		k = y;
	else 
		k = z;
	return(k);

}




#include<stdio.h>
int main() {
	int n = 12;
	int temp1 = n;
	int binary[32];

	for (int i = 0; i < 32; i++)
	{
		while (temp1!=0)
		{
			if (n % 2 == 0) {
				binary[i] = 1;
			}
			else
			{
				binary[i] = 0;
			}
			temp1 = temp1 / 2;
		}
	}
	for (int i = 0; i < 32; i++)
	{
		printf("%d", binary[i]);
		return 0;
	}
}
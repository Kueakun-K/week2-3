#include<stdio.h>
int main() {
	int x, y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (x > 4 and y > 600)
	{
		printf("Promotion: Yes\n");
		printf("Price: %d Baht", y - (y / 10));
	}
	else if (x <= 0 or y<0)
	{
		printf("Error");
	}
	else if (x <= 4 or y <= 600)
	{
		printf("Promotion: No\n");
		printf("Price: %d Baht", y);
	}
	return 0;
}
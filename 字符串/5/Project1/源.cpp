#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
void sortStr(char(*n)[35])
{
	char* p1;
	char* pmin;
	char* p2;
	char temp[35];
	int i = 0, j;
	for (p1 = *n; p1 <= *(n + 9); p1 = *(n + i))
	{
		pmin = p1;
		j = i;
		for (p2 = *(n + i); p2 <= *(n + 9); p2 = *(n + j))
		{
			if (strcmp(pmin, p2) > 0)
			{
				pmin = p2;
			}if (strcmp(pmin, p2) < 0)
			{
				pmin = pmin;
			}
			j++;
		}
		strcpy_s(temp, pmin);
		strcpy_s(pmin,35, p1);
		strcpy_s(p1, 35,temp);
		i++;
	}
	return;
}
int main()
{
	char name[10][35];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%s", name[i], 35);
	}
	sortStr(name);
	for (int i = 0; i < 10; i++)
		printf("%s\n", name[i]);
	return 0;
}
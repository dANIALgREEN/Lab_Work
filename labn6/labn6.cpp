#include <stdio.h>
#include <string.h>

int main()
{
	int k=0;
	char temp;
	char s1[50] = "I want to deleate spaces";
	char s2[50] = "I want to add spaces";
	for (int i = 0; s1[i] != 0; ++i) {
		if (s1[i] != ' ') {
			printf_s("%c", s1[i]);
		}
		else if (s1[i] == ' ') {
			k++;
		}
	}
	printf_s("\n");
	for (int i = 0; i < k; ++i)
	{
		temp = s2[49];
		for (int j = 50 - 1; j > 0; j--)
			s2[j] = s2[j - 1];
		s2[0] = temp;
	}
	for (int i = 0; s2[i] < k; i++) {
		s2[i] = ' ';
	}
	printf_s("\n%s", s2);

}
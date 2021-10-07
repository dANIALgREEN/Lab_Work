#include <stdio.h> //Zelyuk

int main()
{
	const int N = 7;
	const int K = 6;
	int A[N] = { 1, 2, 3, 4, 5, 6, 7};
	int B[K] = { 2, 3, 4, 5, 6, 7 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < K; j++) {

			if (A[i + j]==B[j])
			{
				printf_s("%d%d", A[i + j], B[j]);
				printf_s("\n");
			}
			else {
				;
			}
		}
	}
	return 0;
}

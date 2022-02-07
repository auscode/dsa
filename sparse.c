#include <stdio.h>
int main()
{
	int sparsemarix[4][5]=
	{
		{0,0,6,0,9},
		{0,0,4,6,0},
		{0,0,0,0,0},
		{0,1,2,0,0},
	};
	int size = 0;
	for (int i = 0;i<4;i++){
		for (int j = 0;j<5;j++){
			if (sparsemarix[i][j] != 0){
				size++;
			}
		}
	}
	int compMatrix[3][size];
	int k =0;
	for (int i=0;i<4;i++){
		for (int j = 0; j<5; j++){
			if (sparsemarix[i][j] != 0){
				compMatrix[0][k] = i;
				compMatrix[1][k] = j;
				compMatrix[2][k] = sparsemarix[i][j];
				k++;
			}
		}
	}
	for (int i = 0; i<3; i++){
		for (int j = 0; j<size; j++){
			printf("%d",compMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}

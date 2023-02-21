#include <stdio.h>
#include <stdbool.h>

int isMagicSquare(int a[3][3])
{
	int i = 0, j = 0, n=3;
	int sumd1 = 0, sumd2=0;

	for (i = 0; i < n; i++){
		sumd1 += a[i][i];
		sumd2 += a[i][n-1-i];
	}

	if(sumd1!=sumd2)
		return 0;

	for (i = 0; i < n; i++) {

		int rowSum = 0, colSum = 0;
		for (j = 0; j < n; j++)
		{
			rowSum += a[i][j];
			colSum += a[j][i];
		}
		if (rowSum != colSum || colSum != sumd1)
			return 0;
	}
return 1;
}

int main()
{
    int a[3][3],i,j;
    printf("Enter the Elements of Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           scanf("%d",&a[i][j]);
        }
    }
     printf("\nThe Matrix Is:\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d  ",a[i][j]);
    }
    printf("\n");
}

	if (isMagicSquare(a))
		printf("\nThis Matrix is Magic Square Matrix");
	else
		printf("Not a magic Square");
getch();
	return 0;
}



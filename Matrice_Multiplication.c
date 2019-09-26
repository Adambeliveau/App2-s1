#include<stdio.h>


const int m=2;

void Multiplication_Matrice(int Matrice1[m][m], int Matrice2[m][m])
{
	int Matrice3[m][m];
    int somme_Multiplication;
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			somme_Multiplication=0;
			for(int k=0;k<m;k++)
			{
				somme_Multiplication += Matrice1[i][k] * Matrice2[k][j];
			}
			Matrice3[i][j] = somme_Multiplication;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d\t",Matrice3[i][j]);
		}
	printf("\n");
	}
}

int main()
{
	int Matrice_Multiplication1[m][m];
	int Matrice_Multiplication2[m][m];
	
	Matrice_Multiplication1[0][0] = 1;
	Matrice_Multiplication1[0][1] = 2;
	Matrice_Multiplication1[1][0] = 2;
	Matrice_Multiplication1[1][1] = 3;
	

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			Matrice_Multiplication2[i][j] = Matrice_Multiplication1[i][j];
		}
	}

	printf("\nMultiplication de matrices : \n");
	Multiplication_Matrice(Matrice_Multiplication1,Matrice_Multiplication2);
	
	return 0;
}

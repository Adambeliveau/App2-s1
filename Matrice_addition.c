#include<stdio.h>

const int n=3;
const int m=2;

void Addition_Matrice(int (*Matrice1)[m], int (*Matrice2)[m])
{
	int Matrice3[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			Matrice3[i][j] = Matrice1[i][j] + Matrice2[i][j];
		}
	}
	for(int i=0;i<n;i++)
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
	int Matrice_Addition1[n][m];
	int Matrice_Addition2[n][m];
	Matrice_Addition1[0][0]=1;
	Matrice_Addition1[1][0]=2;
	Matrice_Addition1[2][0]=3;
	Matrice_Addition1[0][1]=2;
	Matrice_Addition1[1][1]=3;
	Matrice_Addition1[2][1]=4;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			Matrice_Addition2[i][j]=Matrice_Addition1[i][j];
		}
	}
	
	printf("Addition de matrices : \n");
	Addition_Matrice(Matrice_Addition1,Matrice_Addition2);
	
	return 0;
}

#include<stdio.h>

const int nb_terme = 25;

float exposant(int puissance, float nombre)
{
    float total=1;
	for(int i=1;i<=puissance;i++)
	{
		total*=nombre;
	}
	return total;
}

float factoriel(int puissance_factoriel)
{
	float somme_factoriel=1;
	for(int i=1;i<=puissance_factoriel;i++)
	{
		somme_factoriel*=i;
	}
	return somme_factoriel;
}

float Calcul_Cosinus(float Radian)
{
	int y = 0;
	float x_puissance_y;
	float somme_factoriel;
	float cosinus;
	for(int i=1;i<nb_terme;i++)
	{
		if(i%2==0)
		{
			x_puissance_y = exposant(y, Radian)*-1;
			somme_factoriel = factoriel(y);
		}
		else
		{
			x_puissance_y = exposant(y, Radian);
			somme_factoriel = factoriel(y);
		}
		
		cosinus += x_puissance_y/somme_factoriel;
		y+=2;
	}
	return cosinus;
}

int main()
{
	float PI = 3.14159265;
	float valeur_sin_cos;
	float radian1;
	float radian2;
	float radian3;
	float radian4;
	
	radian1 = PI/2;
	radian2 = PI;
	radian3 = 3*PI/2;
	radian4 = 2*PI;

	printf("Calcul Cosinus : \n");
	valeur_sin_cos = Calcul_Cosinus(radian1);
	printf("\tvaleur du Cosinus de PI/2 : %f\n",valeur_sin_cos);
	printf("\tValeur theorique : 0\n\n");
	
	valeur_sin_cos = Calcul_Cosinus(radian2);
	printf("\tvaleur du Cosinus de PI : %f\n",valeur_sin_cos);
	printf("\tValeur theorique : -1\n\n");
	
	valeur_sin_cos = Calcul_Cosinus(radian3);
	printf("\tvaleur du Cosinus de 3PI/2 : %f\n",valeur_sin_cos);
	printf("\tValeur theorique : 0\n\n");
	
	valeur_sin_cos = Calcul_Cosinus(radian4);
	printf("\tvaleur du Cosinus de 2PI : %f\n",valeur_sin_cos);
	printf("\tValeur theorique : 1\n\n");
	
	return 0;
}


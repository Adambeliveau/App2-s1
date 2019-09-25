#include<stdio.h>

const int nb_terme = 10;

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
	
	radian1 = PI/2;
	radian2 = PI;

	printf("Calcul Cosinus : \n");
	valeur_sin_cos = Calcul_Cosinus(radian1);
	printf("\tvaleur du Cosinus de PI/2 : %f\n",valeur_sin_cos);
	valeur_sin_cos = Calcul_Cosinus(radian2);
	printf("\tvaleur du Cosinus de PI : %f\n\n",valeur_sin_cos);
}


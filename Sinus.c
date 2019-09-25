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
	float somme_factoriel = 1;
	for(int i=1;i<=puissance_factoriel;i++)
	{
		somme_factoriel*=i;
	}
	return somme_factoriel;
}

float Calcul_Sinus(float Radian)
{
	int y = 1;
	float x_puissance_y;
	float somme_factoriel;
	float sinus;
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
		sinus += x_puissance_y/somme_factoriel;
		y+=2;
	}
	return sinus;
}



int main()
{
	float PI = 3.14159265;
	float valeur_sin_cos;
	float radian1;
	float radian2;
	
	radian1 = PI/2;
	radian2 = PI;
	
	printf("Calcul Sinus : \n");
	valeur_sin_cos = Calcul_Sinus(radian1);
	printf("\tvaleur du Sinus de PI/2 : %f\n",valeur_sin_cos);
	
	valeur_sin_cos = Calcul_Sinus(radian2);
	printf("\tvaleur du Sinus de PI : %f\n\n",valeur_sin_cos);
	
	return 0;
}

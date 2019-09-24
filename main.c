#include<stdio.h>
#include<stdbool.h>

const int n=3;
const int m=2;
const int nb_terme = 5;


int Recherche_Carac(char[],char);
bool Detection_Palidrome(char[]);
float Calcul_Sinus(float);
float Calcul_Cosinus(float);
void Addition_Matrice(int[][],int[][],int [][]);
void Multiplication_Matrice(int,[][],int[][],int[][]);
float exposant(int, int);
float factoriel (int);


void main()
{
	int longueur_max_chaine_mots = 60;
	int indice_caractere_rechercher;
	char chaine_mots[longueur_max_chaine_mots];
	 
	
	
}
int Recherche_Carac(char chaine[],char caractere_rechercher)
{
	
	int size_of_chaine = sizeof(chaine)/sizeof(chaine[0]);
	
	for(int i=0;i<=size_of_chaine;i++)
	{
		if(chaine[i]==caractere_rechercher)
			return i;
		else
			return -1;
	}
}

bool Detection_Palidrome(char chaine[])
{
	int size_of_chaine = sizeof(chaine)/sizeof(chaine[0]);
	
	for(int i=0;i<(size_of_chaine/2)-(size_of_chaine%2);i++)
		{
			if(chaine[i]!=chaine[size_of_chaine-i])
				return false;
			else
				return true;
		}
	
}

float Calcul_Sinus(float Radian)
{
	int y = 1;
	int x_puissance_y;
	float sinus;
	for(int i=1;i<nb_terme;i++)
	{
		if(i%2==0)
		{
			x_puissance_y = exposant(y, radian);
		}
		else
		{
			x_puissance_y = exposant(y, radian)*-1;
		}
		
		sinus += x_puissance_y/;
	}
}

float Calcul_Cosinus(float Radian)
{
	int y = 0;
	int x_puissance_y;
	float cosinus;
	for(int i=1;i<nb_terme;i++)
	{
		if(i%2==0)
		{
			x_puissance_y = exposant(y, radian);
		}
		else
		{
			x_puissance_y = exposant(y, radian)*-1;
		}
		
		cosinus += x_puissance_y/;
	}
}

void Addition_Matrice(int Matrice1[], int Matrice2[], int Matrice3[])
{
	
}

void Multiplication_Matrice(int Matrice1[], int Matrice2[], int Matrice3[])
{
	
}

float exposant(int puissance, int nombre)
{
	for(int i=1;i<=puissance;i++)
	{
		nombre*=;
	}
	return nombre;
}
float factoriel(int puissance_factoriel)
{
	float somme_factoriel;
	for(int i=1;i<=puissance_factoriel;i++)
	{
		somme_factoriel*=i;
	}
	return somme_factoriel;
}








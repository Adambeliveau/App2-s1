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
	
}

float Calcul_Cosinus(float Radian)
{
	
}

void Addition_Matrice(int Matrice1[], int Matrice2[], int Matrice3[])
{
	
}

void Multiplication_Matrice(int Matrice1[], int Matrice2[], int Matrice3[])
{
	
}









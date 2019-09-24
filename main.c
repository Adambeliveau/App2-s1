#include<stdio.h>

int Recherche_Carac(char[],char);
int Detection_Palidrome();
float Calcul_Sinus();
float Calcul_Cosinus();
void Addition_Matrice();
void Multiplication_Matrice();


void main()
{
	int indice_caractere_rechercher;
	
	
	
}
int Recherche_Carac(char[] chaine,char caractere_rechercher)
{
	int size_of_chaine = sizeof(chaine)/sizeof(chaine[0]);
	
	for(int i=0;i<=size_of_chaine;i++)
	{
		if(chaine[i]==caractere_rechercher)
			return i;
		else
			return 666;
	}
}










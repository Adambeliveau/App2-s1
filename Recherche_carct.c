#include<stdio.h>

int Recherche_Carac(char chaine[60],char caractere_rechercher)
{
	int valeur_retourner;
	int size_of_chaine = 60;
	
	for(int i=0;i<=size_of_chaine;i++)
	{
		if(chaine[i]==caractere_rechercher)
			return i;
		else
			valeur_retourner = -1;
	}
	return valeur_retourner;
}

int main()
{
	
	char chaine_mots[60] = "allo le monde";
	char caractere_rechercher;
	int indice_caractere_rechercher;
	
	//chaine_mots[longueur_max_chaine_mots]="allo le monde";
	
	printf("Recherche de caractere : \n");
	caractere_rechercher='o';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots,caractere_rechercher);
	printf("\tindice du 'o' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 4\n\n");
	
	caractere_rechercher='e';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots,caractere_rechercher);
	printf("\tindice du 'e' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 6\n\n");
	
	caractere_rechercher='m';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots,caractere_rechercher);
	printf("\tindice du 'm' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 8\n\n");
	
	caractere_rechercher='u';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots,caractere_rechercher);
	printf("\tindice du 'u' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : -1\n\n");
}

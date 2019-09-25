#include<stdio.h>

int Recherche_Carac(char chaine[60],char caractere_rechercher)
{
	int valeur_retourner;
	int size_of_chaine = 60;
	
	for(int i=0;i<=size_of_chaine;i++)
	{
		if(chaine[i]==caractere_rechercher)
			return i+1;
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
	
	printf("Recherche de caractere : \n");
	printf("\nVoici la chaine de mot : %s\n",chaine_mots);
	caractere_rechercher='o';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots,caractere_rechercher);
	printf("\tindice du 'o' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 4\n\n");
	
	caractere_rechercher='e';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots,caractere_rechercher);
	printf("\tindice du 'e' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 7\n\n");
	
	caractere_rechercher='m';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots,caractere_rechercher);
	printf("\tindice du 'm' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 9\n\n");
	
	caractere_rechercher='u';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots,caractere_rechercher);
	printf("\tindice du 'u' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : -1\n\n");
	
	char chaine_mots1[60] = "fardeusch mon amis fidele";
	
	printf("\nVoici la chaine de mot : %s\n",chaine_mots1);
	
	caractere_rechercher='o';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots1,caractere_rechercher);
	printf("\tindice du 'o' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 12\n\n");
	
	caractere_rechercher='e';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots1,caractere_rechercher);
	printf("\tindice du 'e' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 5\n\n");
	
	caractere_rechercher='m';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots1,caractere_rechercher);
	printf("\tindice du 'm' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 11\n\n");
	
	caractere_rechercher='u';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots1,caractere_rechercher);
	printf("\tindice du 'u' : %d\n",indice_caractere_rechercher);
	printf("\tValeur theorique : 6\n\n");
	
	
	
	return 0;
}

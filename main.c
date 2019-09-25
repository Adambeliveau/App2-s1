#include<stdio.h>
#include<stdbool.h>

const int n=3;
const int m=2;
const int nb_terme = 5;


int Recherche_Carac(char[],char);
bool Detection_Palidrome(char[]);
float Calcul_Sinus(float);
float Calcul_Cosinus(float);
void Addition_Matrice(int[][],int[][]);
void Multiplication_Matrice(int,[][],int[][]);
float exposant(int, int);
float factoriel (int);


void main()
{
	int longueur_max_chaine_mots = 60;
	int Buffer_mot = 10;
	float PI = 3.14159265;
	char caractere_rechercher;
	int indice_caractere_rechercher;
	char chaine_mots[longueur_max_chaine_mots];
	bool isPalindrome;
	char palindrome[Buffer_mot];
	char faux_palindrome1[Buffer_mot];
	char faux_palindrome2[Buffer_mot];
	char faux_palindrome3[Buffer_mot];
	float valeur_sin_cos;
	float radian1;
	float radian2;
	int Matrice_Addition1[n][m];
	int Matrice_Addition2[n][m];
	int Matrice_Multiplication1[m][m];
	int Matrice_Multiplication2[m][m];
	
	chaine_mots[]="allo le monde";
	palindrome[]="laval";
	faux_palindrome1[]="Laval";
	faux_palindrome2[]="làval";
	faux_palindrome3[]="genie";
	radian1 = PI/2;
	radian2 = PI;
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
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			Matrice_Multiplication1[i][j]=Matrice_Addition1[i][j];
			Matrice_Multiplication2[i][j]=Matrice_Addition1[i][j];
		}
	}
	
	printf("Recherche de caractere : \n");
	caractere_rechercher='o';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots[],caractere_rechercher);
	printf("\tindice du 'o' : %d\n",&indice_caractere_rechercher);
	printf("\t\tValeur theorique : 4\n");
	
	caractere_rechercher='e';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots[],caractere_rechercher);
	printf("\tindice du 'e' : %d\n",&indice_caractere_rechercher);
	printf("\t\tValeur theorique : 6\n");
	
	caractere_rechercher='m';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots[],caractere_rechercher);
	printf("\tindice du 'm' : %d\n",&indice_caractere_rechercher);
	printf("\t\tValeur theorique : 7\n");
	
	caractere_rechercher='u';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots[],caractere_rechercher);
	printf("\tindice du 'u' : %d\n",&indice_caractere_rechercher);
	printf("\t\tValeur theorique : -1\n\n");
	
	printf("Detection de palindrome: \n")
	isPalindrome = Detection_Palidrome(palindrome[]);
	if(isPalindrome)
	printf("\t%c est un palindrome\n",&palindrome[]);
	else
	printf("\t%c n'est pas un palindrome\n",&faux_palindrome1[]);
	
	isPalindrome = Detection_Palidrome(faux_palindrome1[]);
	if(isPalindrome)
	printf("\t%c est un palindrome\n",&faux_palindrome1[]);
	else
	printf("\t%c n'est pas un palindrome\n",&faux_palindrome1[]);
	
	isPalindrome = Detection_Palidrome(faux_palindrome2[]);
	if(isPalindrome)
	printf("\t%c est un palindrome\n",&faux_palindrome2[]);
	else
	printf("\t%c n'est pas un palindrome\n",&faux_palindrome2[]);
	
	isPalindrome = Detection_Palidrome(faux_palindrome3[]);
	if(isPalindrome)
	printf("\t%c est un palindrome\n\n",&faux_palindrome3[]);
	else
	printf("\t%c n'est pas un palindrome\n\n",&faux_palindrome3[]);
	
	printf("Calcul Sinus : \n");
	valeur_sin_cos = Calcul_Sinus(radian1);
	printf("\tvaleur du Sinus de PI/2 : %f\n",valeur_sin_cos);
	
	valeur_sin_cos = Calcul_Sinus(radian2);
	printf("\tvaleur du Sinus de PI : %f\n\n",valeur_sin_cos);
	
	printf("Calcul Cosinus : \n");
	valeur_sin_cos = Calcul_Cosinus(radian1);
	printf("\tvaleur du Cosinus de PI/2 : %f\n",valeur_sin_cos);
	
	valeur_sin_cos = Calcul_Cosinus(radian2);
	printf("\tvaleur du Cosinus de PI : %f\n\n",valeur_sin_cos);
	
	printf("Addition de matrices : \n");
	Addition_Matrice(Matrice_Addition1[][],Matrice_Addition2[][]);
	
	printf("\nMultiplication de matrices : \n");
	Multiplication_Matrice(Matrice_Multiplication1[][],Matrice_Multiplication2[][]);
	
	return 0;
	
	
	
	
	
	
	 
	
	
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

void Addition_Matrice(int Matrice1[][], int Matrice2[][])
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

void Multiplication_Matrice(int Matrice1[][], int Matrice2[][])
{
	int Matrice3[m][m];
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<m;k++)
			{
				somme_Multiplication = Matrice1[i][k] * Matrice2[k][j];
			}
			Matrice3[i][j] = somme_Multiplication;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d\t"Matrice3[i][j]);
		}
	printf("\n");
	}
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








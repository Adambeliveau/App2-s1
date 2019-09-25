#include<stdio.h>
#include<stdbool.h>

#define n 3
#define m 2
const int nb_terme = 5;


int Recherche_Carac(char[60],char);
bool Detection_Palidrome(char[25]);
float Calcul_Sinus(float);
float Calcul_Cosinus(float);
void Addition_Matrice(int(*)[m],int(*)[m]);
void Multiplication_Matrice(int[m][m],int[m][m]);
float exposant(int, int);
float factoriel (int);


int main()
{
	int longueur_max_chaine_mots = 60;
	int Buffer_mot = 10;
	float PI = 3.14159265;
	char caractere_rechercher;
	int indice_caractere_rechercher;
	char *chaine_mots[longueur_max_chaine_mots];
	bool isPalindrome;
	char *palindrome[Buffer_mot];
	char *faux_palindrome1[Buffer_mot];
	char *faux_palindrome2[Buffer_mot];
	char *faux_palindrome3[Buffer_mot];
	float valeur_sin_cos;
	float radian1;
	float radian2;
	int Matrice_Addition1[n][m];
	int Matrice_Addition2[n][m];
	int Matrice_Multiplication1[m][m];
	int Matrice_Multiplication2[m][m];
	
	chaine_mots[longueur_max_chaine_mots]="allo le monde";
	palindrome[Buffer_mot]="laval";
	faux_palindrome1[Buffer_mot]="Laval";
	faux_palindrome2[Buffer_mot]="làval";
	faux_palindrome3[Buffer_mot]="genie";
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
	indice_caractere_rechercher = Recherche_Carac(chaine_mots[longueur_max_chaine_mots],caractere_rechercher);
	printf("\tindice du 'o' : %d\n",indice_caractere_rechercher);
	printf("\t\tValeur theorique : 4\n");
	
	caractere_rechercher='e';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots[longueur_max_chaine_mots],caractere_rechercher);
	printf("\tindice du 'e' : %d\n",indice_caractere_rechercher);
	printf("\t\tValeur theorique : 6\n");
	
	caractere_rechercher='m';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots[longueur_max_chaine_mots],caractere_rechercher);
	printf("\tindice du 'm' : %d\n",indice_caractere_rechercher);
	printf("\t\tValeur theorique : 7\n");
	
	caractere_rechercher='u';
	indice_caractere_rechercher = Recherche_Carac(chaine_mots[longueur_max_chaine_mots],caractere_rechercher);
	printf("\tindice du 'u' : %d\n",indice_caractere_rechercher);
	printf("\t\tValeur theorique : -1\n\n");
	
	printf("Detection de palindrome: \n");
	isPalindrome = Detection_Palidrome(palindrome[Buffer_mot]);
	if(isPalindrome)
	printf("\t%s est un palindrome\n",palindrome[Buffer_mot]);
	else
	printf("\t%s n'est pas un palindrome\n",faux_palindrome1[Buffer_mot]);
	
	isPalindrome = Detection_Palidrome(faux_palindrome1[Buffer_mot]);
	if(isPalindrome)
	printf("\t%s est un palindrome\n",faux_palindrome1[Buffer_mot]);
	else
	printf("\t%s n'est pas un palindrome\n",faux_palindrome1[Buffer_mot]);
	
	isPalindrome = Detection_Palidrome(faux_palindrome2[Buffer_mot]);
	if(isPalindrome)
	printf("\t%s est un palindrome\n",faux_palindrome2[Buffer_mot]);
	else
	printf("\t%s n'est pas un palindrome\n",faux_palindrome2[Buffer_mot]);
	
	isPalindrome = Detection_Palidrome(faux_palindrome3[Buffer_mot]);
	if(isPalindrome)
	printf("\t%s est un palindrome\n\n",faux_palindrome3[Buffer_mot]);
	else
	printf("\t%s n'est pas un palindrome\n\n",faux_palindrome3[Buffer_mot]);
	
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
	Addition_Matrice(Matrice_Addition1,Matrice_Addition2);
	
	printf("\nMultiplication de matrices : \n");
	Multiplication_Matrice(Matrice_Multiplication1,Matrice_Multiplication2);
	
	return 0;
	
	
	
	
	
	
	 
	
	
}
int Recherche_Carac(char chaine[60],char caractere_rechercher)
{
	
	int size_of_chaine = sizeof(chaine[60])/sizeof(chaine[0]);
	
	for(int i=0;i<=size_of_chaine;i++)
	{
		if(chaine[i]==caractere_rechercher)
			return i;
		else
			return -1;
	}
	return 0;
}

bool Detection_Palidrome(char chaine[25])
{
	int size_of_chaine = sizeof(chaine[25])/sizeof(chaine[0]);
	
	for(int i=0;i<(size_of_chaine/2)-(size_of_chaine%2);i++)
		{
			if(chaine[i]!=chaine[size_of_chaine-i])
				return false;
			else
				return true;
		}
	return 0;
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
			x_puissance_y = exposant(y, Radian);
		}
		else
		{
			x_puissance_y = exposant(y, Radian)*-1;
		}
		
		sinus += x_puissance_y;
	}
	return sinus;
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
			x_puissance_y = exposant(y, Radian);
		}
		else
		{
			x_puissance_y = exposant(y, Radian)*-1;
		}
		
		cosinus += x_puissance_y;
	}
	return cosinus;
}

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

void Multiplication_Matrice(int Matrice1[m][m], int Matrice2[m][m])
{
	int Matrice3[m][m];
    int somme_Multiplication;
	
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
			printf("%d\t",Matrice3[i][j]);
		}
	printf("\n");
	}
}

float exposant(int puissance, int nombre)
{
    int total=1;
	for(int i=1;i<=puissance;i++)
	{
		total*=nombre;
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








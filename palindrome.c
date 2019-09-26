#include<stdio.h>


int Detection_Palidrome(char chaine[30])
{
	int size_of_chaine = 30;
	int ispalind;
	
	int longueur_chaine_courrante=-1;
	
	for(int i=0;i<size_of_chaine;i++)
	{
		if(chaine[i]!='\0')
		{
			longueur_chaine_courrante++;
		}
		else
		{
			break;
		}
	}
	
	for(int i=0;i<(longueur_chaine_courrante/2)-(longueur_chaine_courrante%2);i++)
		{
			if(chaine[i]!=chaine[longueur_chaine_courrante-i])
				return -1;
			else
				ispalind = 1;
		}
	return ispalind;
}

int main()
{
	int isPalindrome;
	char palindrome[30] = "laval";
	char palindrome1[30] = "evacaniseebeesinacave";
	char faux_palindrome1[30] = "Laval";
	char faux_palindrome2[30] = "ève";
	char faux_palindrome3[30] = "genie";
	
	printf("Detection de palindrome: \n");
	isPalindrome = Detection_Palidrome(palindrome);
	if(isPalindrome==1)
	printf("\t%s est un palindrome\n",palindrome);
	else
	printf("\t%s n'est pas un palindrome\n",palindrome);
	printf("\tvaleur thorique : laval est un palindrome\n\n");
	
	isPalindrome = Detection_Palidrome(palindrome1);
	if(isPalindrome==1)
	printf("\t%s est un palindrome\n",palindrome1);
	else
	printf("\t%s n'est pas un palindrome\n",palindrome1);
	printf("\tvaleur thorique : evacaniseebeesinacave est un palindrome\n\n");
	
	isPalindrome = Detection_Palidrome(faux_palindrome1);
	if(isPalindrome==1)
	printf("\t%s est un palindrome\n",faux_palindrome1);
	else
	printf("\t%s n'est pas un palindrome\n",faux_palindrome1);
	printf("\t valeur theorique : Laval n'est pas un palindrome\n\n");
	
	isPalindrome = Detection_Palidrome(faux_palindrome2);
	if(isPalindrome==1)
	printf("\t%s est un palindrome\n",faux_palindrome2);
	else
	printf("\t%s n'est pas un palindrome\n",faux_palindrome2);
	printf("\t valeur theorique : ève n'est pas un palindrome\n\n");
	
	isPalindrome = Detection_Palidrome(faux_palindrome3);
	if(isPalindrome==1)
	printf("\t%s est un palindrome\n",faux_palindrome3);
	else
	printf("\t%s n'est pas un palindrome\n",faux_palindrome3);
	printf("\t valeur theorique : genie n'est pas un palindrome\n\n");
	
	return 0;
}

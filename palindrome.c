#include<stdio.h>
#include<stdbool.h>

bool Detection_Palidrome(char chaine[10])
{
	int size_of_chaine = 10;
	bool ispalind;
	
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
	
	for(int i=0;i<(size_of_chaine/2)-(size_of_chaine%2);i++)
		{
			if(chaine[i]!=chaine[longueur_chaine_courrante-i])
				ispalind = false;
			else
				ispalind = true;
		}
	return ispalind;
}

int main()
{
	
	bool isPalindrome;
	char palindrome[10] = "laval";
	char faux_palindrome1[10] = "Laval";
	char faux_palindrome2[10] = "làval";
	char faux_palindrome3[10] = "genie";
	
	printf("Detection de palindrome: \n");
	isPalindrome = Detection_Palidrome(palindrome);
	if(isPalindrome==true)
	printf("\t%s est un palindrome\n",palindrome);
	else
	printf("\t%s n'est pas un palindrome\n",palindrome);
	printf("\tvaleur thorique : laval est un palindrome\n\n");
	
	isPalindrome = Detection_Palidrome(faux_palindrome1);
	if(isPalindrome==true)
	printf("\t%s est un palindrome\n",faux_palindrome1);
	else
	printf("\t%s n'est pas un palindrome\n",faux_palindrome1);
	printf("\t valeur theorique : Laval n'est pas un palindrome\n\n");
	
	isPalindrome = Detection_Palidrome(faux_palindrome2);
	if(isPalindrome==true)
	printf("\t%s est un palindrome\n",faux_palindrome2);
	else
	printf("\t%s n'est pas un palindrome\n",faux_palindrome2);
	printf("\t valeur theorique : làval n'est pas un palindrome\n\n");
	
	isPalindrome = Detection_Palidrome(faux_palindrome3);
	if(isPalindrome==true)
	printf("\t%s est un palindrome\n\n",faux_palindrome3);
	else
	printf("\t%s n'est pas un palindrome\n\n",faux_palindrome3);
	printf("\t valeur theorique : genie n'est pas un palindrome\n\n");
}

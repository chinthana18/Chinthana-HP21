/*program to check if a given character is a vowel or not*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a char\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
     printf("it is a vowel of lower case");
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
     printf("it is a vowel of upper case");
    } 
    else 
    {
        printf("it is not vowel");
    }
    return 0;
}

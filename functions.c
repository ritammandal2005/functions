#include<stdio.h>
void namaste();
void bonjour();
int main()
{
    printf("Enter i for india & f for french :");
    char ch;
    scanf("%c",&ch);
    if(ch =='i') {
        namaste();
    }
    else {
    bonjour();
    }
 
 return 0;
}

void namaste() {
    printf("Namaste \n");
}

void bonjour() {
    printf("Bonjour \n");
}
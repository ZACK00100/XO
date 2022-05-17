#include <stdio.h>
#include <stdlib.h>
typedef int bool; // définition du type booléen,
#define false 0 /* affectation des valeurs conventionnelles*/,
#define true 1.
int main()
{
    char Joueur1[10];
    char Joueur2[10];
    int i, j, LimitCase;
    char PL[9] = {"123456789"};
    char Position;
    char X = 'X';
    char O = 'O';
    char Switch;
    bool Condition = 0, Gagnant;

    printf("entrer votre Prenom Joueur X : ");
    scanf("%s", &Joueur1);
    printf("entrer votre Prenom Joueur O : ");
    scanf("%s", &Joueur2);

    // le premiere presentation du tableau
    for (i = 0; i < 9; i++)
    {
        printf("|%c|", PL[i]);
        if (i == 2 || i == 5)
        {
            printf("\n");
        }
    }
    printf("\n");
    for (LimitCase = 1; LimitCase < 10; LimitCase++)
    {
        printf("\nle tour du jeueur %c \n", X);
        do
        {
            printf("Entrer la position : ");
            scanf("%c", &Position);
            for (i = 0; i < 9; i++)
            {
                if (PL[i] != X)
                {
                    if (PL[i] == Position)
                    {
                        Condition = 1;
                        PL[i] = X;
                    }
                }
            }
        } while (Condition != 1);
        Condition = 0;

        printf("\n");

        for (i = 0; i < 9; i++)
        {
            printf("|%c|", PL[i]);
            if (i == 2 || i == 5)
            {
                printf("\n");
            }
        }
        Switch = X;
        X = O;
        O = Switch;
        printf("\n");
        if (PL[0] == 'X' && PL[1] == 'X' && PL[2] == 'X')
        {
            printf("le joueur X gagne");
            Gagnant = 1;
        }
        else if (PL[0] == 'X' && PL[3] == 'X' && PL[6] == 'X')
        {
            printf("le joueur X gagne");
            LimitCase = 9;
            Gagnant = 1;
        }
        else if (PL[6] == 'X' && PL[7] == 'X' && PL[8] == 'X')
        {
            printf("le joueur X gagne");
            LimitCase = 9;
            Gagnant = 1;
        }
        else if (PL[8] == 'X' && PL[5] == 'X' && PL[2] == 'X')
        {
            printf("le joueur X gagne");
            LimitCase = 9;
            Gagnant = 1;
        }
        else if (PL[0] == 'X' && PL[4] == 'X' && PL[8] == 'X')
        {
            printf("le joueur X gagne");
            LimitCase = 9;
            Gagnant = 1;
        }
        else if (PL[2] == 'X' && PL[4] == 'X' && PL[6] == 'X')
        {
            printf("le joueur X gagne");
            LimitCase = 9;
            Gagnant = 1;
        }
        else if (PL[0] == 'O' && PL[1] == 'O' && PL[2] == 'O')
        {
            printf("le joueur O gagne");
            LimitCase = 9;
            Gagnant = 0;
        }
        else if (PL[0] == 'O' && PL[3] == 'O' && PL[6] == 'O')
        {
            printf("le joueur O gagne");
            LimitCase = 9;
            Gagnant = 0;
        }
        else if (PL[6] == 'O' && PL[7] == 'O' && PL[8] == 'O')
        {
            printf("le joueur O gagne");
            LimitCase = 9;
            Gagnant = 0;
        }
        else if (PL[8] == 'O' && PL[5] == 'X' && PL[2] == 'O')
        {
            printf("le joueur O gagne");
            LimitCase = 9;
            Gagnant = 0;
        }
        else if (PL[0] == 'O' && PL[4] == 'X' && PL[8] == 'O')
        {
            printf("le joueur O gagne");
            LimitCase = 9;
            Gagnant = 0;
        }
        else if (PL[2] == 'O' && PL[4] == 'X' && PL[6] == 'O')
        {
            printf("le joueur O gagne");
            LimitCase = 9;
            Gagnant = 0;
        }
    }
    printf("\n");
    if (Gagnant == 1)
    {
        printf("%s Gagne!", Joueur1);
    }
    else if (Gagnant = 0)
    {
        printf("%s Gagne!", Joueur2);
    }
    else
    {
        printf("Partie terminee");
    }
}
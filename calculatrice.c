#include <stdio.h>
#include <math.h>  // pour la fonction pow

int main()
{
    char reponse; // pour O/N
    float A, B;
    int operation;

    do {
        printf("---- Calculatrice : MENU ----\n");
        printf("1 - Addition.\n");
        printf("2 - Soustraction.\n");
        printf("3 - Multiplication.\n");
        printf("4 - Division.\n");
        printf("5 - Reste d'une division entière.\n");
        printf("6 - Puissance.\n");

        printf("Saisir le premier terme : ");
        scanf("%f", &A);

        printf("Saisir le deuxième terme : ");
        scanf("%f", &B);

        printf("Quelle opération veux-tu effectuer ? (1 à 6) : ");
        scanf("%d", &operation);

        switch(operation) {
            case 1:
                printf("Le résultat est %.2f\n", A + B);
                break;
            case 2:
                printf("Le résultat est %.2f\n", A - B);
                break;
            case 3:
                printf("Le résultat est %.2f\n", A * B);
                break;
            case 4:
                if (B != 0)
                    printf("Le résultat est %.2f\n", A / B);
                else
                    printf("Division impossible (division par zéro)\n");
                break;
            case 5:
                printf("Le résultat est %d\n", (int)A % (int)B);
                break;
            case 6:
                printf("Le résultat est %.2f\n", pow(A, B));
                break;
            default:
                printf("Opération inconnue !\n");
        }

        printf("Veux-tu effectuer un autre calcul ? (O/N) : ");
        scanf(" %c", &reponse);  // espace avant %c pour ignorer les sauts de ligne

    } while(reponse != 'N' && reponse != 'n');

    return 0;
}

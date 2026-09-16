#include <stdio.h>

int main() {
    // Mercredi
    // Exercice 1 : afficher du texte
    printf("Bonjour !\n");

    // Exercice 2 : lire le prénom et afficher
    char prenom[50];
    printf("Quel est ton prénom ? ");
    scanf("%49s", prenom);
    printf("Bonjour %s\n", prenom);

    // Exercice 3 : calculs simples
    int a = 5, b = 3;
    printf("Addition: %d\n", a + b);
    printf("Soustraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %.2f\n", (float)a / b);

    // Jeudi
    // Boucle for : afficher les nombres pairs de 1 à 20
    for (int i = 2; i <= 20; i += 2) {
        printf("%d\n", i);
    }

    // Boucle while : demander un nombre >0
    int nombre = 0;
    while (nombre <= 0) {
        printf("Entrez un nombre >0 : ");
        scanf("%d", &nombre);
    }

    // Vendredi
    // Condition if/else : positif, nul ou négatif
    int x;
    printf("Entrez un nombre : ");
    scanf("%d", &x);
    if (x > 0) printf("Positif\n");
    else if (x == 0) printf("Nul\n");
    else printf("Negatif\n");

    // Mini-exercice : carré de 5 étoiles
    int taille = 5;
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Samedi et Dimanche
    // Exemple : carré de taille choisie
    printf("Entrez une taille pour le carré : ");
    scanf("%d", &taille);
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

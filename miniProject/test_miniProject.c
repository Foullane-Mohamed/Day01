#include <stdio.h>
#include <string.h>

#define MAX_LIVRES 100

// Structure pour représenter un livre
typedef struct {
    char titre[100];
    char auteur[100];
    float prix;
    int quantite;
} Livre;

// Prototypes des fonctions
void ajouterLivre(Livre livres[], int compteur);
void afficherLivres(Livre livres[], int compteur);
int trouverLivreParTitre(Livre livres[], int compteur, char titre[]);
void mettreAJourQuantiteLivre(Livre livres[], int compteur);
void supprimerLivre(Livre livres[], int compteur);
void afficherTotalLivresEnStock(Livre livres[], int compteur);

int main() {
    Livre livres[MAX_LIVRES];
    int compteur = 0;
    int choix;

    do {
        printf("\n--- Système de Gestion de Stock ---\n");
        printf("1. Ajouter un Livre\n");
        printf("2. Afficher Tous les Livres\n");
        printf("3. Mettre à Jour la Quantité d'un Livre\n");
        printf("4. Supprimer un Livre\n");
        printf("5. Afficher le Nombre Total de Livres en Stock\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                if (compteur < MAX_LIVRES) {
                    ajouterLivre(livres, compteur);
                    compteur++;
                } else {
                    printf("Le stock est plein !\n");
                }
                break;
            case 2:
                afficherLivres(livres, compteur);
                break;
            case 3:
                mettreAJourQuantiteLivre(livres, compteur);
                break;
            case 4:
                supprimerLivre(livres, compteur);
                compteur--;  // Décrémentation du compteur après suppression
                break;
            case 5:
                afficherTotalLivresEnStock(livres, compteur);
                break;
            case 6:
                printf("Fermeture du programme...\n");
                break;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
        }
    } while (choix != 6);

    return 0;
}

// Fonction pour ajouter un livre au stock
void ajouterLivre(Livre livres[], int compteur) {
    printf("Entrez le titre : ");
    scanf(" %[^\n]", livres[compteur].titre);
    printf("Entrez l'auteur : ");
    scanf(" %[^\n]", livres[compteur].auteur);
    printf("Entrez le prix : ");
    scanf("%f", &livres[compteur].prix);
    printf("Entrez la quantité : ");
    scanf("%d", &livres[compteur].quantite);
    printf("Livre ajouté avec succès !\n");
}

// Fonction pour afficher tous les livres
void afficherLivres(Livre livres[], int compteur) {
    if (compteur == 0) {
        printf("Aucun livre disponible.\n");
        return;
    }
    for (int i = 0; i < compteur; i++) {
        printf("Livre %d:\n", i + 1);
        printf("  Titre: %s\n", livres[i].titre);
        printf("  Auteur: %s\n", livres[i].auteur);
        printf("  Prix: %.2f\n", livres[i].prix);
        printf("  Quantité: %d\n", livres[i].quantite);
    }
}

// Fonction pour trouver un livre par titre
int trouverLivreParTitre(Livre livres[], int compteur, char titre[]) {
    for (int i = 0; i < compteur; i++) {
        if (strcmp(livres[i].titre, titre) == 0) {
            return i;
        }
    }
    return -1;
}

// Fonction pour mettre à jour la quantité d'un livre
void mettreAJourQuantiteLivre(Livre livres[], int compteur) {
    char titre[100];
    printf("Entrez le titre du livre : ");
    scanf(" %[^\n]", titre);

    int index = trouverLivreParTitre(livres, compteur, titre);
    if (index != -1) {
        printf("Entrez la nouvelle quantité : ");
        scanf("%d", &livres[index].quantite);
        printf("Quantité mise à jour avec succès !\n");
    } else {
        printf("Livre non trouvé.\n");
    }
}

// Fonction pour supprimer un livre
void supprimerLivre(Livre livres[], int compteur) {
    char titre[100];
    printf("Entrez le titre du livre : ");
    scanf(" %[^\n]", titre);

    int index = trouverLivreParTitre(livres, compteur, titre);
    if (index != -1) {
        for (int i = index; i < compteur - 1; i++) {
            livres[i] = livres[i + 1];
        }
        printf("Livre supprimé avec succès !\n");
    } else {
        printf("Livre non trouvé.\n");
    }
}

// Fonction pour afficher le nombre total de livres en stock
void afficherTotalLivresEnStock(Livre livres[], int compteur) {
    int total = 0;
    for (int i = 0; i < compteur; i++) {
        total += livres[i].quantite;
    }
    printf("Nombre total de livres en stock : %d\n", total);
}

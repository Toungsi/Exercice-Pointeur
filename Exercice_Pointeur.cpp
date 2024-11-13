#include <iostream>
#include "Exercice_Pointeur.h"

// Fonction Longueur d'une chaîne de caratères

int longueurChaine(const char* chaine) {
    int longueur = 0;
    while (chaine[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

// Fonction Copie de chîane de caratères

void copierChaine(const char* source, char* destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; //
}

// Fonction Concaténation de chîane


void concatenerChaines(char* chaine1, const char* chaine2) {
    int i = 0;
    while (chaine1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (chaine2[j] != '\0') {
        chaine1[i] = chaine2[j];
        i++;
        j++;
    }
    chaine1[i] = '\0';
}

// Fonction Comparaison de chaînes

int comparerChaines(const char* chaine1, const char* chaine2) {
    int i = 0;
    while (chaine1[i] != '\0' && chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            return chaine1[i] - chaine2[i];
        }
        i++;
    }
    return chaine1[i] - chaine2[i];
}

// Fonction Recherche de caractère 

const char* rechercherCaractere(const char* chaine, char caractere) {
    int i = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] == caractere) {
            return &chaine[i];
        }
        i++;
    }
    return nullptr;
}

// Fonction Inversion de chaîne

void inverse(char* chaine) {
    int debut = 0;
    int fin = 0;
    while (chaine[fin] != '\0') {
        fin++;
    }
    fin--;

    while (debut < fin) {
        char temp = chaine[debut];
        chaine[debut] = chaine[fin];
        chaine[fin] = temp;
        debut++;
        fin--;
    }
}

// Fonction Conversion majuscule/minuscule

void to_upper(char* chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = chaine[i] - ('a' - 'A'); 
        }
        i++;
    }
}

void to_lower(char* chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
            chaine[i] = chaine[i] + ('a' - 'A');
        }
        i++;
    }
}

// Fonction Trouver un mot dans une phrase

const char* cherche_mot(const char* phrase, const char* mot) {
    while (*phrase != '\0') {
        const char* p = phrase;
        const char* m = mot;

        while (*p == *m && *m != '\0') {
            p++;
            m++;
        }

        if (*m == '\0') {
            return phrase;
        }

        phrase++;
    }
    return nullptr;
}


// Exercices Avancé

// Fonction Extraction de la sous chaîne

void sous_chaine(const char *source, char *dest, int debut, int longueur) {
    int i;
    for (i = 0; i < longueur && source[debut + i] != '\0'; i++) {
        dest[i] = source[debut + i];
    }
    dest[i] = '\0';
}

// Fonction Suppression de caractère

void supprime_caractere(char *chaine, char caractere) {
    int i = 0, j = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] != caractere) {
            chaine[j++] = chaine[i];
        }
        i++;
    }
    chaine[j] = '\0';
}

// Fonction Compter les mots dans une phrase

int compte_mots(const char *phrase) {
    int compteur = 0;
    bool dans_mot = false;

    while (*phrase != '\0') {
        if (*phrase != ' ' && !dans_mot) {
            dans_mot = true;
            compteur++;
        } else if (*phrase == ' ') {
            dans_mot = false;
        }
        phrase++;
    }
    return compteur;
}

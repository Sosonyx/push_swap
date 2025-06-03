push_swap
Projet 42 – trier une pile d’entiers avec un nombre minimal d’instructions.
Objectif

Écrire un programme qui trie une liste d’entiers en utilisant uniquement un nombre limité d’instructions prédéfinies (push, swap, rotate, reverse rotate) sur deux piles, tout en optimisant le nombre total d’opérations effectuées.
Fonctions principales

    **main(int argc, char argv) :

        Fait le parsing des arguments (vérification, conversion, détection d’erreurs) et initialise la pile principale.

        Lance l’algorithme de tri.

    **parse_args(int argc, char **argv, t_node lst_a) :

        Analyse les arguments passés en ligne de commande, vérifie leur validité (uniques, numériques), et remplit la pile lst_a.

    **sort_3(t_node lst_a) :

        Trie une pile de 3 éléments de manière optimale avec un minimum d’instructions.

    **push_two_largest_to_b(t_node **lst_a, t_node lst_b) :

        Sélectionne et pousse les deux plus grands éléments de la pile a vers la pile b.

    **sort_5(t_node **lst_a, t_node lst_b) :

        Combine push_two_largest_to_b et sort_3 pour trier jusqu’à 5 éléments efficacement.

    **algo(t_node **lst_a, t_node lst_b) :

        Algorithme principal qui, selon la taille de la pile, applique la méthode adaptée (ex: tri par chunks pour les grandes piles).

        Gère la logique globale du tri en combinant les différentes fonctions d’instruction et de gestion.

Raisonnement et Algorithme

    Le programme reçoit en entrée une liste d’entiers à trier.

    Il parse les arguments et stocke les éléments dans une pile a (liste chaînée).

    Pour les petites listes (3 à 5 éléments), on utilise des fonctions spécifiques (sort_3, sort_5) avec des séquences d’instructions optimisées.

    Pour les listes plus grandes, on découpe le tri en plusieurs phases :

        Indexation : chaque élément reçoit un sorted_index correspondant à sa position triée.

        Tri par chunks : on divise la pile en segments ("chunks") pour déplacer progressivement les éléments de a vers b dans l’ordre partiel.

        On pousse puis on récupère les éléments entre a et b en utilisant les instructions push, rotate, swap pour minimiser les déplacements.

    L’algorithme vise à limiter le nombre d’opérations en exploitant la position des éléments dans la pile, les coûts de déplacement, et en choisissant la meilleure opération à chaque étape.

Parsing des éléments

    Les arguments sont analysés pour :

        S’assurer qu’ils représentent des entiers valides (pas de caractères invalides).

        Vérifier qu’aucun doublon n’existe.

        Convertir les strings en entiers et les stocker dans une structure t_node (liste chaînée).

    En cas d’erreur, le programme affiche un message et termine proprement.

Fichiers

    srcs/ – Code source du programme :

        Tri, instructions, parsing, utils, etc.

    includes/ – Headers (push_swap.h), déclarations et prototypes.

    Makefile – Automatisation de la compilation, incluant compilation, nettoyage, etc.

    main.c – Point d’entrée, gestion du parsing et appel à l’algorithme principal.

Connaissances acquises

    Manipulation de listes chaînées (piles).

    Programmation modulaire (fonctions séparées dans plusieurs fichiers).

    Gestion dynamique de la mémoire (malloc/free).

    Lecture et parsing des arguments en ligne de commande.

    Utilisation d’un Makefile pour gérer la compilation et le linking.

    Approche algorithmique d’optimisation (réduction du nombre d’instructions).

    Compréhension fine des opérations sur piles (push, swap, rotate, reverse rotate).

    Gestion d’erreurs et validation d’entrée.

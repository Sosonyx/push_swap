# PUSHSWAP
push_swap
Projet 42 – trier une pile d’entiers avec un nombre minimal d’opérations sur des listes chaînées.
Objectif

Reproduire un algorithme de tri en utilisant uniquement une série d’instructions définies (swap, push, rotate, reverse rotate) appliquées à deux piles (lst_a et lst_b), avec un nombre minimal d’opérations.

Le but est d’apprendre à manipuler les listes chaînées, gérer la mémoire, et optimiser un algorithme de tri.
Fonctions principales

<<<<<<< HEAD
    sort_3(t_node **lst_a) : trie 3 éléments dans la pile A de manière optimale.

    push_two_largest_to_b(t_node **lst_a, t_node **lst_b) : pousse les deux plus grands éléments de A vers B.

    sort_5(t_node **lst_a, t_node **lst_b) : trie 5 éléments en combinant les deux fonctions précédentes.

    Gestion des instructions (swap, push, rotate, reverse rotate) adaptées aux piles.
=======
    Parsing des éléments :
    Le programme commence par parser les arguments passés en ligne de commande, vérifie qu’ils sont des entiers valides sans doublons, puis crée une liste chaînée représentant la pile A (lst_a). Chaque élément reçoit un sorted_index qui facilite les comparaisons et le tri.

    Algorithme principal (sort) :
    Le tri s’effectue via deux piles (lst_a et lst_b) et un ensemble d’instructions limitées (swap, push, rotate, reverse rotate).

        Pour les petites listes (3 à 5 éléments), des fonctions spécifiques (sort_3, sort_5) appliquent un tri optimal avec un minimum d’opérations.

        Pour les listes plus grandes, l’algorithme divise la pile en chunks et pousse progressivement les éléments de lst_a vers lst_b selon leur ordre, avant de les réintégrer triés dans lst_a.

    Instructions et opérations :
    Implémentation des opérations (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr) qui manipulent les piles pour atteindre l’ordre trié. Chaque opération est choisie stratégiquement selon la position des éléments pour minimiser le nombre total d’actions.

    Gestion mémoire et robustesse :
    Manipulation des listes chaînées avec une allocation dynamique soignée, prévention des fuites mémoire, et validation stricte des données pour assurer la stabilité et la sécurité du programme.
>>>>>>> 33e140400c5500008da7f994e6bb47abd2cf2cf7

Fichiers

    srcs/ – fichiers sources .c

    includes/ – fichiers .h

    libft/ – bibliothèque externe utilisée (si présente)

    Makefile – automatisation de la compilation

    main.c – point d’entrée (optionnel, fichier de test)

Connaissances acquises

    Manipulation avancée des listes chaînées en C.

    Gestion dynamique de la mémoire sans fuite (valgrind).

<<<<<<< HEAD
    Optimisation d’algorithmes de tri.

    Gestion de plusieurs piles et opérations entre elles.
=======
    Optimisation d’algorithmes de tri sous contraintes.

    Gestion de piles et opérations entre elles.
>>>>>>> 33e140400c5500008da7f994e6bb47abd2cf2cf7

    Création d’un Makefile robuste et modulable.

    Respect strict des normes de codage 42.

    Découpage clair et structuré du code en fonctions spécifiques.

Compilation et utilisation

make
./push_swap [liste d’entiers]

Notes

<<<<<<< HEAD
    Le projet supporte le tri de petites listes (3 à 5 éléments) avec fonctions dédiées, extensible à plus grand nombre.

    Chaque opération est imprimée pour suivre les actions effectuées.

    L’approche permet d’étudier les bases d’un tri optimisé avec contraintes.
=======
    Le projet supporte le tri de petites listes (3 à 5 éléments) avec fonctions dédiées, extensible à des listes plus grandes.

    Chaque opération est imprimée pour suivre les actions effectuées.

    L’approche permet d’étudier les bases d’un tri optimisé avec contraintes spécifiques.
>>>>>>> 33e140400c5500008da7f994e6bb47abd2cf2cf7

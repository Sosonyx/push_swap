# PUSHSWAP
push_swap
Projet 42 – trier une pile d’entiers avec un nombre minimal d’opérations sur des listes chaînées.
Objectif

Reproduire un algorithme de tri en utilisant uniquement une série d’instructions définies (swap, push, rotate, reverse rotate) appliquées à deux piles (lst_a et lst_b), avec un nombre minimal d’opérations.

Le but est d’apprendre à manipuler les listes chaînées, gérer la mémoire, et optimiser un algorithme de tri.
Fonctions principales

    sort_3(t_node **lst_a) : trie 3 éléments dans la pile A de manière optimale.

    push_two_largest_to_b(t_node **lst_a, t_node **lst_b) : pousse les deux plus grands éléments de A vers B.

    sort_5(t_node **lst_a, t_node **lst_b) : trie 5 éléments en combinant les deux fonctions précédentes.

    Gestion des instructions (swap, push, rotate, reverse rotate) adaptées aux piles.

Fichiers

    srcs/ – fichiers sources .c

    includes/ – fichiers .h

    libft/ – bibliothèque externe utilisée (si présente)

    Makefile – automatisation de la compilation

    main.c – point d’entrée (optionnel, fichier de test)

Connaissances acquises

    Manipulation avancée des listes chaînées en C.

    Gestion dynamique de la mémoire sans fuite (valgrind).

    Optimisation d’algorithmes de tri.

    Gestion de plusieurs piles et opérations entre elles.

    Création d’un Makefile robuste et modulable.

    Respect strict des normes de codage 42.

    Découpage clair et structuré du code en fonctions spécifiques.

Compilation et utilisation

make
./push_swap [liste d’entiers]

Notes

    Le projet supporte le tri de petites listes (3 à 5 éléments) avec fonctions dédiées, extensible à plus grand nombre.

    Chaque opération est imprimée pour suivre les actions effectuées.

    L’approche permet d’étudier les bases d’un tri optimisé avec contraintes.
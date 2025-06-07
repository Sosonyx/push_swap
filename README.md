# push_swap

Projet 42 – trier une pile d’entiers en utilisant un nombre minimal d’instructions sur deux piles.

---
# push_swap

Projet 42 – trier une pile d’entiers en utilisant un nombre minimal d’instructions sur deux piles.

---

## Comment utiliser

- **Compiler** le programme :  
  ```bash
  make
      ./push_swap 3 2 1 6 5
  make bonus
      ./push_swap 3 2 1 6 5 | ./checker 3 2 1 6 5

## Objectif

Écrire un programme qui trie une liste d’entiers passée en argument, en utilisant uniquement les instructions `push`, `swap`, `rotate` et `reverse rotate` sur deux piles, tout en optimisant le nombre total d’opérations réalisées.

---

Le checker vérifie si les instructions triées la pile correctement et affiche OK ou KO.
## Fonctions principales

- `main(int argc, char **argv)` : parse les arguments, initialise la pile principale et lance l’algorithme de tri.  
- Parsing sécurisé et validation des arguments (entiers valides, pas de doublons).  
- `algo(t_node **lst_a, t_node **lst_b)` : fonction principale qui applique une stratégie gloutonne (greedy) pour trier la pile.  
- Fonctions spécifiques de tri :  
  - `sort_3(t_node **lst_a)` pour trier efficacement 3 éléments.  
  - `sort_5(t_node **lst_a, t_node **lst_b)` pour trier jusqu’à 5 éléments.  
- Gestion des instructions : `sa`, `sb`, `pa`, `pb`, `ra`, `rb`, `rra`, `rrb` implémentées pour manipuler les piles.  
- Algorithme glouton qui sélectionne à chaque étape l’élément dont le coût total de déplacement est minimal (coût calculé selon sa position dans les piles), et effectue les opérations optimales pour le replacer.

---



---

## Connaissances acquises

- Manipulation de listes chaînées (piles) et gestion dynamique mémoire.  
- Parsing d’arguments en ligne de commande avec validation.  
- Programmation modulaire avec séparation du code en plusieurs fichiers `.c`.  
- Conception et implémentation d’un algorithme glouton optimisé pour réduire le nombre d’instructions.  
- Gestion des opérations bas niveau sur piles (push, swap, rotate, reverse rotate).  
- Calcul des coûts pour optimiser les déplacements dans les piles.  
- Utilisation d’un Makefile pour gérer compilation et linking.  
- Respect strict des normes 42.  
- Approche algorithmique claire avec découpage fonctionnel.

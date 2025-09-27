<a name="readme-top"></a>
<div align="center">
  <h1>Push Swap Project</h1>

  <p align="center">
    Projet 42 – trier une pile d’entiers en utilisant un nombre minimal d’instructions sur deux piles.
  </p>

  <p>
    <img src="https://img.shields.io/github/repo-size/Sosonyx/push_swap?style=for-the-badge&logo=github">
    <img src="https://img.shields.io/github/languages/count/Sosonyx/push_swap?style=for-the-badge" />
    <img src="https://img.shields.io/github/languages/top/Sosonyx/push_swap?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/Sosonyx/push_swap?style=for-the-badge" />

  </p>

  <div style="font-size:1.3em; line-height:2;">
    <span><a href="#objectif" style="text-decoration:none; color:inherit;">✨ Objectif</a></span>
    &nbsp;&bull;&nbsp;
    <span><a href="#fonctions-principales" style="text-decoration:none; color:inherit;">⚙️ Fonctions principales</a></span>
    &nbsp;&bull;&nbsp;
    <span><a href="#connaissances-acquises" style="text-decoration:none; color:inherit;">📚 Connaissances acquises</a></span>
    &nbsp;&bull;&nbsp;
    <span><a href="#usage" style="text-decoration:none; color:inherit;">👨‍💻 Usage</a></span>
  </div>
</div>

---

## Objectif

Écrire un programme qui trie une liste d’entiers passée en argument, en utilisant uniquement les instructions `push`, `swap`, `rotate` et `reverse rotate` sur deux piles, tout en optimisant le nombre total d’opérations réalisées.

---

Le checker vérifie si les instructions trient la pile correctement et affiche OK, ou KO.
## Fonctions principales

- `main(int argc, char **argv)` : parse les arguments, initialise la pile principale et lance l’algorithme de tri.  
- Parsing sécurisé et validation des arguments (entiers valides, pas de doublons).  
- `algo(t_node **lst_a, t_node **lst_b)` : fonction principale qui applique une stratégie gloutonne (greedy) pour trier la pile.  
- Fonctions spécifiques de tri :  
  - `sort_3(t_node **lst_a)` pour trier efficacement 3 éléments.  
  - `sort_5(t_node **lst_a, t_node **lst_b)` pour trier jusqu’à 5 éléments.  
- Gestion des instructions : `sa`, `sb`, `pa`, `pb`, `ra`, `rb`, `rra`, `rrb` implémentées pour manipuler les piles.  

---
# Push_swap – Algorithme glouton de tri

![Push_swap](https://img.shields.io/badge/42-Push_swap-blue)

## Description

Ce projet implémente un **algorithme glouton pour trier des piles**.  
L’idée est de déplacer les éléments entre deux piles (`A` et `B`) de manière à minimiser le nombre total d’opérations :

- `sa`, `sb` : swap  
- `pa`, `pb` : push  
- `ra`, `rb` : rotate  
- `rra`, `rrb` : reverse rotate  

L’algorithme choisit **à chaque étape l’élément dont le coût total pour être replacé est minimal**, afin d’optimiser le nombre d’opérations globales.

---

## Principe de l’algorithme utilisé

1. **Calculer le coût pour chaque élément de B**
   - `cost_b` : rotations nécessaires pour amener l’élément en haut de B
   - `cost_a` : rotations nécessaires pour insérer l’élément dans sa position correcte dans A
   - `cost_total` = `abs(cost_a) + abs(cost_b)` (ou `max(abs(cost_a), abs(cost_b))` si rotations combinables)

2. **Sélectionner l’élément le plus économique**
   - On choisit l’élément avec le **coût minimal** à chaque étape (décision gloutonne)

3. **Effectuer les opérations**
   - Si `cost_a` et `cost_b` ont le même signe → combiner les rotations (`ra + rb` ou `rra + rrb`)  
   - Sinon → effectuer les rotations séparément (`ra`/`rra` puis `rb`/`rrb`)  
   - Pousser l’élément de B vers A (`pa`)

4. **Répéter jusqu’à ce que B soit vide**
   - À la fin, A contient tous les éléments triés
   - Optionnel : rotations finales pour amener le plus petit élément en haut de A

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

---

## <a name="usage"></a>👨‍💻 Usage

**Compiler le programme :**

```bash
make
./push_swap 3 2 1 6 5
rra
rra
rra
pb
rra
pb
sa
rra
pa
pa

./push_swap 3 2 1 6 5 | ./checker 3 2 1 6 5
OK
```

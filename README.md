# Project_Push_Swap

Pour faire fonctionner le programme compiler le avec la regle make du Makefile, puis ensuite utiliser l'executable créé comme ceci ./push_swap 2 3 1
il imprime une liste de coup à effectuer pour ranger la pile 

Note : le code n'est pas parfait car il donne pas le moins de coups possible même si on obtient quand même de bon résultat pour 100 et 500 nombre.

Trier des nombres dans une pile, en utilisant un set d’instructions limité, et avec le moins d’opérations possibles.

• Le jeu est constitué de 2 piles nommées a et b.

• Au départ :
◦ La pile a contient une quantité aléatoire de négatif et/ou des nombres positifs
qui ne peuvent pas être dupliqués (au max 500 nombre).
◦ La pile b est vide.


• Le but du jeu est de trier les nombres de la pile a par ordre croissant. Pour ce
faire, vous disposez des instructions suivantes :

sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.

sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
Ne fait rien s’il n’y en a qu’un ou aucun.

ss : sa et sb en même temps.

pa (push a) : Prend le premier élément au sommet de b et le met sur a.
Ne fait rien si b est vide.

pb (push b) : Prend le premier élément au sommet de a et le met sur b.
Ne fait rien si a est vide.

ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
Le premier élément devient le dernier.

rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
Le premier élément devient le dernier.

rr : ra et rb en même temps.

rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier.

rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
la pile b. Le dernier élément devient le premier.

rrr : rra et rrb en même temps.

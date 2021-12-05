# TP6

* Ismaël Delorme
* Paul Lemair

## Questions

    1. L'ensemble est de taille 21, et non pas de 1000 car un set ne peut pas contenir de doublon, de plus, son affichage se fait dans l'ordre croissant, ce qui indique que le set utilise une relation d'ordre pour classer ses éléments.
    2. Cette relation d'ordre est utilisé pour determiner si deux éléments sont égaux, afin de savoir si on ajoute ce nouvelle éléments au set.
    3. Le vecteur est implémanté comme une tableau de taille fixe, qui se realloc lorsqu'il n'y a plus de place et que l'on essaye d'insérer une nouvelle élément. 
    4. less<string> trie les chaînes de caractère pas ordre alphabétique.
    5. Cela permet de retourner plusieur valeurs sans passer de pointeur en paramêtre, ni retourner une 'petite' structure contenant uniquement deux valeurs.
    6. Le test ```tab[0] == 0``` va créer la valeur lors de l'accès à cette valeur. Le constructeur par défaut sera alors utilisé. tab[0] étant un entier, on appelle le constructeur par défaut des entier, qui initialise la variable à 0. Cela explique que le test sera toujours vrai, à moins que la variable tab[0] soit explicitement mis à une valeur différente de 0 avant le test.
   
## Execution Trace

```
$ ./bin/iterator 
Vector : 20 1 7 7 12 20 19 20 11 11 13 14 13 5 8 12 14 2 19 10 
Set : 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
$ ./bin/vector 
Capacity: 1 | Size: 1
Capacity: 2 | Size: 2
[...]
Capacity: 4096 | Size: 2049
Capacity: 8192 | Size: 4097
$ ./bin/priorityQueue 
4 6 0 0 17 20 4 5 0 0 2 6 14 7 14 12 13 8 7 1 19 7 3 16 14 18 13 1 4 8 3 6 12 1 6 8 19 11 12 19 
0 0 0 0 1 1 1 2 3 3 4 4 4 5 6 6 6 6 7 7 7 8 8 8 11 12 12 12 13 13 14 14 14 16 17 18 19 19 19 20 
$ ./bin/map 
Name: Ismaël - Age: 21
Name: Julien - Age: 22
Name: Paul - Age: 21
Name: Roméo - Age: 20
 (1, 10) < (2, 3) 1
 (1, 10) < (1, 20) 1
 (1, 10) < (1, 5) 0
 (1, 10) < (0, 8.5) 0
 (0, 0) != (0, 8) 1
 (0, 5) < (0, 5) 0
 ('pomme', 10) < ('orange', 40) 0
3
$ ./bin/algorithmes 
10 11 12 13 14 15 16 17 18 19 
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 
Is 1 include in 2 ? : True
Is 2 include in 1 ? : False

Sorting a Container with iterator: 
 Vector: 
19 19 18 18 18 17 16 14 14 14 13 13 12 12 10 10 10 9 8 7 6 6 5 4 3 2 2 2 1 1 
 List: 
19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 

Sort Container 
 with List: 
18 17 17 16 14 13 11 10 10 10 10 10 8 8 8 5 4 3 3 1 
 with Queue: 
20 19 17 17 16 16 16 13 12 11 11 9 9 9 7 5 5 3 3 0 

Swap using iterator: 
0 19 17 17 16 16 16 13 12 11 11 9 9 9 7 5 5 3 3 20 
```
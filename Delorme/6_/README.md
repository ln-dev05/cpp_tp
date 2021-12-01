# TP6

* Ismaël Delorme
* Paul Lemair

## Questions

### 1

    1. L'ensemble est de taille 21, et non pas de 1000 car un set ne peut pas contenir de doublon, de plus, son affichage se fait dans l'ordre croissant, ce qui indique que le set utilise une relation d'ordre pour classer ses éléments.
    2. Cette relation d'ordre est utilisé pour determiner si deux éléments sont égaux, afin de savoir si on ajoute ce nouvelle éléments au set.
    3. Le vecteur est implémanté comme une tableau de taille fixe, qui se realloc lorsqu'il n'y a plus de place et que l'on essaye d'insérer une nouvelle élément. 
    4. less<string> trie les chaînes de caractère pas ordre alphabétique.
    5. Cela permet de retourner plusieur valeurs sans passer de pointeur en paramêtre, ni retourner une 'petite' structure contenant uniquement deux valeurs.
    6. Le test ```tab[0] == 0``` va créer la valeur lors de l'accès à cette valeur. Le constructeur par défaut sera alors utilisé. tab[0] étant un entier, on appelle le constructeur par défaut des entier, qui initialise la variable à 0. Cela explique que le test sera toujours vrai, à moins que la variable tab[0] soit explicitement mis à une valeur différente de 0 avant le test.
    7. 
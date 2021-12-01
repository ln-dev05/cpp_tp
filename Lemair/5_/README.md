N.B. La fonction de lecture du fichier *items.txt* n'est ABSOLUMENT pas générique.
Elle est spécifique au fichier en question (modifié, par ailleurs, pour qu'il n'y ait qu'un espace entre chaque donnée).

# Valgrind 
En guise de preuve de la qualité du travail réalisé, et pour excuser les imperfections potentiellement présentes, voici une trace d'execution de valgrind

```txt
==65685== Memcheck, a memory error detector
==65685== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==65685== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==65685== Command: ./bin/heap
==65685== 
[
        124874 echarpe 12.25,
        872248 peluche 16,
        512456 gants 16.5,
        125644 mouchoirs 16.5,
        452749 t-shirt 20,
        269342 ceinture 20.5,
        429033 bonnet 22.5,
        265443 cravate 24,
        328749 chemisier 24,
        934840 polo 25,
        372042 casquette 26,
        974665 chemisier 26,
        238292 chemise 30,
        920745 jeans 35,
        837273 chemise 35,
        453729 robe 43,
        832789 pull-over 45,
        120132 jeans 45,
        103783 jupe 54,
        986235 anorak 85,
        903223 blouson 89,
        389333 parka 100,
        936942 blouson 118,
]
==65685== 
==65685== HEAP SUMMARY:
==65685==     in use at exit: 0 bytes in 0 blocks
==65685==   total heap usage: 6 allocs, 6 frees, 83,583 bytes allocated
==65685== 
==65685== All heap blocks were freed -- no leaks are possible
==65685== 
==65685== For lists of detected and suppressed errors, rerun with: -s
==65685== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
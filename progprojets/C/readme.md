**Description:**



j'ai fait ce projet en 2022 repris et documenté en 2026 dans le cadre d'une reprise de l'apprentissage de la programmation.

ce projet est une simulation simplifiée de Tamagotchi en langage C, jouable directement dans le terminal, le joueur doit s'occuper d'une petite créature virtuelle en gérant 3 statistique (faim, ennui, fatigue) avant qu'elles n'atteignent un seuil critique et que le tamagotchi <<meurt>>

Je m'étais aidé de livres, de projets sur GitHub et reddit, des amis m'avait aidé également



Il contient beaucoup d'incohérences à corriger également



**Fonctionnement:**



le tamagotchi est représenter par une structure (**struct**) contenant 3 valeurs :

&#x09;**faim** (hunger)

&#x09;**ennui** (boredom)

&#x09;**fatigue** (tiredness)

chacune de ces statistiques évolue au fil du temps et doit être gérer par l''utilisateur



le programme tourne dans une boucle infinie (**while(1)**) qui représente le passage du temps

a chaque tour, les 3 stats augmentent automatiquement, ensuite l'état du tamagotchi est affiché

si une stat dépasse sa limite (**FAIM\_LIMIT**, **ENNUI\_LIMIT** ou **FATIGUE\_LIMIT**) le tamagotchi meurt et le programme s'arrête



sinon le joueur choisit une action parmi ces trois:

&#x09;feed = nourrir le tamagotchi pour réduire sa faim

&#x09;play = jouer avec lui pour réduire l'ennui

&#x09;sleep = le faire dormir pour réduire sa fatigue

pointeurs 

les fonctions qui modifient les stat du tamagotchi (**feedTamagotchi**, **playtWithTamagotchi**, **putTamagotchiToSleep**, **updateTamagotchi**) reçoivent un pointeur vers la structure (**Tamagotchi \*t**) plutôt qu'une copie, cela permet de modifier directement les stat réelles du tamagotchi et non une copie temporaire qui serait perdue a la fin de la fonction



compilation et exécution : **gcc tamagotchess.c -o tamagotchess**

&#x09;			**./tamagotchess**




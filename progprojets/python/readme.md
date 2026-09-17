**Description:**



ce projet est une recréation en python du logo DVD qui se déplace en diagonale en rebondissant sur les bords de l'écran, il doit également changer de couleur

le programme s'exécute directement dans la console grâce au  module **bext** qui permet de contrôler l'affichage dans le terminal

je me suis aidé de projets similaires déjà existants ainsi que de << Cheat Sheet>> 

le projet est encore en cours d'apprentissage, il contient encore des erreurs de syntaxe à corriger



**Fonctionnement :**



* j'ai récupérer la taille du terminal (width, height) pour savoir ou sont les limites de l'écran
* j'ai défini des réglages du programme: nombre de logos a afficher, vitesse du logo, liste des couleurs possible, et les 4 directions diagonales possible (haut a droite, haut a gauche, bas a droite , bas a gauche)
* création des logos : chaque logo est représenté par un dictionnaire contenant sa couleur, sa position sur l'écran (X, Y) et sa direction de déplacement actuelle (DIR)
* animation : a chaque tour de boucle, le programme vérifie tous les logos.

  * &#x20;il va effacer son ancienne position
  * &#x20;vérifier s'il touche un bord ou un coin de l'écran et si oui inverser sa direction pour simuler un rebond (comme une balle)
  * déplacer le logo d'une case dans sa nouvelle direction
  * afficher le logo dans sa nouvelle position



* Un compteur (cornerBounces) enregistre le nombre de fois ou le logo aura toucher un coin de l'ecran de manière exacte



Modules requis: **sys** pour quitter le programme, **random** pour générer les positions/directions et les couleurs aléatoirement, time pour gérer la pause entre chaque frame de l'animation, **bext** pour le contrôle de l'affichage dans le terminal (installer avec **pip install bext**)
















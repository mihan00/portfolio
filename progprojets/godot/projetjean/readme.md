The Retrograde - Projet Godot



C'est un jeu qui sera similaires aux fonctionnement de la saga Zelda et du jeu Deltarune

Ce projet est réalisé en collaboration à deux :



Game design \& interfaces - conception des personnages, des interfaces et de l'aspect visuel du jeu

Backend \& programmation -logique de jeu, mécaniques, gestion des systèmes internes (moi)



Stack technique

Moteur : Godot \[version]

Langage : GDScript



Ma partie (backend):



Le projet démarre tout juste, en parallèle de mon apprentissage de GDScript (je découvre actuellement les variables et les fonctions de base).



En cours : déplacement du personnage



le premier objectif est de faire déplacer le personnage grâce aux frames d'animations:



* déplacement dans les 4 directions (haut, bas, gauche, droite)
* déplacement en diagonale
* possibilité de sprinter
* gestion de l'idle (état du personnage à l'arrêt)



exemple actuel de code:



draw\_rectangle(260, 180)

draw\_rectangle(160, 210)

&#x20;                       

func draw\_rectangle():

&#x09;move\_forward()

&#x09;turn\_right(90)

&#x09;move\_forward()

&#x09;turn\_right(90)

&#x09;move\_forward()

&#x09;turn\_right(90)

&#x09;move\_forward()

&#x09;turn\_right(90)



Cette fonction permet de dessiner un rectangle en combinant des déplacements et des rotations à 90 degré



J'apprends actuellement:

* les variables
* les fonctions et paramètres 
* les bases des déplacements/rotations dans Godot


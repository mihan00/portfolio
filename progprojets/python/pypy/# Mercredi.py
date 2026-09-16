# Mercredi
# Exercice 1 : Afficher du texte
print("Bonjour !")

# Exercice 2 : Demander le prénom et afficher
prenom = input("Quel est ton prénom ? ")
print("Bonjour", prenom)

# Exercice 3 : Calculs simples
a = 5
b = 3
print("Addition:", a + b)
print("Soustraction:", a - b)
print("Multiplication:", a * b)
print("Division:", a / b)

# Jeudi
# Boucle for : afficher les 10 premiers nombres pairs
for i in range(2, 21, 2):
    print(i)

# Boucle while : demander un nombre >0
nombre = 0
while nombre <= 0:
    nombre = int(input("Entrez un nombre >0 : "))

# Vendredi
# Condition if/else : majeur ou mineur
age = int(input("Quel âge as-tu ? "))
if age >= 18:
    print("Vous êtes majeur")
else:
    print("Vous êtes mineur")

# Mini-exercice : carré de 5 étoiles
taille = 5
for i in range(taille):
    print("* " * taille)

# Samedi et Dimanche
# Refaire les exercices précédents et combiner si tu veux
# Exemple : carré de taille = ton âge (ou un nombre choisi)
taille = int(input("Entrez une taille pour le carré : "))
for i in range(taille):
    print("* " * taille)


networksetup -getairportnetwork en0

ping -c 5 google.com

log show --predicate 'subsystem == "com.apple.wifi"' --last 5m

ping -c 3 8.8.8.8
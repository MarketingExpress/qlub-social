#define commentaire(valeur)

commentaire(« Macros »)

commentaire(« Converti une valeur en texte »)
#define texte(guillemet_gauche, valeur, guillemet_droite) #valeur

commentaire(« Une portion de code entre accolade bouclée (Ceci fait aussi hommage au Bloc-Québecois) »)
#define bloc(code) { code }

commentaire(« Noms Réservés »)
#define retour return

commentaire(« Ponctuations »)
#define pointeur *

commentaire(« Types »)
#define caractère char
#define entier int

commentaire(« Valeurs »)
#define zéro 0
#define un 1
#define nouvelle_ligne "\n" commentaire(« C'est vraiment nul qu'on ne peut pas utiliser des guillemets ici... »)

commentaire(« Fonctions »)
#define début main
#define imprimer_avec_format_de_texte printf


#include <gtk/gtk.h>




typedef struct reclamation
{char ID_client[30];
char ID_reclamation[30];
char date_reclamation[30];
char  prestation[30];
char text[1000];
char reclamation[1000];
}reclamation;

void ajouter_reclamation(reclamation r);
void afficher_reclamation(GtkWidget *treeview1);
void Supprimer_reclamation_ft(char ID_Reclamation[],char *f);
void Chercher_reclamation(char *f,char ID_Reclamation[]);
void modifier_reclamation_ft(char ID_Reclamation[],char *f,char mot[]);







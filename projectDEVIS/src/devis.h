
#include<gtk/gtk.h>
typedef struct
{
    char id_devis[10];
    char id_client[10];
    char date[15];
    char type_prestation[10];
    char montant[10];
    char code_promo[10];
    char total[10];

} devis;

void ajouter_devis(devis d);
void afficher_devis(GtkWidget *treeview200);
void Supprimer_devis_ft(char ID_devis[],char *f);
void Chercher_devis(char *f,char ID_devis[]);
void modifier1_devis_ft(char ID_devis[],char *f,char mot[30]);
void modifier2_devis_ft(char ID_devis[],char *f,char mot[30]);

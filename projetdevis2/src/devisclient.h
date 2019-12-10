#include <gtk/gtk.h>

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
typedef struct
{
    char ncarte[10];
    char dexp[15];
    char mpasse[15];
    
} carte;



void afficher_devis(GtkWidget *treeview202);
void afficher_facture(GtkWidget *treeview203);
void Supprimer_devis_ft(char ID_devis[],char *f);
void Supprimer_facture_ft(char ID_facture[],char *f);
void ajouter_payement(carte c);
void Chercher2_devis(char *f,char ID_devis[]);
void modifier3_devis_ft(char ID_devis[],char *f);
void Supprimer22_devis_ft(char ID_devis[],char *f);

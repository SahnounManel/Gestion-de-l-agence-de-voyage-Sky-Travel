#include <gtk/gtk.h>

typedef struct Voiture Voiture;
struct Voiture{
char matricule[30];
char marque[30];
char carburant[30];
char couleur[30];
char option[30];
int prix;
};

typedef struct Excursion Excursion;
struct Excursion{
char id[30];
char date[30];
char heure[30];
char depart[30];
char destination[30];
char moyen_transport[30];
int nbPlaceDispo;
int prix;
};
  int i,j,k;
  char passwordGlobale	[30];

 GtkWidget *login;
  GtkWidget *acceuil;
  GtkWidget *excursion;
  GtkWidget *voiture;

void
on_LoginEspaceEmploye_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_AcceuilExcursion_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_AcceuilLocation_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_ExcursionAcceuil_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_AjouterExcursion_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_SupprimerExcursion_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_ReserverExcursion_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_ModifierExcursion_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_VoitureAcceuil_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_AjouterVoiture_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_SupprimerVoiture_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_LouerVoiture_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_ModifierVoiture_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_ChercherVoiture_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_logout_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

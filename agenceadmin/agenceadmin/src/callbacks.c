#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"reclamation.h"

void
on_supprimer2_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *output;
GtkWidget *affichage2;
char ID_Reclamation[30];
GtkWidget *input115;
affichage2=lookup_widget(objet,"affichage2");
input115=lookup_widget(objet,"entry115");
strcpy(ID_Reclamation,gtk_entry_get_text(GTK_ENTRY(input115)));
Supprimer_reclamation_ft(ID_Reclamation,"reclamation.txt");
output = lookup_widget(objet, "label186") ;
gtk_label_set_text(GTK_LABEL(output),ID_Reclamation);

}






void
on_modifier2_reclamation_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *modification2;
char ID_Reclamation[30];
char mot[30];
GtkWidget *input116;
GtkWidget *input118;
GtkWidget *output;
modification2=lookup_widget(objet,"modification2");
input116=lookup_widget(objet,"entry116");
strcpy(ID_Reclamation,gtk_entry_get_text(GTK_ENTRY(input116)));
input118=lookup_widget(objet,"entry118");
strcpy(mot,gtk_entry_get_text(GTK_ENTRY(input118)));

modifier_reclamation_ft(ID_Reclamation,"reclamation.txt",mot);
output = lookup_widget(objet, "label187") ;
gtk_label_set_text(GTK_LABEL(output),ID_Reclamation);
}


void
on_recherche2_reclamation_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *modification2;
char ID_Reclamation[30];
GtkWidget *input116;
GtkWidget *output;
modification2=lookup_widget(objet,"modification2");
input116=lookup_widget(objet,"entry116");
output = lookup_widget(objet, "label4") ;
strcpy(ID_Reclamation,gtk_entry_get_text(GTK_ENTRY(input116)));
Chercher_reclamation("reclamation.txt",ID_Reclamation);
gtk_label_set_text(GTK_LABEL(output),ID_Reclamation);


}


void
on_afficher2_reclamation_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *modification2;
GtkWidget *affichage2;
GtkWidget *treeview2;
affichage2=lookup_widget(objet,"affichage2");
gtk_widget_destroy(affichage2);
modification2=lookup_widget(objet,"modification2");
modification2=create_modification2();
gtk_widget_show(modification2);

}


void
on_retour2_admin_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *modification2;
GtkWidget *affichage2;
modification2=lookup_widget(objet,"modification2");
gtk_widget_destroy(modification2);
affichage2=lookup_widget(objet,"affichage2");
affichage2=create_affichage2();
gtk_widget_show(affichage2);
}


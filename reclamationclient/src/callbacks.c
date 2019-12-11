#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"reclamation.h"


void
on_ajouter_reclamation_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{reclamation r;
GtkWidget *output;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *ajout_client;
ajout_client=lookup_widget(objet,"ajout_client");
input1=lookup_widget(objet,"entry100");
strcpy(r.ID_client,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(objet,"entry101");
strcpy(r.ID_reclamation,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(objet,"entry103");
strcpy(r.date_reclamation,gtk_entry_get_text(GTK_ENTRY(input3)));
input4=lookup_widget(objet,"entry104");
strcpy(r.prestation,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(objet,"entry105");
strcpy(r.reclamation,gtk_entry_get_text(GTK_ENTRY(input5)));
output = lookup_widget(objet, "label112") ;
gtk_label_set_text(GTK_LABEL(output),"reclamation reçu ===>on vous repond dans les_plus bref delais :)");

ajouter_reclamation(r);


}

void
on_afficher_treeview1_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *ajout_client;
GtkWidget *affichage_client;
GtkWidget *treeview1;
ajout_client=lookup_widget(objet,"ajout_client");
gtk_widget_destroy(ajout_client);
affichage_client=lookup_widget(objet,"affichage_client");
affichage_client=create_affichage_client();
gtk_widget_show(affichage_client);
treeview1=lookup_widget(affichage_client,"treeview1");
afficher_reclamation(treeview1);
}







void
on_supprimer_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *affichage_client;
char ID_Reclamation[30];
GtkWidget *output;
GtkWidget *input6;
affichage_client=lookup_widget(objet,"affichage_client");
input6=lookup_widget(objet,"entry106");
strcpy(ID_Reclamation,gtk_entry_get_text(GTK_ENTRY(input6)));
Supprimer_reclamation_ft(ID_Reclamation,"reclamation.txt");
output = lookup_widget(objet, "label113") ;
gtk_label_set_text(GTK_LABEL(output),ID_Reclamation);
}


void
on_rechercher2_reclamation_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *afficher1_une_reclamation;
char ID_Reclamation[30];
GtkWidget *input7;
GtkWidget *output;
afficher1_une_reclamation=lookup_widget(objet,"afficher1_une_reclamation");
input7=lookup_widget(objet,"entry107");
output = lookup_widget(objet, "label110") ;
strcpy(ID_Reclamation,gtk_entry_get_text(GTK_ENTRY(input7)));
Chercher_reclamation("reclamation.txt",ID_Reclamation);
gtk_label_set_text(GTK_LABEL(output),ID_Reclamation);


}


void
on_modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *afficher1_une_reclamation;
char ID_Reclamation[30];
char mot[30];
GtkWidget *output;
GtkWidget *input100;
GtkWidget *input101;
afficher1_une_reclamation=lookup_widget(objet,"afficher1_une_reclamation");
input100=lookup_widget(objet,"entry107");
strcpy(ID_Reclamation,gtk_entry_get_text(GTK_ENTRY(input100)));
input101=lookup_widget(objet,"entry108");
strcpy(mot,gtk_entry_get_text(GTK_ENTRY(input101)));
modifier_reclamation_ft(ID_Reclamation,"reclamation.txt",mot);
output = lookup_widget(objet, "label114") ;
gtk_label_set_text(GTK_LABEL(output),ID_Reclamation);
}


void
on_recherche_reclamation_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *affichage_client, *afficher1_une_reclamation;
affichage_client=lookup_widget(objet,"affichage_client");
gtk_widget_destroy(affichage_client);
afficher1_une_reclamation=create_afficher1_une_reclamation();
gtk_widget_show(afficher1_une_reclamation);


}







void
on_retour1_reclamation_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *w1;
GtkWidget *affichage_client;
affichage_client=lookup_widget(objet,"affichage_client");
gtk_widget_destroy(affichage_client);
w1=lookup_widget(objet,"w1");
w1=create_w1();
gtk_widget_show(w1);

}


void
on_retour2_reclamation_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *afficher1_une_reclamation;
GtkWidget *affichage_client;
afficher1_une_reclamation=lookup_widget(objet,"afficher1_une_reclamation");
gtk_widget_destroy(afficher1_une_reclamation);
affichage_client=lookup_widget(objet,"affichage_client");
affichage_client=create_affichage_client();
gtk_widget_show(affichage_client);

}



void
on_mesreclamation_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *affichage_client;
GtkWidget *w1;
w1=lookup_widget(objet,"w1");
gtk_widget_destroy(w1);
affichage_client=lookup_widget(objet,"affichage_client");
affichage_client=create_affichage_client();
gtk_widget_show(affichage_client);

}


void
on_ajout_reclamation_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *ajout_client;
GtkWidget *w1;
w1=lookup_widget(objet,"w1");
gtk_widget_destroy(w1);
ajout_client=lookup_widget(objet,"ajout_client");
ajout_client=create_ajout_client();
gtk_widget_show(ajout_client);


}


void
on_retourw1_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *ajout_client;
GtkWidget *w1;
ajout_client=lookup_widget(objet,"ajout_client");
gtk_widget_destroy(ajout_client);
w1=lookup_widget(objet,"w1");
w1=create_w1();
gtk_widget_show(w1);

}


#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#include <gtk/gtk.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "devis.h"




void
on_ajout_devis_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
devis d;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *ajouterdevis;
ajouterdevis=lookup_widget(objet,"ajouterdevis");
input1=lookup_widget(objet,"entry200");
strcpy(d.id_client,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(objet,"entry201");
strcpy(d.id_devis,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(objet,"entry202");
strcpy(d.date,gtk_entry_get_text(GTK_ENTRY(input3)));
input4=lookup_widget(objet,"entry203");
strcpy(d.type_prestation,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(objet,"entry204");
strcpy(d.montant,gtk_entry_get_text(GTK_ENTRY(input5)));
input6=lookup_widget(objet,"entry205");
strcpy(d.code_promo,gtk_entry_get_text(GTK_ENTRY(input6)));
input7=lookup_widget(objet,"entry206");
strcpy(d.total,gtk_entry_get_text(GTK_ENTRY(input7)));


ajouter_devis(d);

}


void
on_afficher_devis_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *ajouterdevis;
GtkWidget *wind2;
GtkWidget *treeview200;
ajouterdevis=lookup_widget(objet,"ajouterdevis");
gtk_widget_destroy(ajouterdevis);
wind2=lookup_widget(objet,"wind2");
wind2=create_wind2();
gtk_widget_show(wind2);
treeview200=lookup_widget(wind2,"treeview200");
afficher_devis(treeview200);
}


void
on_supprimerdevis_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind2;
char ID_devis[30];
GtkWidget *input6;
wind2=lookup_widget(objet,"wind");
input6=lookup_widget(objet,"entry209");
strcpy(ID_devis,gtk_entry_get_text(GTK_ENTRY(input6)));
Supprimer_devis_ft(ID_devis,"devis.txt");

}





void
on_modifierdevis_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind3;
GtkWidget *wind2;
wind2=lookup_widget(objet,"wind2");
gtk_widget_destroy(wind2);
wind3=lookup_widget(objet,"wind3");
wind3=create_wind3();
gtk_widget_show(wind3);


}


void
on_rechercherdevis1_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind3;
char ID_devis[30];
GtkWidget *input7;
GtkWidget *output;
wind3=lookup_widget(objet,"wind3");
input7=lookup_widget(objet,"entry211");
output = lookup_widget(objet, "label200") ;
strcpy(ID_devis,gtk_entry_get_text(GTK_ENTRY(input7)));
Chercher_devis("devis.txt",ID_devis);
gtk_label_set_text(GTK_LABEL(output),ID_devis);

}


void
on_modifierpromo_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind3;
char ID_devis[30];
char mot[30];
GtkWidget *input100;
GtkWidget *input101;
wind3=lookup_widget(objet,"wind3");
input100=lookup_widget(objet,"entry211");
strcpy(ID_devis,gtk_entry_get_text(GTK_ENTRY(input100)));
input101=lookup_widget(objet,"entry212");
strcpy(mot,gtk_entry_get_text(GTK_ENTRY(input101)));
modifier1_devis_ft(ID_devis,"devis.txt",mot);


}


void
on_modifiertotal_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *wind3;
char ID_devis[30];
char mot[30];
GtkWidget *input100;
GtkWidget *input101;
wind3=lookup_widget(objet,"wind3");
input100=lookup_widget(objet,"entry211");
strcpy(ID_devis,gtk_entry_get_text(GTK_ENTRY(input100)));
input101=lookup_widget(objet,"entry213");
strcpy(mot,gtk_entry_get_text(GTK_ENTRY(input101)));
modifier2_devis_ft(ID_devis,"devis.txt",mot);
}


void
on_button211_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *wind3;
GtkWidget *wind2;
wind3=lookup_widget(objet,"wind3");
gtk_widget_destroy(wind3);
wind2=lookup_widget(objet,"wind2");
wind2=create_wind2();
gtk_widget_show(wind2);

}


void
on_button210_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *ajouterdevis;
GtkWidget *wind2;
wind2=lookup_widget(objet,"wind2");
gtk_widget_destroy(wind2);
ajouterdevis=lookup_widget(objet,"ajouterdevis");
ajouterdevis=create_ajouterdevis();
gtk_widget_show(ajouterdevis);
}


void
on_buttonfactures_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *wind2;
GtkWidget *wind10;
GtkWidget *treeviewf;
wind2=lookup_widget(objet,"wind2");
gtk_widget_destroy(wind2);
wind10=lookup_widget(objet,"wind10");
wind10=create_wind10();
gtk_widget_show(wind10);
treeviewf=lookup_widget(wind10,"treeviewf");
afficher_facture(treeviewf);
}


void
on_retourwind2_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind2;
GtkWidget *wind10;
GtkWidget *treeview200;
wind10=lookup_widget(objet,"wind10");
gtk_widget_destroy(wind10);
wind2=lookup_widget(objet,"wind2");
wind2=create_wind2();
gtk_widget_show(wind2);
treeview200=lookup_widget(wind10,"treeview200");
afficher_devis(treeview200);
}


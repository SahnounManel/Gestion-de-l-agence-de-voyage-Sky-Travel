#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "devisclient.h"


void
on_afficherdevis_client_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind4;
GtkWidget *wind5;
GtkWidget *treeview202;
wind4=lookup_widget(objet,"wind4");
gtk_widget_destroy(wind4);
wind5=lookup_widget(objet,"wind5");
wind5=create_wind5();
gtk_widget_show(wind5);
treeview202=lookup_widget(wind5,"treeview202");
afficher_devis(treeview202);

}


void
on_afficherfactures_client_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind4;
GtkWidget *wind6;
GtkWidget *treeview203;
wind4=lookup_widget(objet,"wind4");
gtk_widget_destroy(wind4);
wind6=lookup_widget(objet,"wind6");
wind6=create_wind6();
gtk_widget_show(wind6);
treeview203=lookup_widget(wind6,"treeview203");
afficher_facture(treeview203);

}


void
on_supprimerdevis2_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind5;
char ID_devis[30];
GtkWidget *input6;
wind5=lookup_widget(objet,"wind5");
input6=lookup_widget(objet,"entry230");
strcpy(ID_devis,gtk_entry_get_text(GTK_ENTRY(input6)));
Supprimer_devis_ft(ID_devis,"devis.txt");

}


void
on_payer_clicked                       (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind6;
GtkWidget *wind7;
wind6=lookup_widget(objet,"wind6");
gtk_widget_destroy(wind6);
wind7=lookup_widget(objet,"wind7");
wind7=create_wind7();
gtk_widget_show(wind7);

}


void
on_retourwind41_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind5;
GtkWidget *wind4;
wind5=lookup_widget(objet,"wind5");
gtk_widget_destroy(wind5);
wind4=lookup_widget(objet,"wind4");
wind4=create_wind4();
gtk_widget_show(wind4);

}


void
on_supprimerfactures2_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind6;
char ID_facture[30];
GtkWidget *input6;
wind6=lookup_widget(objet,"wind6");
input6=lookup_widget(objet,"entry231");
strcpy(ID_facture,gtk_entry_get_text(GTK_ENTRY(input6)));
Supprimer_facture_ft(ID_facture,"factures.txt");

}


void
on_retourwind42_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind6;
GtkWidget *wind4;
wind6=lookup_widget(objet,"wind6");
gtk_widget_destroy(wind6);
wind4=lookup_widget(objet,"wind4");
wind4=create_wind4();
gtk_widget_show(wind4);

}


void
on_confirmer250_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{carte c;
char ID_devis[30];
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *wind7;
wind7=lookup_widget(objet,"wind7");
input1=lookup_widget(objet,"entry251");
strcpy(c.ncarte,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(objet,"entry252");
strcpy(c.dexp,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(objet,"entry253");
strcpy(c.mpasse,gtk_entry_get_text(GTK_ENTRY(input3)));
input4=lookup_widget(objet,"entry250");
strcpy(ID_devis,gtk_entry_get_text(GTK_ENTRY(input4)));

ajouter_payement(c);        //au click sur confirmer entry 251 252et 253 seront sauvegardés dans carte.txt et selon l'id du devis a payer une ligne sera supprimee du devis.txt et sera ajoutee a facture.txt


GtkWidget *input7;
wind7=lookup_widget(objet,"wind7");
input7=lookup_widget(objet,"entry250");

strcpy(ID_devis,gtk_entry_get_text(GTK_ENTRY(input7)));
modifier3_devis_ft(ID_devis,"devis.txt");





char ID_facture[30];
GtkWidget *input6;
wind7=lookup_widget(objet,"wind7");
input6=lookup_widget(objet,"entry250");
strcpy(ID_facture,gtk_entry_get_text(GTK_ENTRY(input6)));
Supprimer22_devis_ft(ID_facture,"devis.txt");


       
}


void
on_retourwind43_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind7;
GtkWidget *wind6;
wind7=lookup_widget(objet,"wind7");
gtk_widget_destroy(wind7);
wind6=lookup_widget(objet,"wind6");
wind6=create_wind6();
gtk_widget_show(wind6);

}


void
on_recherche_dev_pay_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *wind7;
char ID_devis[30];
GtkWidget *input7;
GtkWidget *output;
wind7=lookup_widget(objet,"wind7");
input7=lookup_widget(objet,"entry250");
output = lookup_widget(objet, "label250") ;
strcpy(ID_devis,gtk_entry_get_text(GTK_ENTRY(input7)));
Chercher2_devis("devis.txt",ID_devis);
gtk_label_set_text(GTK_LABEL(output),ID_devis);

}


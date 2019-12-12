#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"crud.h"
#include"affichage.h"
void
on_LoginEspaceEmploye_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *entrypass;
GtkWidget *entryname;
GtkWidget *labelname;
GtkWidget *labelpass;
GtkWidget *labelfound;
entryname=lookup_widget(login,"entry1");
entrypass=lookup_widget(login,"entry2");
labelname=lookup_widget(login,"label5");
labelpass=lookup_widget(login,"label6");
labelfound=lookup_widget(login,"label4");
char name[20];
char pass[20];
int b=1,x;
strcpy(name,gtk_entry_get_text(GTK_ENTRY(entryname)));
strcpy(pass,gtk_entry_get_text(GTK_ENTRY(entrypass)));

if(strcmp(name,"")==0){
  gtk_widget_show (labelname);b=0;
}else{gtk_widget_hide (labelname);}
if(strcmp(pass,"")==0){
  gtk_widget_show (labelpass);b=0;
}else{gtk_widget_hide (labelpass);}
if(b==0){return;} else    {
x=existusers(name,pass,"users.txt");
if(x==-1){
gtk_widget_show (labelfound);}

else{
gtk_widget_destroy (login);
acceuil = create_acceuil ();
  gtk_widget_show (acceuil);
gtk_widget_show (acceuil);
strcpy(passwordGlobale,pass);

}

}
}
void
on_AcceuilExcursion_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

/*preparation du treeView*/
GtkWidget *p;


  gtk_widget_hide (acceuil);
  excursion = create_excursion ();
k=0;
p=lookup_widget(excursion,"treeview1");//Afficher




Afficher_Excursion(p,"excursions.txt");

gtk_widget_show (excursion);




}


void
on_AcceuilLocation_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

/*preparation du treeView*/
GtkWidget *p;
GtkWidget *p1;
Voiture v;
  gtk_widget_hide (acceuil);
voiture = create_voiture ();
i=0;
j=0;
p=lookup_widget(voiture,"treeview2");//Afficher
p1=lookup_widget(voiture,"treeview3");//Chercher



Afficher_Voiture(p,"voitures.txt");
Afficher_Voiture2(p1,"voitures.txt");
gtk_widget_show (voiture);








}


void
on_ExcursionAcceuil_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

gtk_widget_show (acceuil);
        gtk_widget_destroy (excursion);


}


void
on_AjouterExcursion_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *comboboxDepart;
GtkWidget *comboboxDestination;



GtkWidget *labelsuccess;
GtkWidget *labelId;
GtkWidget *labelDepart;
GtkWidget *labelDestination;
GtkWidget *labelHeure;
GtkWidget *labelMoyen;
GtkWidget *labelExist;
GtkWidget *cal1;
FILE*f=NULL;
Excursion e;
int b=1;
int jj1,mm1,aa1;

labelsuccess=lookup_widget(excursion,"label21");
labelExist=lookup_widget(excursion,"label19");
labelId=lookup_widget(excursion,"label20");
labelDepart=lookup_widget(excursion,"label26");
labelDestination=lookup_widget(excursion,"label63");
labelHeure=lookup_widget(excursion,"label65");
labelMoyen=lookup_widget(excursion,"label66");



cal1=lookup_widget(excursion,"calendar10");
comboboxDepart=lookup_widget(excursion,"combobox19");
comboboxDestination=lookup_widget(excursion,"combobox49");



           gtk_widget_hide (labelsuccess);

strcpy(e.id,gtk_entry_get_text(GTK_ENTRY(lookup_widget(excursion,"entry3"))));
strcpy(e.heure,gtk_entry_get_text(GTK_ENTRY(lookup_widget(excursion,"entry7"))));
strcpy(e.moyen_transport,gtk_entry_get_text(GTK_ENTRY(lookup_widget(excursion,"entry8"))));
if(strcmp(e.id,"")==0){
                gtk_widget_show (labelId);
b=0;

}else
{
           gtk_widget_hide (labelId);
}
if(strcmp(e.heure,"")==0){
                gtk_widget_show (labelHeure);
b=0;

}else
{
           gtk_widget_hide (labelHeure);
}

if(strcmp(e.moyen_transport,"")==0){
                gtk_widget_show (labelMoyen);
b=0;

}else
{
           gtk_widget_hide (labelMoyen);
}



if(gtk_combo_box_get_active (GTK_COMBO_BOX(comboboxDepart))==-1){
                gtk_widget_show (labelDepart);
b=0;
}
else{

           gtk_widget_hide (labelDepart);
}
if(gtk_combo_box_get_active (GTK_COMBO_BOX(comboboxDestination))==-1){
                gtk_widget_show (labelDestination);
b=0;
}
else{

           gtk_widget_hide (labelDestination);
}




if(b==1){
e.prix =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(excursion,"spinbutton9")));
e.nbPlaceDispo =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(excursion,"spinbutton2")));

strcpy(e.depart,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxDepart)));
strcpy(e.destination,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxDestination)));

gtk_calendar_get_date (GTK_CALENDAR(cal1),
                       &aa1,
                       &mm1,
                       &jj1);






if(exist_excursion(e.id)==1) {

                gtk_widget_show (labelExist);

}
else{
           gtk_widget_hide (labelExist);

f=fopen("excursions.txt","a+");
fprintf(f,"%s %d/%d/%d %s %s %s %s %d %d\n",e.id,jj1,mm1+1,aa1,e.heure,e.depart,e.destination,e.moyen_transport,e.nbPlaceDispo,e.prix);
fclose(f);
                gtk_widget_show (labelsuccess);


//mise a jour du treeView
GtkWidget *p;
p=lookup_widget(excursion,"treeview1");
Afficher_Excursion(p,"excursions.txt");



}

}

















}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
 	gchar *id;
        gchar *date;
        gchar *heure;
        gchar *depart;
        gchar *destination;
        gchar *moyen_transport;
        gint prix,nbPlaceDispo;


        gint x1,x2;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget *p=lookup_widget(excursion,"treeview1");
        GtkTreeSelection *selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
                gtk_tree_model_get (model,&iter,0,&id,1,&date,2,&heure,3,&depart,4,&destination,5,&moyen_transport,6,&nbPlaceDispo,7,&prix,-1);//recuperer les information de la ligne selectionneé

                gtk_entry_set_text(GTK_ENTRY(lookup_widget(excursion,"entry9")),date);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(excursion,"entry10")),heure);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(excursion,"entry11")),moyen_transport);

                gtk_spin_button_set_value (GTK_SPIN_BUTTON(lookup_widget(excursion,"spinbutton10")),nbPlaceDispo);
                gtk_spin_button_set_value (GTK_SPIN_BUTTON(lookup_widget(excursion,"spinbutton6")),prix);












                if(strcmp(depart,"Tunis")==0)	x1=0;		
                if(strcmp(depart,"Sfax")==0) x1=1;                
                if(strcmp(depart,"Monastir")==0)  x1=2 ;             

               


                if(strcmp(destination,"Parie")==0) x2=0;                
                if(strcmp(destination,"Rome")==0)  x2=1;  
                if(strcmp(destination,"Barcelone")==0)  x2=2;                            

      		  




                                 gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(excursion,"combobox59")),x1);
                                 gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(excursion,"combobox69")),x2);






		GtkWidget* msg=lookup_widget(excursion,"label36");
                gtk_label_set_text(GTK_LABEL(msg),id);
		


                gtk_widget_show(lookup_widget(excursion,"button13"));//afficher le bouton modifier
        GtkWidget* msg1=lookup_widget(excursion,"label37"); 
        gtk_widget_hide(msg1);//cacher "vol modifié avec succes"


}





}


void
on_SupprimerExcursion_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

GtkTreeSelection *selection;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *label;
        gchar* id;

        label=lookup_widget(excursion,"label38");
        p=lookup_widget(excursion,"treeview1");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {  gtk_tree_model_get (model,&iter,0,&id,-1);
           gtk_list_store_remove(GTK_LIST_STORE(model),&iter);//supprimer la ligne du treeView

           supprimer_excursion(id);// supprimer la ligne du fichier

           gtk_widget_hide (label);}else{
                gtk_widget_show (label);
        }




}


void
on_ReserverExcursion_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
GtkTreeSelection *selection;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *labelSelection;
        GtkWidget *labelInvalid;
        GtkWidget *labelsuccess;
        gchar* id;
        gchar* date;
        gchar* heure;
        gchar* depart;
        gchar* destination;
        gchar* moyen_transport;
        int prix,x1,nbPlaceDispo,nbE;

	Excursion e;
        labelSelection=lookup_widget(excursion,"label38");
        labelInvalid=lookup_widget(excursion,"label132");
        labelsuccess=lookup_widget(excursion,"label133");
        p=lookup_widget(excursion,"treeview1");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {  
                gtk_tree_model_get (model,&iter,0,&id,1,&date,2,&heure,3,&depart,4,&destination,5,&moyen_transport,6,&nbPlaceDispo,7,&prix,-1);//recuperer les information de la ligne selectionneé
		//remplissage du structure Voiture
		strcpy(e.id,id);
		strcpy(e.date,date);
		strcpy(e.heure,heure);
		strcpy(e.depart,depart);
		strcpy(e.destination,destination);
		strcpy(e.moyen_transport,moyen_transport);
		e.prix=prix;
		e.nbPlaceDispo=nbPlaceDispo;
		nbE =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(excursion,"spinbutton11")));



		if(e.nbPlaceDispo<nbE){

		gtk_widget_show (labelInvalid);

		}else
		{
		gtk_widget_hide(labelInvalid);

		
		Reserver_excursion(e,nbE,passwordGlobale);
		gtk_widget_show (labelsuccess);
		supprimer_excursion(e.id);
		e.nbPlaceDispo-=nbE;
		ajouter_excursion(e);
		//mise a jour du treeView
		Afficher_Excursion(lookup_widget(excursion,"treeview1"),"excursions.txt");



	 	gtk_widget_hide (labelSelection); }

	}else{

                gtk_widget_show (labelSelection);
        }




	












}


void
on_ModifierExcursion_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
Excursion e;
        strcpy(e.id,gtk_label_get_text(GTK_LABEL(lookup_widget(excursion,"label36"))));
        strcpy(e.date,gtk_entry_get_text(GTK_ENTRY(lookup_widget(excursion,"entry9"))));
        strcpy(e.heure,gtk_entry_get_text(GTK_ENTRY(lookup_widget(excursion,"entry10"))));
        strcpy(e.moyen_transport,gtk_entry_get_text(GTK_ENTRY(lookup_widget(excursion,"entry11"))));
        strcpy(e.depart,gtk_combo_box_get_active_text(GTK_COMBO_BOX(lookup_widget(excursion,"combobox59"))));
        strcpy(e.destination,gtk_combo_box_get_active_text(GTK_COMBO_BOX(lookup_widget(excursion,"combobox69"))));


        e.prix =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(excursion,"spinbutton6")));
        e.nbPlaceDispo =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(excursion,"spinbutton10")));


        supprimer_excursion(e.id);
        ajouter_excursion(e);
        Afficher_Excursion(lookup_widget(excursion,"treeview1"),"excursions.txt");
        GtkWidget* msg=lookup_widget(excursion,"label37");
        gtk_widget_show(msg);


}


void
on_VoitureAcceuil_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

gtk_widget_show (acceuil);
        gtk_widget_destroy (voiture);



}


void
on_AjouterVoiture_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *comboboxCarburant;
GtkWidget *comboboxMarque;



GtkWidget *labelsuccess;
GtkWidget *labelMarque;
GtkWidget *labelMatricule;
GtkWidget *labelCarburant;
GtkWidget *labelCouleur;
GtkWidget *labelOption;
GtkWidget *labelExist;
FILE*f=NULL;
Voiture v;
int b=1;


labelsuccess=lookup_widget(voiture,"label75");
labelExist=lookup_widget(voiture,"label76");
labelMatricule=lookup_widget(voiture,"label80");
labelMarque=lookup_widget(voiture,"label79");
labelCarburant=lookup_widget(voiture,"label78");
labelCouleur=lookup_widget(voiture,"label108");
labelOption=lookup_widget(voiture,"label109");




comboboxCarburant=lookup_widget(voiture,"combobox79");
comboboxMarque=lookup_widget(voiture,"combobox89");



           gtk_widget_hide (labelsuccess);

strcpy(v.matricule,gtk_entry_get_text(GTK_ENTRY(lookup_widget(voiture,"entry12"))));
strcpy(v.couleur,gtk_entry_get_text(GTK_ENTRY(lookup_widget(voiture,"entry18"))));
strcpy(v.option,gtk_entry_get_text(GTK_ENTRY(lookup_widget(voiture,"entry19"))));
if(strcmp(v.matricule,"")==0){
                gtk_widget_show (labelMatricule);
b=0;

}else
{
           gtk_widget_hide (labelMatricule);
}
if(strcmp(v.couleur,"")==0){
                gtk_widget_show (labelCouleur);
b=0;

}else
{
           gtk_widget_hide (labelCouleur);
}

if(strcmp(v.option,"")==0){
                gtk_widget_show (labelOption);
b=0;

}else
{
           gtk_widget_hide (labelOption);
}



if(gtk_combo_box_get_active (GTK_COMBO_BOX(comboboxMarque))==-1){
                gtk_widget_show (labelMarque);
b=0;
}
else{

           gtk_widget_hide (labelMarque);
}
if(gtk_combo_box_get_active (GTK_COMBO_BOX(comboboxCarburant))==-1){
                gtk_widget_show (labelCarburant);
b=0;
}
else{

           gtk_widget_hide (labelCarburant);
}



if(b==1){
v.prix =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(voiture,"spinbutton7")));

strcpy(v.marque,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxMarque)));
strcpy(v.carburant,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxCarburant)));







if(exist_voiture(v.matricule)==1) {

                gtk_widget_show (labelExist);

}
else{
           gtk_widget_hide (labelExist);

f=fopen("voitures.txt","a+");
fprintf(f,"%s %s %s %s %s %d\n",v.matricule,v.marque,v.carburant,v.couleur,v.option,v.prix);
fclose(f);
                gtk_widget_show (labelsuccess);


//mise a jour du treeView
GtkWidget *p;
p=lookup_widget(voiture,"treeview2");
Afficher_Voiture(p,"voitures.txt");



}

}













}


void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{


        gchar *matricule;
        gchar *marque;
        gchar *carburant;
        gchar *couleur;
        gchar *option;
        gint prix;


        gint x1,x2;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget *p=lookup_widget(voiture,"treeview2");
        GtkTreeSelection *selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
                gtk_tree_model_get (model,&iter,0,&matricule,1,&marque,2,&carburant,3,&couleur,4,&option,5,&prix,-1);//recuperer les information de la ligne selectionneé

                gtk_entry_set_text(GTK_ENTRY(lookup_widget(voiture,"entry20")),couleur);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(voiture,"entry21")),option);


                gtk_spin_button_set_value (GTK_SPIN_BUTTON(lookup_widget(voiture,"spinbutton8")),prix);









                if(strcmp(marque,"BMW")==0)	x1=0;		
                if(strcmp(marque,"Citroen")==0) x1=1;                
                if(strcmp(marque,"Audi")==0)  x1=2 ;             
                if(strcmp(marque,"Volkswagen")==0) x1=3;  
               


                if(strcmp(carburant,"Gazoil")==0) x2=0;                
                if(strcmp(carburant,"Essence")==0)  x2=1;               

      		  




                                 gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(voiture,"combobox109")),x1);
                                 gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(voiture,"combobox119")),x2);






		GtkWidget* msg=lookup_widget(voiture,"label121");
                gtk_label_set_text(GTK_LABEL(msg),matricule);
		


                gtk_widget_show(lookup_widget(voiture,"button23"));//afficher le bouton modifier
        GtkWidget* msg1=lookup_widget(voiture,"label111"); 
        gtk_widget_hide(msg1);//cacher "vol modifié avec succes"


}




















}


void
on_SupprimerVoiture_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

GtkTreeSelection *selection;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *label;
        gchar* matricule;
        label=lookup_widget(voiture,"label110");
        p=lookup_widget(voiture,"treeview2");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {  gtk_tree_model_get (model,&iter,0,&matricule,-1);
           gtk_list_store_remove(GTK_LIST_STORE(model),&iter);//supprimer la ligne du treeView

           supprimer_voiture(matricule);// supprimer la ligne du fichier

           gtk_widget_hide (label);}else{
                gtk_widget_show (label);
        }













}


void
on_LouerVoiture_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
 gchar *matricule;
        gchar *marque;
        gchar *carburant;
        gchar *couleur;
        gchar *option;
        gint prix;
	Voiture v;

        GtkWidget *label;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget *p=lookup_widget(voiture,"treeview2");
        GtkTreeSelection *selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        label=lookup_widget(voiture,"label110");
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
                gtk_tree_model_get (model,&iter,0,&matricule,1,&marque,2,&carburant,3,&couleur,4,&option,5,&prix,-1);//recuperer les information de la ligne selectionneé

		strcpy(v.matricule,matricule);
		strcpy(v.marque,marque);
		strcpy(v.carburant,carburant);
		strcpy(v.couleur,couleur);
		strcpy(v.option,option);
		v.prix=prix;
	

		
                louer_voiture(v,passwordGlobale);

	        gtk_widget_hide(label);
	}else{
                gtk_widget_show (label);
        }




}


void
on_ModifierVoiture_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
Voiture v;
        strcpy(v.matricule,gtk_label_get_text(GTK_LABEL(lookup_widget(voiture,"label121"))));
        strcpy(v.couleur,gtk_entry_get_text(GTK_ENTRY(lookup_widget(voiture,"entry20"))));
        strcpy(v.marque,gtk_combo_box_get_active_text(GTK_COMBO_BOX(lookup_widget(voiture,"combobox109"))));
        strcpy(v.carburant,gtk_combo_box_get_active_text(GTK_COMBO_BOX(lookup_widget(voiture,"combobox119"))));
        strcpy(v.option,gtk_entry_get_text(GTK_ENTRY(lookup_widget(voiture,"entry21"))));

        v.prix =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(voiture,"spinbutton8")));


        supprimer_voiture(v.matricule);
        ajouter_voiture(v);
        Afficher_Voiture(lookup_widget(voiture,"treeview2"),"voitures.txt");
        GtkWidget* msg=lookup_widget(voiture,"label111");
        gtk_widget_show(msg);



}


void
on_ChercherVoiture_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{


GtkWidget *p1;
GtkWidget *entry;
GtkWidget *labelMarque;
GtkWidget *nbResultat;
GtkWidget *message;
char marque[30];
char chnb[30];
int b=0,nb;
entry=lookup_widget(voiture,"entry22");
labelMarque=lookup_widget(voiture,"label126");
p1=lookup_widget(voiture,"treeview3");

strcpy(marque,gtk_entry_get_text(GTK_ENTRY(entry)));
if(strcmp(marque,"")==0){
  gtk_widget_show (labelMarque);b=0;
}else{
b=1;
gtk_widget_hide (labelMarque);}

if(b==0){return;}else{

nb=ChercherVoiture(p1,"voitures.txt",marque);
/* afficher le nombre de resultats obtenue par la recherche */
sprintf(chnb,"%d",nb);
nbResultat=lookup_widget(voiture,"label127");
message=lookup_widget(voiture,"label128");
gtk_label_set_text(GTK_LABEL(nbResultat),chnb);

gtk_widget_show (nbResultat);
gtk_widget_show (message);


}

}


void
on_logout_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
login = create_login ();
  gtk_widget_show (login);
gtk_widget_destroy (acceuil);


}


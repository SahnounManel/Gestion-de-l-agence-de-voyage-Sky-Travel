#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include "devisclient.h"


enum
{
ID,
DATE,
TYPE_PRESTATION,

COLUMNS
};

void afficher_devis(GtkWidget *treeview202)
{
 GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
    char id_devis[10];
    char id_client[10];
    char date[15];
    char type_prestation[10];
    char montant[10];
    char code_promo[10];
    char total[10];


store=NULL;
FILE *f;
store=gtk_tree_view_get_model(treeview202);
if (store==NULL)
{
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("id_devis",renderer, "text",ID,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview202),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("date",renderer, "text",DATE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview202),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("type_prestation",renderer, "text",TYPE_PRESTATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview202),column);


}
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,
G_TYPE_STRING,G_TYPE_STRING);
f=fopen("devis.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("devis.txt","a+");
	while(fscanf(f,"%s %s %s %s %s %s %s\n",id_client,id_devis,date,type_prestation,montant,code_promo,total)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,ID,id_devis,DATE,date,TYPE_PRESTATION,type_prestation,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview202), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}
void afficher_facture(GtkWidget *treeview203)
{
 GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
    char id_devis[10];
    char id_client[10];
    char date[15];
    char type_prestation[10];
    char montant[10];
    char code_promo[10];
    char total[10];


store=NULL;
FILE *f;
store=gtk_tree_view_get_model(treeview203);
if (store==NULL)
{
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("id_devis",renderer, "text",ID,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview203),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("date",renderer, "text",DATE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview203),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("type_prestation",renderer, "text",TYPE_PRESTATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview203),column);


}
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,
G_TYPE_STRING,G_TYPE_STRING);
f=fopen("devis.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("factures.txt","a+");
	while(fscanf(f,"%s %s %s %s %s %s %s\n",id_client,id_devis,date,type_prestation,montant,code_promo,total)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,ID,id_devis,DATE,date,TYPE_PRESTATION,type_prestation,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview203), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}

void Supprimer_devis_ft(char ID_devis[],char *f)
{

    devis d;
  FILE* fichierIn=NULL;
  FILE* fichierOut=NULL;

 if ((fichierIn = fopen(f, "r")) == NULL)
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("deviscopie.txt","a+")) == NULL)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){

      fscanf(fichierIn,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);
      if (strcmp(d.id_devis,ID_devis)!=0)
      fprintf(fichierOut,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);



      }

    fclose(fichierIn);
    fclose(fichierOut);

    remove(f);
    rename("deviscopie.txt",f);
    
}

void Supprimer_facture_ft(char ID_facture[],char *f)
{

    devis d;
  FILE* fichierIn=NULL;
  FILE* fichierOut=NULL;

 if ((fichierIn = fopen(f, "r")) == NULL)
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("deviscopie.txt","a+")) == NULL)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){

      fscanf(fichierIn,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);
      if (strcmp(d.id_devis,ID_facture)!=0)
      fprintf(fichierOut,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);



      }

    fclose(fichierIn);
    fclose(fichierOut);

    remove(f);
    rename("deviscopie.txt",f);
    
}

void ajouter_payement(carte c)
{
    
    FILE* fichier=NULL;
    fichier=fopen("carte.txt","a+");
    if (fichier!=NULL)
    {   
        fprintf(fichier,"%s %s %s\n",c.ncarte,c.dexp,c.mpasse);
    }

    
    fclose(fichier);
}




void Chercher2_devis(char *f,char ID_devis[])
{

devis d;
int s=0;
 

FILE *fichier=NULL;
fichier=fopen(f,"r");

 if (fichier!= NULL)
    {
while(fscanf(fichier,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total)!=EOF){
       


            if (strcmp(d.id_devis,ID_devis)==0)
                {strcpy(ID_devis,d.total);
		
s=1;}}fclose(fichier);		
          }
if(s==0)
strcpy(ID_devis,"introuvable");
          }


void modifier3_devis_ft(char ID_devis[],char *f)
{
int s=0;
    devis d;
  FILE* fichierIn=NULL;
  FILE* fichierOut=NULL;

 if ((fichierIn = fopen(f, "r")) == NULL)
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("factures.txt", "a+")) == NULL)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){

  fscanf(fichierIn,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);
      if (strcmp(d.id_devis,ID_devis)==0)
      {
fprintf(fichierOut,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);
s=1;}
 }

    fclose(fichierIn);
    fclose(fichierOut);

}

void Supprimer22_devis_ft(char ID_facture[],char *f)
{

    devis d;
  FILE* fichierIn=NULL;
  FILE* fichierOut=NULL;

 if ((fichierIn = fopen(f, "r")) == NULL)
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("deviscopie.txt","a+")) == NULL)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){

      fscanf(fichierIn,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);
      if (strcmp(d.id_devis,ID_facture)!=0)
      fprintf(fichierOut,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);



      }

    fclose(fichierIn);
    fclose(fichierOut);

    remove(f);
    rename("deviscopie.txt",f);
    
}




















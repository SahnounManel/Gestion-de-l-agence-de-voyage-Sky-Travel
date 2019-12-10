#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include "devis.h"


enum
{
ID_CLIENT,
ID,
DATE,
TYPE_PRESTATION,

COLUMNS
};






void ajouter_devis(devis d)
{
    
    FILE* fichier=NULL;
    fichier=fopen("devis.txt","a+");
    if (fichier!=NULL)
    {   
        fprintf(fichier,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis, d.date,d.type_prestation,d.montant,d.code_promo,d.total);
    }

    
    fclose(fichier);
}


void afficher_devis(GtkWidget *treeview200)
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
store=gtk_tree_view_get_model(treeview200);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("id_client",renderer, "text",ID_CLIENT,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview200),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("id_devis",renderer, "text",ID,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview200),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("date",renderer, "text",DATE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview200),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("type_prestation",renderer, "text",TYPE_PRESTATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview200),column);


}
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,
G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
f=fopen("devis.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("devis.txt","a+");
	while(fscanf(f,"%s %s %s %s %s %s %s\n",id_client,id_devis,date,type_prestation,montant,code_promo,total)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,ID_CLIENT,id_client,ID,id_devis,DATE,date,TYPE_PRESTATION,type_prestation,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview200), GTK_TREE_MODEL (store));
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

void Chercher_devis(char *f,char ID_devis[])
{

devis d;
int s=0;
 

FILE *fichier=NULL;
fichier=fopen(f,"r");

 if (fichier!= NULL)
    {
while(fscanf(fichier,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total)!=EOF){
       


            if (strcmp(d.id_devis,ID_devis)==0)
                {strcpy(ID_devis,d.montant);
		strcat(ID_devis,"____");	
		 strcat(ID_devis,d.code_promo);
		strcat(ID_devis,"_____");
		strcat(ID_devis,d.total);
s=1;}}fclose(fichier);		
          }
if(s==0)
strcpy(ID_devis,"introuvable");
          }





void modifier1_devis_ft(char ID_devis[],char *f,char mot[30])
{
int s=0;
    devis d;
  FILE* fichierIn=NULL;
  FILE* fichierOut=NULL;

 if ((fichierIn = fopen(f, "r")) == NULL)
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("deviscopie.txt", "a+")) == NULL)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){

  fscanf(fichierIn,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);
      if (strcmp(d.id_devis,ID_devis)==0)
      {
       strcpy(d.code_promo,mot);
       
fprintf(fichierOut,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);
s=1;}
else
 fprintf(fichierOut,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);     }

    fclose(fichierIn);
    fclose(fichierOut);

    remove(f);
    rename("deviscopie.txt", f);
    if(s==1)
    printf("modification effectuée avec succés \n");
}

void modifier2_devis_ft(char ID_devis[],char *f,char mot[30])
{
int s=0;
    devis d;
  FILE* fichierIn=NULL;
  FILE* fichierOut=NULL;

 if ((fichierIn = fopen(f, "r")) == NULL)
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("deviscopie.txt", "a+")) == NULL)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){

  fscanf(fichierIn,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);
      if (strcmp(d.id_devis,ID_devis)==0)
      {
       strcpy(d.total,mot);
       
fprintf(fichierOut,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);
s=1;}
else
 fprintf(fichierOut,"%s %s %s %s %s %s %s \n",d.id_client,d.id_devis,d.date,d.type_prestation,d.montant,d.code_promo,d.total);     }

    fclose(fichierIn);
    fclose(fichierOut);

    remove(f);
    rename("deviscopie.txt", f);
    if(s==1)
    printf("modification effectuée avec succés \n");
}



void afficher_facture(GtkWidget *treeviewf)
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
store=gtk_tree_view_get_model(treeviewf);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("id_client",renderer, "text",ID_CLIENT,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeviewf),column);
renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("id_devis",renderer, "text",ID,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeviewf),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("date",renderer, "text",DATE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeviewf),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("type_prestation",renderer, "text",TYPE_PRESTATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeviewf),column);


}
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,
G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
f=fopen("factures.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("factures.txt","a+");
	while(fscanf(f,"%s %s %s %s %s %s %s\n",id_client,id_devis,date,type_prestation,montant,code_promo,total)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,ID_CLIENT,id_client,ID,id_devis,DATE,date,TYPE_PRESTATION,type_prestation,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeviewf), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"reclamation.h"

#include <gtk/gtk.h>

enum
{	
	PRESTATION,
        ID_RECLAMATION,
	DATE_RECLAMATION,
        ID_CLIENT,
	COLUMNS
};

void Supprimer_reclamation_ft(char ID_Reclamation[],char *f)
{
int s=1;
    reclamation r;
  FILE* fichierIn=NULL;
  FILE* fichierOut=NULL;

 if ((fichierIn = fopen(f, "r")) == NULL)
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("reclamationcopie.txt","a+")) == NULL)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){

      fscanf(fichierIn,"%s %s %s %s %s\n",r.ID_client,r.ID_reclamation,r.date_reclamation,r.prestation,r.reclamation);
      if (strcmp(r.ID_reclamation,ID_Reclamation)!=0)
      {fprintf(fichierOut,"%s %s %s %s %s\n",r.ID_client,r.ID_reclamation,r.date_reclamation,r.prestation,r.reclamation);
      s=0;}


      }

    fclose(fichierIn);
    fclose(fichierOut);

    remove(f);
    rename("reclamationcopie.txt",f);
   if(s==0)
    strcpy(ID_Reclamation,"introuvable");
    else
    strcpy(ID_Reclamation,"suppression effectuée avec succés"); 
}

void afficher_admin(GtkWidget *treeview2)
{
 GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
int prestation[30];
int date_reclamation[30];
int ID_reclamation[30];
int ID_client[30];

store=NULL;
FILE *f;
store=gtk_tree_view_get_model(treeview2);
if (store==NULL)
{renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("ID_client",renderer, "text",ID_CLIENT,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview2),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("ID_reclamation",renderer, "text",ID_RECLAMATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview2),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("date_reclamation",renderer, "text",DATE_RECLAMATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview2),column);

renderer=gtk_cell_renderer_text_new ();
column=gtk_tree_view_column_new_with_attributes("prestation",renderer, "text",PRESTATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW(treeview2),column);
}
store=gtk_list_store_new(COLUMNS,
G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);
f=fopen("reclamation.txt","r");
if(f==NULL)
{return;}
else
{f=fopen("reclamation.txt","a+");
	while(fscanf(f,"%s %s %s %s\n",ID_client,ID_reclamation,prestation,date_reclamation)!=EOF)
	{
	gtk_list_store_append(store,&iter);
	gtk_list_store_set(store,&iter,ID_CLIENT,ID_client,ID_RECLAMATION,ID_reclamation,PRESTATION,prestation,DATE_RECLAMATION,date_reclamation,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview2), GTK_TREE_MODEL (store));
	g_object_unref (store);
	}
}


void Chercher_reclamation(char *f,char ID_Reclamation[])
{

reclamation r;
int s=0;
 

FILE *fichier=NULL;
fichier=fopen(f,"r");

 if (fichier!= NULL)
    {
while(fscanf(fichier,"%s %s %s %s %s ",r.ID_client,r.ID_reclamation,r.date_reclamation,r.prestation,r.reclamation)!=EOF){
       


            if (strcmp(r.ID_reclamation,ID_Reclamation)==0)
                {strcpy(ID_Reclamation,r.reclamation);
s=1;}}fclose(fichier);		
          }
if(s==0)
strcpy(ID_Reclamation,"introuvable");
          }


void modifier_reclamation_ft(char ID_Reclamation[],char *f,char mot[30])
{
int s=0;
    reclamation r;
  FILE* fichierIn=NULL;
  FILE* fichierOut=NULL;

 if ((fichierIn = fopen(f, "r")) == NULL)
        printf("ERREUR: Verifiez le nom de fichier de lecture");

 if ((fichierOut = fopen("reclamationcopie.txt", "a+")) == NULL)
    {
        fclose(fichierIn);
        printf("ERREUR: Verifiez le nom de fichier d'ecriture");
    }


while(!feof(fichierIn)){

  fscanf(fichierIn,"%s %s %s %s %s",r.ID_client,r.ID_reclamation,r.date_reclamation,r.prestation,r.reclamation);
      if (strcmp(r.ID_reclamation,ID_Reclamation)==0)
      {//strcat(r.reclamation," ");
       strcat(r.reclamation,"___reponse:___");
       strcat(r.reclamation, mot);
       
fprintf(fichierOut,"%s %s %s %s %s \n",r.ID_client,r.ID_reclamation,r.date_reclamation,r.prestation,r.reclamation);
s=1;}
else
 fprintf(fichierOut,"%s %s %s %s %s \n",r.ID_client,r.ID_reclamation,r.date_reclamation,r.prestation,r.reclamation);     }

    fclose(fichierIn);
    fclose(fichierOut);

    remove(f);
    rename("reclamationcopie.txt", f);
    
    if(s==0)
    strcpy(ID_Reclamation,"le champs est vide");
    else
    strcpy(ID_Reclamation,"modification effectuée avec succés");

}





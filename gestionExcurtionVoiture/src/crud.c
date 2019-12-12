#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "callbacks.h"
#include<string.h>
#include"crud.h"


/******************************LOGIN******************************************/

int existusers(char*name,char*id,char*path){
FILE*f=NULL;

char idf[20];
char namef[20];
f=fopen(path,"r");

while(fscanf(f,"%s %s\n",namef,idf)!=EOF){
if((strcmp(id,idf)==0)&&(strcmp(name,namef)==0))return (1);
}
fclose(f);
return -1;
}










/******************************VOITURE******************************************/

void ajouter_voiture( Voiture v){
FILE*f=NULL;
f=fopen("voitures.txt","a+");
fprintf(f,"%s %s %s %s %s %d\n",v.matricule,v.marque,v.carburant,v.couleur,v.option,v.prix);
fclose(f);
}

int exist_voiture(char*matricule){
FILE*f=NULL;
 Voiture v;
f=fopen("voitures.txt","r");
while(fscanf(f,"%s %s %s %s %s %d\n",v.matricule,v.marque,v.carburant,v.couleur,v.option,&v.prix)!=EOF)
{
if(strcmp(matricule,v.matricule)==0)return 1;
}
fclose(f);
return 0;
}


void supprimer_voiture(char*matricule){
FILE*f=NULL;
FILE*f1=NULL;
 Voiture v;
f=fopen("voitures.txt","r");

f1=fopen("ancien.txt","w+");
while(fscanf(f,"%s %s %s %s %s %d\n",v.matricule,v.marque,v.carburant,v.couleur,v.option,&v.prix)!=EOF)
{
if(strcmp(matricule,v.matricule)!=0)fprintf(f1,"%s %s %s %s %s %d\n",v.matricule,v.marque,v.carburant,v.couleur,v.option,v.prix);
}
fclose(f);
fclose(f1);
remove("voitures.txt");
rename("ancien.txt","voitures.txt");
}

void louer_voiture( Voiture v,char*id){

FILE*f=NULL;
f=fopen("location_voitures.txt","a+");
fprintf(f,"%s %s %s %s %s %d %s\n",v.matricule,v.marque,v.carburant,v.couleur,v.option,v.prix,id);
fclose(f);


}
/******************************EXCURSION******************************************/


int exist_excursion(char*id){
FILE*f=NULL;
 Excursion e;
f=fopen("excursions.txt","r");
while(fscanf(f,"%s %s %s %s %s %s %d %d\n",e.id,e.date,e.heure,e.depart,e.destination,e.moyen_transport,&e.nbPlaceDispo,&e.prix)!=EOF)
{
if(strcmp(id,e.id)==0)return 1;
}
fclose(f);
return 0;
}


void supprimer_excursion(char*id){
FILE*f=NULL;
FILE*f1=NULL;
 Excursion e;
f=fopen("excursions.txt","r");

f1=fopen("ancien.txt","w+");
while(fscanf(f,"%s %s %s %s %s %s %d %d\n",e.id,e.date,e.heure,e.depart,e.destination,e.moyen_transport,&e.nbPlaceDispo,&e.prix)!=EOF)
{
if(strcmp(id,e.id)!=0)fprintf(f1,"%s %s %s %s %s %s %d %d\n",e.id,e.date,e.heure,e.depart,e.destination,e.moyen_transport,e.nbPlaceDispo,e.prix);
}
fclose(f);
fclose(f1);
remove("excursions.txt");
rename("ancien.txt","excursions.txt");
}

void ajouter_excursion( Excursion e){
FILE*f=NULL;
f=fopen("excursions.txt","a+");
fprintf(f,"%s %s %s %s %s %s %d %d\n",e.id,e.date,e.heure,e.depart,e.destination,e.moyen_transport,e.nbPlaceDispo,e.prix);
fclose(f);
}

void Reserver_excursion( Excursion e,int nbE,char*passwordGlobale){

FILE*f=NULL;
f=fopen("reservation_excurtion.txt","a+");
fprintf(f,"%s %s %s %s %s %s %d %d %s\n",e.id,e.date,e.heure,e.depart,e.destination,e.moyen_transport,nbE,e.prix*nbE,passwordGlobale);
fclose(f);


}







































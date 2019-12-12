#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "callbacks.h"
#include<string.h>


void ajouter_vol( vol v){
FILE*f=NULL;
f=fopen("vols.txt","a+");
fprintf(f,"%s %s %s %s %s %s %s %d %d\n",v.id,v.depart,v.destination,v.classe,v.companie,v.date_depart,v.date_retour,v.nbVols,v.prix);
fclose(f);

}

int exist_vol(char*id){
FILE*f=NULL;
 vol v;
f=fopen("vols.txt","r");
while(fscanf(f,"%s %s %s %s %s %s %s %d %d\n",v.id,v.depart,v.destination,v.classe,v.companie,v.date_depart,v.date_retour,&v.nbVols,&v.prix)!=EOF)
{
if(strcmp(id,v.id)==0)return 1;
}
fclose(f);
return 0;
}


void supprimer_vol(char*id){
FILE*f=NULL;
FILE*f1=NULL;
 vol v;
f=fopen("vols.txt","r");

f1=fopen("ancien.txt","w+");
while(fscanf(f,"%s %s %s %s %s %s %s %d %d\n",v.id,v.depart,v.destination,v.classe,v.companie,v.date_depart,v.date_retour,&v.nbVols,&v.prix)!=EOF)
{
if(strcmp(id,v.id)!=0)fprintf(f1,"%s %s %s %s %s %s %s %d %d\n",v.id,v.depart,v.destination,v.classe,v.companie,v.date_depart,v.date_retour,v.nbVols,v.prix);
}
fclose(f);
fclose(f1);
remove("vols.txt");
rename("ancien.txt","vols.txt");
}
/*************************************************************************/


void ajouter_reservation(vol v,int nb,char*cin)
{
FILE*f=NULL;
f=fopen("reservation.txt","a+");
fprintf(f,"%s %s %s %s %s %s %s %d %d %s\n",v.id,v.depart,v.destination,v.classe,v.companie,v.date_depart,v.date_retour,nb,v.prix,cin);
fclose(f);
}

void modifier_vol(vol v,int nb){
FILE*f=NULL;
FILE*f1=NULL;
vol r ;
f=fopen("vols.txt","r");
f1=fopen("ancien.txt","w+");
while(fscanf(f,"%s %s %s %s %s %s %s %d %d\n",r.id,r.depart,r.destination,r.classe,r.companie,r.date_depart,r.date_retour,&r.nbVols,&r.prix)!=EOF){
if(strcmp(v.id,r.id)!=0)
{
fprintf(f1,"%s %s %s %s %s %s %s %d %d\n",r.id,r.depart,r.destination,r.classe,r.companie,r.date_depart,r.date_retour,r.nbVols,r.prix);
}
else
{
fprintf(f1,"%s %s %s %s %s %s %s %d %d\n",r.id,r.depart,r.destination,r.classe,r.companie,r.date_depart,r.date_retour,r.nbVols-nb,r.prix);
}

}
fclose(f);
fclose(f1);
remove("vols.txt");
rename("ancien.txt","vols.txt");
}






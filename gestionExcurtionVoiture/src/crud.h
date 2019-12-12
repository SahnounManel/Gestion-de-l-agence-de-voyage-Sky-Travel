int existusers(char*name,char*id,char*path);
void ajouter_voiture( Voiture v);
int exist_voiture(char*matricule);
void supprimer_voiture(char*matricule);
void louer_voiture( Voiture v,char*id);



/********************EXCURSION ************/



int exist_excursion(char*id);
void supprimer_excursion(char*id);
void ajouter_excursion( Excursion e);
void Reserver_excursion( Excursion e,int nbE,char*passwordGlobale);

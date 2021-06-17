#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>


void tree_(void) /*SANS OPTION*/
{
    DIR * rep = opendir(".");

    if (rep != NULL)
    {
        struct dirent * ent;

        while ((ent = readdir(rep)) != NULL)
        {
            printf("%s\n", ent->d_name);

        }

        closedir(rep);
    }

    return 0;
}


int tree_a(void)/*affiche tout (dossiers + fichiers)*/
{
    DIR * rep = opendir(".");

    if (rep != NULL)
    {
        struct dirent * ent;

        while ((ent = readdir(rep)) != NULL)
        {
            printf("%s\n", ent->d_name);

        }

        closedir(rep);
    }

    return 0;
}

int tree_d(void)/*affiche seulement les dossiers*/
{
    DIR * rep = opendir(".");
    struct dirent* ent;

    if ((strchr(ent->d_name, '.')) == NULL) /* Si le nom du fichier n'a pas de point (extension). */
        if (rep != NULL)
        {


            while ((ent = readdir(rep)) != NULL)
            {
                printf("%s\n", ent->d_name);

            }

        closedir(rep);
        }

    return 0;
}

void tree_L()
{

}

void tree_f()
{

}

int main()
{
    char option;

    printf("Entrez une option ('a','d','L','f' ou '/' pour aucune option): ");
    scanf("%c",&option);
    printf("Ce que vous venez de saisir '%c'\n",option);

    if (option == 'a'){
        printf("'%c'\n",option);
        tree_a();
    }
    else if (option == 'd'){
        tree_d();
    }
    else if (option == 'L'){
        tree_L();
    }
    else if (option == 'f'){
        tree_f;
    }
    else{
        tree_();
    }

}

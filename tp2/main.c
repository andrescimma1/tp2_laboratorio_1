#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "ArrayEmployes.h"

#define ELEMENTS 1000 //Nómina
#define ELEMENTSSEC 5

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;

typedef struct
{
    int id;
    char description[20];
}Sectors;

int initEmployees(Employee* list, int len);
void showSectors(Sectors* listsec, int lensec);
int addEmployee(Employee* list, int len, int id, char name[],char
lastName[],float salary,int sector, Sectors* listsec, int lensec);

int main()
{
    int r; //esta variable sirve para el retorno
    Employee arrayEmployees[ELEMENTS];
    Sectors arraySectors[ELEMENTSSEC] = {
                                {1, "Perfumery"},
                                {2, "Human rights"},
                                {3, "Economy"},
                                {4, "Systems"},
                                {5, "Transport"}
                                };
    r = initEmployees(arrayEmployees, ELEMENTS);
    //showSectors(arraySectors, ELEMENTSSEC);
    addEmployee(arrayEmployees, ELEMENTS, id, nam)

    return r;
}

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(Employee* list, int len)
{
    int i;
    for(i=0; i<len; i++)
    {
         list[i].isEmpty = 0;
    }
    return 0;
}

/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
 *  free space] - (0) if Ok
 */
int addEmployee(Employee* list, int len, int id, char name[],char
lastName[],float salary,int sector, Sectors* listsec, int lensec)
{
    int indice;
    int i;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }

    printf("Enter name: ");
    gets(list[indice].name);

    printf("Enter last name: ");
    gets(list[indice].lastName);

    printf("Enter salary: ");
    scanf("%f", &list[indice].salary);

    showSectors(listsec, lensec);

    printf("Enter sector ID: ");
    scanf("%d", &list[indice].sector);


    list[indice].isEmpty = 1;

    return 0;
}

void showSectors(Sectors* listsec, int lensec)
{
    int i;

    system("cls");

    printf("*** SECTORES ***\n");
    printf("________________\n");
    printf("ID        SECTOR\n");

    for(i=0; i<lensec; i++)
    {
        printf("%d        %10s\n", listsec[i].id, listsec[i].description);
    }
}

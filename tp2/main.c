#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "ArrayEmployes.h"

#define ELEMENTS 1000 //Nómina

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;

void initEmployees(Employee* list, int len);

int main()
{
    Employee arrayEmployees[ELEMENTS];
    initEmployees(arrayEmployees, ELEMENTS);
    return 0;
}

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
void initEmployees(Employee* list, int len)
{
    int i;
    for(i=0; i<len; i++)
    {
         list[i].isEmpty = 0;
    }
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
lastName[],float salary,int sector)
{
 return -1;
}



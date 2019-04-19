#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "ArrayEmployes.h"

#define TAM 1000 //N�mina

struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}typedef Employee;

void initEmployees(Employee vec[], int len);

int main()
{
    Employee list[TAM];
    initEmployees(list, TAM);
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
void initEmployees(Employee vec[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        vec[i].isEmpty = 0;
    }
}


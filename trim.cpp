/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>
#include "stdio.h"

void trim(char* str, char* trimmed)
{
  if (strcmp(str,"") == 0)
  {
    strcpy(trimmed,"");
  }
  else
  {

    strcpy(trimmed,str);

    int counter = 0 ;
    int length = strlen(str)-1;
    while (str[counter] == ' ')
    {
      counter++;
    }
    for (int i = 0; i < length ; i++)
    {
      trimmed[i] = str[counter];
       counter++;
    }

    length = strlen(trimmed);
    for (int i = 0; i < length; i++)
    {
      if ( trimmed[i] == ' ' && trimmed[i+1] == ' ')
      {
        trimmed[i] = '\0';
      }
    }

  }
}

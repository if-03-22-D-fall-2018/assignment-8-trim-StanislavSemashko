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
  }
}

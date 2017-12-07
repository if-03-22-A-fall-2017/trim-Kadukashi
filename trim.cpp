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

 void trim(const char* source, char* trimmed_string)
 {
    int len = strlen(source);
    char opiString[STRLEN];
    char newString[STRLEN];
    int countForwards = 0;
    int countBackwards = len;

    while(source[countForwards] == ' ') {
        countForwards++;
    }
    while(source[countBackwards] == ' ') {
        countBackwards--;
    }
    if (len == 0) {
      strcpy(trimmed_string, source);
    }
    else
    {
      int len1 = len - countBackwards;
      for (int i = 0; i < len2; i++) {
        opiString[i] = source[i];
      }
      for (int i = 0; i < len; i++) {
        newString[i] = opiString[i];
      }
      strcpy(trimmed_string, newString);
    }

 }

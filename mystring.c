//
//  mystring.c
//  Systems
//
//  Created by Theodore Fahey on 10/8/21.
//

#include "mystring.h"
#include <stdio.h>
int mystrlen(char *s){
  int count = 0;
  while (*s++){
    count++;
  }
  return count;
}
char * mystrcpy(char *dest, char *source){
  int count = 1;
  *dest++ = *source++;
  while (*(source-1)){
    count++;
    *dest++ = *source++;
      }
  return (dest-count);
}
char * mystrncat(char *dest, char* source, int n){
  char * ans = dest;
  while (*dest){
   
    dest++;
  }
  *dest++ = *source++;
  n--;
  while (*(source-1) && n > 0){
   
    *dest++ = *source++;
    n--;
  }
  return (ans);
 
}
int mystrcmp(char *s1, char *s2){
    while((*s1) || (*s2)){
        if(*s1 != *s2){
            return *s1-*s2;
        }
        s1++;
        s2++;
        
    }
    return 0;
}
char * mystrchr(char *s, char c){
    while (*s){
        if (*s == c){
            return s;
        }
        s++;
        
    }
    if (*s == c){
        return s;
    }
    return NULL;
}

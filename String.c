//
//  String.c
//  Systems
//
//  Created by Theodore Fahey on 10/8/21.
//

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
int main(){
  char s[10] = "hello";
  int q1 = mystrlen(s);
  printf("MyStrLen of hello: %d\n",q1);
  char q2[10];
  char s2[] = "hello";
  char t = 'e';
  printf("MyStrCopy : %s\n", mystrcpy(q2, s));
  printf("myNcat: %s\n", mystrncat(s,s2,3));
  printf("mystrcmp: %d\n", mystrcmp(s,s));
  printf("mystrchr: %s\n", mystrchr(s, t));
}

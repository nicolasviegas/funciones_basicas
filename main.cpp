nicolasviegas
#3277



pablo-sz
Search

Welcome to #pablo-sz!
This is the start of the #pablo-sz channel.

Edit Channel

nicolasviegas — Today at 10:47 AM
typedef struct t_tarea{         
    char* nombre_tarea;
    int parametro_tarea; //verificar descartar basura que no tiene este parametro
    int posX_tarea;
    int posY_tarea;
    int duracion_tarea;
Expand
subdividirTareas.c
3 KB

Tomas Rossi — Today at 10:48 AM
#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

// --[ Funciones Basicas ]--

// Descripcion: Retorna la longitud de la cadena s
// Paramerto:
//    s - La cadena cuya longitud se desea conocer
// Retorna: la longitud de la cadena s
// Ejemplo: l
int length(string s)
{
  int i=0;
  while( s[i++]!='\0');
  return i-1;
}

// Retorna la cantidad de veces que la cadena s contiene a c
int charCount(string s,char c)
{
   int sum=0;
   for(int i=0; i<length(s); i++)
   {
      if( s[i]==c )
      {
         sum++;
      }
   }

   return sum;
}

// Retorna la subcadena de s comprendida entre d (inclusive) y h (no inclusive)
string substring(string s,int d,int h)
{
   string x="";
   for(int i=d; i<h; i++)
   {
      x+=s[i];
   }

   return x;
}

// Retorna la subcadena de s que va desde d (inclusive) hasta el final
string substring(string s,int d) // ok
{
   return substring(s,d,length(s));
}

// Retorna la posicion de la primer ocurrencia
// de c dentro s, o -1 si s no contiene a c
int indexOf(string s,char c) // ok
{
   for(int i=0;i<length(s); i++)
   {
      if(s[i]==c)
      {
         return i;
      }
   }

   return -1;
}

// Retorna la posicion de la primer ocurrencia de c dentro de s
// considerando la subcadena de s que va desde offset hasta el final.
// Ejemplo: indexOf("ALGORITMOS",'O',7) retorna: 1
int indexOf(string s,char c,int offSet) // ok
{
   string ns = substring(s,offSet,length(s));
   return indexOf(ns,c);
}

// Retorna la posicion de la ultima ocurrencia de c dentro de s
// o -1 si s no contiene a c
int lastIndexOf(string s,char c)
{
   for(int i=length(s)-1; i>=0;i++)
   {
      if(s[i]==c) return i;
   }

   return -1;
}

// Retorna la posicion de la n-esima ocurrencia de c dentro de s.
// Por ejemplo: indexOfN("pedro|pablo|juan|rolo",'|',2) retorna 11.
int indexOfN(string s,char c,int n)
{
   int offset=0;
   int x=-1;
   for(int i=0; i<n; i++)
   {
      x=indexOf(s,c,offset);
... (117 lines left)
Collapse
strings.hpp
4 KB
[10:48 AM]
#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
Expand
tokens.hpp
2 KB
[10:48 AM]
#ifndef _TARR_TAD_
#define _TARR_TAD_

#include <iostream>
#include <stdlib.h>
#include "../funciones/arrays.hpp"
Expand
Arr.hpp
3 KB
[10:48 AM]
#ifndef _TARRAYS_T_
#define _TARRAYS_T_

#include <iostream>

template <typename T> int add(T arr[], int& len, T v)
Expand
arrays.hpp
2 KB
[10:48 AM]
#ifndef _TARR_TAD_
#define _TARR_TAD_

#include <iostream>
#include <stdlib.h>
#include "../funciones/arrays.hpp"
Expand
Arr.hpp
3 KB
[10:48 AM]
#ifndef _TARR_TAD_
#define _TARR_TAD_

#include <iostream>
#include <stdlib.h>
#include "../funciones/arrays.hpp"
Expand
Arr.hpp
3 KB
[10:48 AM]
#ifndef _TSTACK_TAD_
#define _TSTACK_TAD_

#include <iostream>
#include "../funciones/lists.hpp"
Expand
Stack.hpp
1 KB
[10:48 AM]
#ifndef _TQUEUE_TAD_
#define _TQUEUE_TAD_

#include <iostream>
#include "../funciones/lists.hpp"
Expand
Queue.hpp
1 KB
[10:48 AM]
#ifndef _TLIST_TAD_
#define _TLIST_TAD_

#include <iostream>
#include "../funciones/lists.hpp"
Expand
List.hpp
2 KB
[10:48 AM]
#ifndef _TFILES_T_
#define _TFILES_T_

#include <iostream>
#include <stdio.h>
Expand
files.hpp
1 KB
[10:48 AM]
#ifndef _TMAP_TAD_
#define _TMAP_TAD_

#include <iostream>
#include "Arr.hpp"
Expand
Map.hpp
4 KB
[10:48 AM]
#ifndef _TLIST_T_
#define _TLIST_T_

#include <iostream>
#include <stdio.h>
Expand
lists.hpp
4 KB

Message #pablo-sz
﻿




ONLINE — 3

Groovy
BOT
Listening to /play

nicolasviegas

Tomas Rossi
Sharing their screen
Lounge

1


#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

// --[ Funciones Basicas ]--

// Descripcion: Retorna la longitud de la cadena s
// Paramerto:
//    s - La cadena cuya longitud se desea conocer
// Retorna: la longitud de la cadena s
// Ejemplo: l
int length(string s)
{
  int i=0;
  while( s[i++]!='\0');
  return i-1;
}

// Retorna la cantidad de veces que la cadena s contiene a c
int charCount(string s,char c)
{
   int sum=0;
   for(int i=0; i<length(s); i++)
   {
      if( s[i]==c )
      {
         sum++;
      }
   }

   return sum;
}

// Retorna la subcadena de s comprendida entre d (inclusive) y h (no inclusive)
string substring(string s,int d,int h)
{
   string x="";
   for(int i=d; i<h; i++)
   {
      x+=s[i];
   }

   return x;
}

// Retorna la subcadena de s que va desde d (inclusive) hasta el final
string substring(string s,int d) // ok
{
   return substring(s,d,length(s));
}

// Retorna la posicion de la primer ocurrencia
// de c dentro s, o -1 si s no contiene a c
int indexOf(string s,char c) // ok
{
   for(int i=0;i<length(s); i++)
   {
      if(s[i]==c)
      {
         return i;
      }
   }

   return -1;
}

// Retorna la posicion de la primer ocurrencia de c dentro de s
// considerando la subcadena de s que va desde offset hasta el final.
// Ejemplo: indexOf("ALGORITMOS",'O',7) retorna: 1
int indexOf(string s,char c,int offSet) // ok
{
   string ns = substring(s,offSet,length(s));
   return indexOf(ns,c);
}

// Retorna la posicion de la ultima ocurrencia de c dentro de s
// o -1 si s no contiene a c
int lastIndexOf(string s,char c)
{
   for(int i=length(s)-1; i>=0;i++)
   {
      if(s[i]==c) return i;
   }

   return -1;
}

// Retorna la posicion de la n-esima ocurrencia de c dentro de s.
// Por ejemplo: indexOfN("pedro|pablo|juan|rolo",'|',2) retorna 11.
int indexOfN(string s,char c,int n)
{
   int offset=0;
   int x=-1;
   for(int i=0; i<n; i++)
   {
      x=indexOf(s,c,offset);
      offset+=x+1;
   }
   return offset-1;
}

// Retorna el valor numerico de ch.
// Ejemplo: charToInt('4') retorna: 4.
int charToInt(char ch)
{
   return ch-'0';
}

// Retorna el valor char de i.
// Ejemplo: intToChar(4) retorna: '4'.
char intToChar(int i)
{
   return '0'+i;
}

// retorna el i-esimo digito de n contando desde la derecha
int getDigit(int n,int i) // ok
{
   int r1=n%(int)pow(10,i+1);
   return r1/(pow(10,i));
}

int digitCount(int i) // ok
{
   if( i==0)
   {
      return 1;
   }

   int n=0;
   double d=i;
   while( d>=1 )
   {
      d=d/10;
      n++;
   }

   return n;
}

string intToString(int num) // ok
{
   string x="";
   int n=digitCount(num);
   for(int i=0; i<n; i++)
   {
      //x=(char)('0'+getDigit(num,i))+x;
      x=intToChar(getDigit(num,i))+x;
   }

   return x;
}

int stringToInt(string s) // ok
{
   int n=length(s);
   int sum=0;
   for(int i=0; i<n; i++)
   {
      //    int d = s[n-i-1]-'0';
      int d = charToInt(s[n-i-1]);
      sum+=d*pow(10,i);
   }

   return sum;
}

string charToString(char c)
{
   return ""+c;
}

char stringToChar(string s)
{
   return s[0];
}

string doubleToString(double d)
{
   return "0.00 hardcodeado";
}

double stringToDouble(string s)
{
   return -1.111;
}

// --[/Funciones Basicas]--

// --[/Funciones Adicionales]--
string replicate(char c,int n)
{
   string s="";
   for(int i=0; i<n; i++)
   {
      s+=c;
   }

   return s;
}

string lpad(string s,int n,char c)
{
   return replicate(c,n-length(s))+s;
}

string rpad(string s,int n,char c)
{
   return s+replicate(c,n-length(s));
}

#endif

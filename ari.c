#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>
#include<math.h>

string ari(string);

string ari(string s)
{

float k,l=0,w=0,sen=0;
k= strlen(s);

for(int i=0;i<k;i++)
{  
   if(isalnum(s[i]))
   l++;
   if(s[i]==' ' && s[i+1]!=' ' )
   w++;
   if((s[i]=='.' && s[i+2]!='.') || s[i]=='!' || s[i]=='?')
   sen++;
   
 }
 w+=1;
 
 float kc;

 kc= (4.71*(l/w)) + (0.5*(w/sen)) - (21.43);
    if(ceil(kc)==1)
   return "Kintergarten";
   if(ceil(kc)==2)
   return "First/Second Grade";
   if(ceil(kc)==3)
   return "Third Grade";
   if(ceil(kc)==4)
   return "Fourth Grade";
   if(ceil(kc)==5)
   return "Fifth Grade";
   if(ceil(kc)==6)
   return "Sixth Grade";
   if(ceil(kc)==7)
   return "Seventh Grade";
   if(ceil(kc)==8)
   return "Eighth Grade";
   if(ceil(kc)==9)
   return "Ninth Grade";
   if(ceil(kc)==10)
   return "Tenth Grade";
   if(ceil(kc)==11)
   return "Eleventh Grade";
   if(ceil(kc)==12)
   return "Twelfth grade";
   if(ceil(kc)==13)
   return "College student";
   if(ceil(kc)>=14)
   return "Professor";
   
  }
   

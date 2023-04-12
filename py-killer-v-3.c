/*
 This simplevirus program was developed by M.Balakrishnan b.Tech(IT)
      ULTRA COLLEGE OF ENGINEERING & TECHNOLOGY
                        MADURAI

Description :
                It's easy to solved the probleam.But it's take time.
                The space is increased the problem also increased.
Probleam :
                TIME DELAY.
*/
#include<stdio.h>
void main()
{
        FILE *fp,*fpp;
        int d;
        char c;
        //location of target python file
        fp=fopen("/path/te.py","r");
        if(fp == NULL)
        {
                printf("file not found");
        }
        else
        {
                fpp=fopen("/path/ok.py","w");//new file creation.This is the simplevirus file.
                fclose(fpp);
                printf("file creation done");
                fpp=fopen("/path/ok.py","a");
                while(c != EOF)
                {
                        c=getc(fp);
                        if(c == 32)// Which time space is came in program that time if condition is true.
                        {
                               c='\n';// it's goto next line of the text        
                        }
                        fputc(c,fpp);
                }
                fclose(fp);
                fclose(fpp);
                printf("Virus upload Successfully...\n");
        }       
}


/*  ----------------------OUTPUT-------------------------

import
numpy
as
np
a
=
np.array([[0,0,0],[0,0,0],[0,0,0]])
b
=
np.array([[0,0,0],[0,0,0],[0,0,0]])
print("Enter
the
of
first
array:")
for
i
in
range(3):








for
j
in
range(3):
























a[i][j]=int(input("Enter
the
element
:
"))
print("Enter
the
second
array:
")
for
k
in
range(3):








for
l
in
range(3):
























b[k][l]=int(input("enter
the
element
:"))
print(a+b)  */


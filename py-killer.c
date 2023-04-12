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
        char c;
        //this is the original source good file.
        fp=fopen("/path/te.py","r");
        if(fp == NULL)
        {
                printf("file not found");
        }
        else
        {               //creat the another one python file this is simplevirus python file
                fpp=fopen("/path/ok.py","w");
                fclose(fpp);
                
                //again openthe file append mode.
                printf("file creation done\n");
                fpp=fopen("/path/ok.py","a");
                while(c != EOF)
                {
                        c=getc(fp);
                        if(c == 32)/*if any backspace is came in the source file then "!" is start the print the error_file(ok.py) 
                        ,not a original file*/
                        {
                                fputc('!',fpp);
                        }
                        fputc(c,fpp);        
                }
                fclose(fp);
                fclose(fpp);
                //confermation message.
                printf("Virus upload Successfully...\n");
        }      
}


/*     -------------------OUTPUT-----------------------
This is the ok.py simplevirus program. The space is replaced the -> "!"

import! numpy! as! np
a! =! np.array([[0,0,0],[0,0,0],[0,0,0]])
b! =! np.array([[0,0,0],[0,0,0],[0,0,0]])
print("Enter! the! of! first! array:")
for! i! in! range(3):
! ! ! ! ! ! ! ! for! j! in! range(3):! ! ! ! ! ! ! ! 
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! a[i][j]=int(input("Enter! the! element! :! "))
print("Enter! the! second! array:! ")
for! k! in! range(3):
! ! ! ! ! ! ! ! for! l! in! range(3):! ! ! ! ! ! ! ! 
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! b[k][l]=int(input("enter! the! element! :"))
print(a+b)
\FF
*/

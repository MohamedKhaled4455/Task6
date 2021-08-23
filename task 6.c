#include <stdio.h>
#include <stdlib.h>


//please make a file.txt and type what do you want
// also, please just run. why do you need to compile. just run and every thing will be ok.
char rev[50];
char write[50];



int main(){
read();                 //calling functions 
reverse();	
wri();
system("pause");
return 0;

}




//void read the text from the file
void  read(){
 char buffer[5];
 FILE *fp;
      if (fp == NULL ) 
            {   
              printf("Error! Could not open file\n"); 
            }
            printf("file opened successfully\n");
            
 fp = fopen ("Task 6.txt","r");	    // get the file ready for reading
 
 fscanf(fp, "%s", & buffer);  
            
               printf("string input from file: %s\n", buffer); 
              
}







//void reverse the text in the file
void reverse(){
 FILE *re;
   
 re = fopen ("Task 6.txt","r");	
 while ( fscanf(re, "%s", & rev ) == 1 )  
             { 
               printf("Reversed string:  %s\n",strrev(rev) ); /*here I repeated the read function but, I reversed the text that found in the file by function (strrev). 
			                                                    until here I don't print the reversed text in the file*/
             } 
}





//void write the reversed text in the file
void wri(){
	FILE *wr;
	wr = fopen ("Text 6.txt","w");
    fprintf(wr,"%s",rev);
              if (wr == NULL ) 
            {   
              printf("Error! Could not open file\n"); 
            }
            else
            printf("the reversed string is added to the file successfully\n");
 fclose(wr);
}


// github:   https://github.com/MohamedKhaled4455/Task6.git



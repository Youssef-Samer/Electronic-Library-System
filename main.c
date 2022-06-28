#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 100
FILE *fptr;
FILE *temptr;
char namex[50],idx[10],quantx[10];
void insertt();
void deletee();
void searchid();
void searchidd(char*);
void searchname();
int binsearch(char*,int,int);
void disp_sorted();
void disp_unsorted();
int i =3;
int nn=0;
int a ,flag=0,sentnum,op;
int ii,i11;
char name0[50],name1[50],name2[50],name[50];
char id0[10],id1[10],id2[10],id[10];
char quant0[10],quant1[10],quant2[10],quant[10];
typedef struct
{
    char name[50];
    char id[50];
    char quantity[50];
} books;
void binsearchh(char *name);
books library[25];
books librarye[25];
int counter=3,iii=0; //variables of the first function
int middle,result,i4,pass;//variables of the second function
char nullStr[20] = {"\0"};
    char namee[50];
    char idd[50];
    char quantityy[50];

int main()
{

fptr=fopen("database.dat","r+");
if(fptr==NULL)
{
    printf("File Not Found !! \n");
    return 0;
}
else
{

//>>>>>>>>>First Element

 fgets(name0,30,fptr);
 strcpy(library[0].name,name0);

 fgets(id0,30,fptr);
 strcpy(library[0].id,id0);

 fgets(quant0,30,fptr);
  strcpy(library[0].quantity,quant0);

//>>>>>>>>>Second Element

 fgets(name1,30,fptr);
 strcpy(library[1].name,name1);

 fgets(id1,30,fptr);
 strcpy(library[1].id,id1);

 fgets(quant1,30,fptr);
  strcpy(library[1].quantity,quant1);

//>>>>>>>>>Third Element

 fgets(name2,30,fptr);
 strcpy(library[2].name,name2);

 fgets(id2,30,fptr);
 strcpy(library[2].id,id2);

 fgets(quant2,30,fptr);
  strcpy(library[2].quantity,quant2);
  memcpy(&librarye, &library, sizeof(library));
do
{
  printf("********** Welcome To The Library **********\n\nPress 1 To Insert a Book.\nPress 2 To Delete a Book By ID.\nPress 3 To Search a Book By ID.\n");
  printf("Press 4 To Search a Book By Name.\nPress 5 To Display All Books Sorted By Name.\n");
  printf("Press 6 To Display All Books Unsorted.\n\n");
  scanf("%d",&a);
  getchar();

  if(a==1) {insertt();}

else if(a==2) {deletee();}

else if(a==3) {searchid();}

else if(a==4) {searchname();}

else if (a==5) {disp_sorted();}

else if(a==6) {disp_unsorted();}
else
{
    printf("Sorry , It seems you entered wrong operation number..\n");
    printf("\nDo You Want Another Operation ?\nPress 1 If Yes\nPress 2 If No\n:  ");
    scanf("%d",&op);
    if(op==1)
    system("cls");
    else
        fclose(fptr);
}}

while(op==1);}
    return 0;
}

//MY FUNCTIONS :

//INSERT FUNCTION :

void insertt()
{
      printf("\nPlease Enter The Book Name (The first letter of each word should be capitalized) : ");
  fseek(fptr,0,SEEK_END);

  gets(name);
  strcpy(library[i].name,name);
  strcpy(librarye[i].name,name);

  fputs(name,fptr);
  fflush(stdin);
  fputs("\n",fptr);
  fflush(stdin);

 printf("Please Enter The Book ID (Consisting of four integers) : ");
  gets(id);
  strcpy(library[i].id,id);
  strcpy(librarye[i].id,id);


  fputs(id,fptr);
  fflush(stdin);
  fputs("\n",fptr);
  fflush(stdin);

 printf("Please Enter The book Quantity : ");
  gets(quant);
  strcpy(library[i].quantity,quant);
  strcpy(librarye[i].quantity,quant);

  fputs(quant,fptr);
  fflush(stdin);
  fputs("\n",fptr);
  fflush(stdin);

  printf("Book Added To Your Library.\n");
  i++;
  counter++;
  fclose(fptr);
  fptr=fopen("database.dat","r+");


  printf("\nDo You Want Another Operation ?\nPress 1 If Yes\nPress 2 If No\n:  ");
  scanf("%d",&op);
   if(op==1)
  system("cls");
      else
        fclose(fptr);
}
// DELETE FUNCTION :

void deletee()
{
        printf("\nEnter The ID Of The Book You Want To Delete : ");
    fgets(id,10,stdin);

    for (ii = 0; ii < counter; ii++)
    {
        if (library[ii].id[0]==id[0] && library[ii].id[1]==id[1] && library[ii].id[2]==id[2] &&library[ii].id[3]==id[3] )
        { for(int i7=ii;i7<counter-1;i7++)
         {
         strcpy(namee,library[i7].name);
         strcpy(idd,library[i7].id);
         strcpy(quantityy,library[i7].quantity);


          strcpy(library[i7].name,library[i7+1].name);
          strcpy(library[i7].id,library[i7+1].id);
          strcpy(library[i7].quantity,library[i7+1].quantity);


          strcpy(library[i7+1].name,namee);
          strcpy(library[i7+1].id,idd);
          strcpy(library[i7+1].quantity,quantityy); }

            strcpy(library[counter-1].name, nullStr);
            strcpy(library[counter-1].id, nullStr);
            strcpy(library[counter-1].quantity, nullStr);
//=============================================
    for (i11 = 0; i11 < counter; i11++)
    {
        if (librarye[i11].id[0]==id[0] && librarye[i11].id[1]==id[1] && librarye[i11].id[2]==id[2] &&librarye[i11].id[3]==id[3] )
        { for(int i7=i11;i7<counter-1;i7++)
         {
         strcpy(namee,librarye[i7].name);
         strcpy(idd,librarye[i7].id);
         strcpy(quantityy,librarye[i7].quantity);


          strcpy(librarye[i7].name,librarye[i7+1].name);
          strcpy(librarye[i7].id,librarye[i7+1].id);
          strcpy(librarye[i7].quantity,librarye[i7+1].quantity);


          strcpy(librarye[i7+1].name,namee);
          strcpy(librarye[i7+1].id,idd);
          strcpy(librarye[i7+1].quantity,quantityy); }

            strcpy(librarye[counter-1].name, nullStr);
            strcpy(librarye[counter-1].id, nullStr);
            strcpy(librarye[counter-1].quantity, nullStr);}}

            printf("\nBook Removed From Your Library.\n");
            flag=1;
            i--;
            sentnum=(3*(ii+1))-1;
            temptr=fopen("temp.dat","a+");

            if(temptr==NULL)

               {
                 printf("Error Occurred When Deleting !!\n");
                            return 0;   }

            else

               {    rewind(fptr);
                    char buffer[BUFFER_SIZE];
                    int count = 1;
                    while ((fgets(buffer, BUFFER_SIZE, fptr)) != NULL)
                         {

                          if (sentnum != count && sentnum-1 != count && sentnum+1 != count)
                          fputs(buffer, temptr);
                          count++;

                          }
                        fclose(fptr);
                        remove("database.dat");
                        fclose(temptr);
                        rename("temp.dat", "database.dat");
                        fptr=fopen("database.dat","r+");
                        counter--;

               }

                                break;} }


                            if (flag==0)
                        printf("Book Not Found !!\n");

    printf("\nDo You Want Another Operation ?\nPress 1 If Yes\nPress 2 If No\n:  ");
    scanf("%d",&op);
     if(op==1)
    system("cls");
        else
        fclose(fptr);
}
//SEARCH BY ID FUNCTION :
void searchid()
{
      printf("\nPlease Enter The ID Of The Book You Want To Search For : ");
  fgets(id,10,stdin);
  fseek(fptr,0,SEEK_SET);
  searchidd(id);
  printf("\nDo You Want Another Operation ?\nPress 1 If Yes\nPress 2 If No\n:  ");
  scanf("%d",&op);
   if(op==1)
   system("cls");
       else
        fclose(fptr);
}
// FIRST FUNCTION :

void searchidd(char *id)
{ if(!feof(fptr))

{

    fgets(namex,30,fptr);

   fgets(idx,30,fptr);

   fgets(quantx,30,fptr);

    if ((id[0]==idx[0] && id[1]==idx[1] && id[2]==idx[2] && id[3]==idx[3]))
    {
        printf("The Book Name Is : %s\n",namex);
        printf("The Book Quantity Is : %s\n",quantx);
    }
    else
    {   iii++;
        return searchidd(id);
    }

}
else
{
    printf("\nBook Not Found !!\n");

}

}
//SEARCH BY NAME FUNCTION :

void searchname()
{
    printf("\nEnter The Name Of The Book You Want To Search For (As it was entered) : ");
    fgets(name,50,stdin);

for(pass=1;pass<counter;pass++)
{
    for(i4=0;i4<counter-pass;i4++)
    {
        if(strcmp(library[i4].name,library[i4+1].name)>0)
        {
          strcpy(namee,library[i4].name);
          strcpy(idd,library[i4].id);
          strcpy(quantityy,library[i4].quantity);

          strcpy(library[i4].name,library[i4+1].name);
          strcpy(library[i4].id,library[i4+1].id);
          strcpy(library[i4].quantity,library[i4+1].quantity);

          strcpy(library[i4+1].name,namee);
          strcpy(library[i4+1].id,idd);
          strcpy(library[i4+1].quantity,quantityy);
        }


    }
}
result=binsearch(name,0,counter-1);

if(result==-1)
{
    printf("Book Not Found !!\n");
}
else{
printf("\nThe ID Of The Book Is : %s\n",library[middle].id);
printf("The Quantity Of The Book Is : %s\n",library[middle].quantity);
printf("=============================================\n");
}
    printf("\nDo You Want Another Operation ?\nPress 1 If Yes\nPress 2 If No\n:  ");
    scanf("%d",&op);
     if(op==1)
    system("cls");
        else
        fclose(fptr);
}
//SECOND FUNCTION :

int binsearch(char *name,int low,int high)
{
  while(low<=high)
  {
      middle=(low+high)/2;
      if (name[0]==library[middle].name[0] && name[1]==library[middle].name[1] && name[2]==library[middle].name[2])

        {return middle ;}

      else if (name[0]<library[middle].name[0] || name[1]<library[middle].name[1] || name[2]<library[middle].name[2])

        {   high = middle-1; }

      else
        low = middle+1;


  }
  return -1;

}
//DISPLAY SORTED FUNCTION :

void disp_sorted()
{
for(pass=1;pass<counter;pass++)
{for(i4=0;i4<counter-pass;i4++)
    {if(strcmp(library[i4].name,library[i4+1].name)>0)
        {strcpy(namee,library[i4].name);
        strcpy(idd,library[i4].id);
        strcpy(quantityy,library[i4].quantity);

          strcpy(library[i4].name,library[i4+1].name);
          strcpy(library[i4].id,library[i4+1].id);
          strcpy(library[i4].quantity,library[i4+1].quantity);

          strcpy(library[i4+1].name,namee);
          strcpy(library[i4+1].id,idd);
          strcpy(library[i4+1].quantity,quantityy);}}}
for(i4=0;i4<counter;i4++)
{
    printf("\nThe Name Of Book Number %d Is : %s\n",i4+1,library[i4].name);
    printf("The ID Of Book Number %d Is : %s\n",i4+1,library[i4].id);
    printf("The Quantity Of Book Number %d Is : %s\n",i4+1,library[i4].quantity);
    printf("=============================================\n");
}

    printf("\nDo You Want Another Operation ?\nPress 1 If Yes\nPress 2 If No\n:  ");
    scanf("%d",&op);
    if(op==1)
    system("cls");
        else
        fclose(fptr);}

//DISPLAY UNSORTED FUNCTION :
void disp_unsorted()
{
        for(i4=0;i4<counter;i4++)
{
    printf("\nThe Name Of Book Number %d Is : %s\n",i4+1,library[i4].name);

    printf("The ID Of Book Number %d Is : %s\n",i4+1,library[i4].id);

    printf("The Quantity Of Book Number %d Is : %s\n",i4+1,library[i4].quantity);

    printf("=============================================\n");
}
    printf("\nDo You Want Another Operation ?\nPress 1 If Yes\nPress 2 If No\n:  ");
    scanf("%d",&op);
    if(op==1)
    system("cls");
        else
        fclose(fptr);}






#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct collegenode 
{
    char collegename[100];
    float cs_percentile;
    float entc_percentile;
    float mech_percentile;
    int collegefee;
    int hostelfee;
    struct collegenode* left;
    struct collegenode* right;
};

struct students
{
 char city[50];
 char collegename[500];
 float cs_percentile;
 float entc_percentile;
 float mech_percentile;
 int collegefee;
 int hostelfee;
};

struct read_info
{
 char name[50];
 float percen;
 int income;
}stud_info;

void read()
{
printf("----------------- WELCOME TO MHT CET COUNSELLING ----------------");
printf("\nEnter your name : ");
scanf("%s",stud_info.name);
printf("Enter your Percentile : ");
scanf("%f",&stud_info.percen);
printf("Enter your parents income : ");
scanf("%d",&stud_info.income);
printf("\n----------------------------------------------------------\n");
}
void freeBST(struct collegenode* root) {
    if (root == NULL) {
        return;
    }
    freeBST(root->left);
    freeBST(root->right);
    free(root);
}

struct collegenode* insertCollege(struct collegenode* root,struct students std) 
{
    if(root==NULL) 
    {
        struct collegenode* newNode;
        newNode=(struct collegenode*)malloc(sizeof(struct collegenode));
        strcpy(newNode->collegename,std.collegename);
        newNode->cs_percentile=std.cs_percentile;
        newNode->entc_percentile=std.entc_percentile;
        newNode->mech_percentile=std.mech_percentile;
        newNode->collegefee=std.collegefee;
        newNode->hostelfee=std.hostelfee;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
    }
    if(strcmp(std.collegename,root->collegename)<0) 
    {
        root->left=insertCollege(root->left,std);
    } 
    else if(strcmp(std.collegename,root->collegename)>0) 
    {
        root->right=insertCollege(root->right,std);
    }
    return root;
}

struct collegenode* searchCollege(struct collegenode* root,char collegename[]) 
{
    if(root==NULL||strcmp(root->collegename,collegename)==0) 
    {
        return root;
    }
    else if(strcmp(collegename,root->collegename)<0) 
    {
        return searchCollege(root->left,collegename);
    }
    else
    {
        return searchCollege(root->right,collegename);
    }
}


int cs_operations(int i,struct students std[],int temp)
{ 
 if(stud_info.percen>=95 && std[i].cs_percentile>95)
 { 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].cs_percentile); 
 temp++;
 }
 else if(stud_info.percen>=90 &&stud_info.percen<95 && 
 std[i].cs_percentile>=90 && std[i].cs_percentile<95)
 { 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].cs_percentile);
 temp++;
 }
 else if(stud_info.percen>=80 && stud_info.percen<90 && 
 std[i].cs_percentile>=80 && std[i].cs_percentile<90)
 { 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].cs_percentile);
 temp++;
 }
 else if(stud_info.percen>=70 && stud_info.percen<80 && 
 std[i].cs_percentile>=70 && std[i].cs_percentile<80)
 { 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].cs_percentile);
 temp++;
 }
 else if(stud_info.percen>=60 && stud_info.percen<70 && 
 std[i].cs_percentile>=60 && std[i].cs_percentile<70)
 { 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].cs_percentile);
 temp++;
 }
 else if(stud_info.percen>=50 && stud_info.percen<60 && 
 std[i].cs_percentile>=50 && std[i].cs_percentile<60)
 { 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].cs_percentile);
 temp++;
 }
 else if(stud_info.percen>=40 && stud_info.percen<50 && 
 std[i].cs_percentile>=40 && std[i].cs_percentile<50)
 { 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].cs_percentile);
 temp++;
 }
 return temp;
}



int entc_operations(int i,struct students std[],int temp1)
{ 
 if(stud_info.percen>=95 && std[i].entc_percentile>95)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].entc_percentile); 
 temp1++;
 }
 else if(stud_info.percen>=90 &&stud_info.percen<95 && 
std[i].entc_percentile>=90 && std[i].entc_percentile<95)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].entc_percentile);
 temp1++;
 }
 else if(stud_info.percen>=80 && stud_info.percen<90 && 
std[i].entc_percentile>=80 && std[i].entc_percentile<90)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].entc_percentile);
 temp1++;
 }
 else if(stud_info.percen>=70 && stud_info.percen<80 &&
 std[i].entc_percentile>=70 && std[i].entc_percentile<80)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].entc_percentile);
 temp1++;
 }
 else if(stud_info.percen>=60 && stud_info.percen<70 && 
std[i].entc_percentile>=60 && std[i].entc_percentile<70)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].entc_percentile);
 temp1++;
 }
 else if(stud_info.percen>=50 && stud_info.percen<60 && 
std[i].entc_percentile>=50 && std[i].entc_percentile<60)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].entc_percentile);
 temp1++;
 }
 else if(stud_info.percen>=40 && stud_info.percen<50 && 
std[i].entc_percentile>=40 && std[i].entc_percentile<50)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].entc_percentile);
 temp1++;
 }
 return temp1;
}



int mech_operations(int i,struct students std[],int temp2)
{ 
 if(stud_info.percen>=95 && std[i].mech_percentile>95)
 { 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].mech_percentile); 
 temp2++;
 }
 
 else if(stud_info.percen>=90 &&stud_info.percen<95 && 
 std[i].mech_percentile>=90 && std[i].mech_percentile<95)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].mech_percentile);
 temp2++;
 }
 else if(stud_info.percen>=80 && stud_info.percen<90 && 
 std[i].mech_percentile>=80 && std[i].mech_percentile<90)
 { 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].mech_percentile);
 temp2++;
 }
 else if(stud_info.percen>=70 && stud_info.percen<80 && 
 std[i].mech_percentile>=70 && std[i].mech_percentile<80)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].mech_percentile);
 temp2++;
 }
 else if(stud_info.percen>=60 && stud_info.percen<70 && 
 std[i].mech_percentile>=60 && std[i].mech_percentile<70)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].mech_percentile);
 temp2++;
 }
 else if(stud_info.percen>=50 && stud_info.percen<60 && 
 std[i].mech_percentile>=50 && std[i].mech_percentile<60)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].mech_percentile);
 temp2++;
 }
 else if(stud_info.percen>=40 && stud_info.percen<50 && 
 std[i].mech_percentile>=40 && std[i].mech_percentile<50)
 { 
 
 printf("%s",std[i].collegename);
 printf("-%f\n",std[i].mech_percentile);
 temp2++;
 }
 return temp2;
}

int main()
{
 int i,ch,n,ch1;
 char clgname[100];
 struct collegenode* root=NULL;
 struct students std[]= 
 {
 {"pune","COEP",99.88,99.65,98.97,84000,50000},
{"pune","PICT",99.59,97.94,96.92,80000,70000},
{"pune","VIT",98.80,96.37,93.36,90000,90000},
{"pune","VIIT",97.63,93.72,85.25,30000,50000},
{"pune","PVG",97.56,89.38,79.95,44000,55000},
{"pune","AISSMS",93.96,84.56,77.23,54000,60000},
{"pune","AISSMSIIIT",92.43,84.65,75.98,57800,70000},
{"pune","BVCOE",93.57,64.03,45.41,65000,70000},
{"pune","PESMCOE",93.49,80.23,52.18,56000,100000},
{"pune","MMCOE",92.62,75.90,42.67,70000,110000},
{"pune","GH Raisoni",88.98,71.50,41.90,40000,50000},
 {"pune","Sinhagad Technical",88.59,54.65,40.40,60000,70000},
 {"pune","JSPM",88.32,65.42,45.55,50400,67000},
{"pune","TSSMS",85.83,65.87,42.11,54000,74200},
{"pune","ICOE",86.23,52.21,41.60,45000,65000},
{"pune","Zeal COE",81.98,61.15,45.77,65000,85000},
 {"pune","Rasikala M dhariwal sinhgad",78.43,56.44,41.21,67000,70000},
 {"pune","PDEA COE",77.38,47.77,40.01,56880,67800},
{"pune","TRINITY COE",76.75,49.87,40.02,65700,78090},
{"pune","P K Technical campus",58.05,48.65,40.01,62100,93000},
 {"pune","Sidhant COE",55.31,48.45,40.02,67800,87900},
{"pune","Samarth group COE",55.02,46.88,40.07,67900,89000},
 {"pune","Suman ramesh technical campus",50.09,42.45,40.02,87600,90000},
 {"mumbai","VJTI",99.91,99.57,98.88,48000,68000},
{"mumbai","SPIT",99.70,98.80,92.77,50000,50000},
{"mumbai","D J sanghavi",99.09,96.31,94.61,56000,78900},
 {"mumbai","Thadomal Shahani",97.93,94.94,88.87,67900,78900},
 {"mumbai","vivekanandIOT",97.49,93.08,88.43,78900,90000},
 {"mumbai","K J Somaiya",97.26,92.47,78.98,132000,120000},
 {"mumbai","Vidyaalankar IOT",96.36,89.39,73.45,67900,79000},
 {"mumbai","Don Bosco COE",94.91,80.70,56.80,65000,70000},
 {"mumbai","Atharva COE",91.43,77.53,56.43,76000,80000},
 {"mumbai","Anjuman COE",88.66,72.65,56.15,80000,90000},
 {"mumbai","Smt. Indhira Gandhi COE",86.23,52.11,41.22,67900,80000},
 {"mumbai","MGM COE",79.25,49.89,40.10,89000,90000},
 {"mumbai","Shivajirao Jondhale COE",66.75,46.88,40.01,90000,90000},
 {"mumbai","IDEAL IOT",63.65,46.21,40.01,89000,90000},
{"mumbai","RAJGAD dnyanpeeth Technical campus",66.72,44.44,40.02,65000,80000},
 {"mumbai","International center of excellence",63.33,43.33,40.03,70000,80000},
 {"mumbai","IES IOT",62.65,51.65,41.32,70000,80000},
{"nagpur","RCOEM",97.77,93.36,90.35,80000,130000},
{"nagpur","YCCOE",92.95,83.41,68.10,90000,110000},
{"nagpur","G.H Raisoni COE",88.75,76.15,44.86,70000,90000},
 {"nagpur","Vincent pallotti COE",86.76,74.98,41.58,85800,90000},
 {"nagpur","Priyadarshani bhagawati COE",81.29,55.02,40.09,70000,120000},
 {"nagpur","Nagpur IOT",64.03,52.11,40.07,78900,130000},
 {"nagpur","Jhulelal IOT",61.27,43.83,40.01,77700,80000},
 {"nagpur","Guru Nanak IOT",61.01,53.22,40.40,65000,99000},
 {"nagpur","Radhikatai pandav COE",60.01,50.09,40.04,67000,90000},
 {"nagpur","Swaminarayan Sidhanta IOT",55.55,43.11,40.11,86000,100000},
 {"sangli","Walchand COE",99.29,96.56,96.92,39000,45000},
 {"sangli","Vasantraodada patil IOT",78.09,51.21,42.11,67800,88000},
 {"sangli","RIT",65.77,51.42,40.03,68000,69000},
{"sangli","R.C IOT",61.11,52.11,41.32,78000,80000},
{"sangli","Jagadamba COE",60.85,48.44,40.11,76900,80000},
 {"sangli","Indala COE",52.01,44.21,40.32,73200,89000},
{"sangli","JaywantCOE",53.11,45.21,40.51,76900,90000},
 
 };
 
 read();
 
 
 printf("Enter the branch which you want:\n\t1.CS\n\t2.EnTC\n\t3.Mechanical\nEnter your choice:");
 scanf("%d",&ch);
 
 printf("\n---------------------------************--------------------------------\n");
 
 switch(ch)
 {
     
 case 1:
      
      
 printf("Pune city colleges:\n");
 int temp=0;
 for(i=0;i<57;i++)
   {
     if(strcmp(std[i].city,"pune")==0)
      {
       temp=cs_operations(i,std,temp);
      }
   }
 if(temp==0){
 printf("College not found\n");
 } 
 printf("-----------------------------------------------------------\n");
 int temp1=0;
 printf("Mumbai city colleges:\n");
 for(i=0;i<57;i++)
 {
    if(strcmp(std[i].city,"mumbai")==0)
     {
       temp1=cs_operations(i,std,temp1);
     }
 }
 if(temp1==0)
 {
 printf("College not found\n");
 } 
 printf("-----------------------------------------------------------\n");
 int temp2=0;
 printf("Nagpur city colleges:\n");
 for(i=0;i<57;i++)
 {
    if(strcmp(std[i].city,"nagpur")==0)
     {
       temp2=cs_operations(i,std,temp2);
     }
 }
 if(temp2==0){
 printf("College not found\n");
 } 
 printf("-----------------------------------------------------------\n"); 
 int temp3=0;
 printf("Sangli city colleges:\n");
 for(i=0;i<57;i++)
 {
    if(strcmp(std[i].city,"sangli")==0)
     {
       temp3=cs_operations(i,std,temp3);
     }
 }
 if(temp3==0){
 printf("College not found\n");
 } 
 break;
 
 printf("\n----------------------------*************-------------------------------\n"); 
 
 case 2:
 
 
  temp=0;
 printf("Pune city colleges:\n");
 for(i=0;i<57;i++)
   {
      if(strcmp(std[i].city,"pune")==0)
      {
         temp=entc_operations(i,std,temp);
      }
   }
   if(temp==0)
   {
   printf("College not found\n");
   } 
 printf("-----------------------------------------------------------\n"); 
 printf("Mumbai city colleges:\n");
  temp1=0;
 for(i=0;i<57;i++)
 {
    if(strcmp(std[i].city,"mumbai")==0)
     {
       temp1=entc_operations(i,std,temp1);
     }
 }
 if(temp1==0)
 {
 printf("College not found\n");
 } 
 printf("-----------------------------------------------------------\n"); 
 
  temp2=0;
 printf("Nagpur city colleges:\n");
 for(i=0;i<57;i++)
 {
    if(strcmp(std[i].city,"nagpur")==0)
     {
      temp2=entc_operations(i,std,temp2);
     }
 }
 if(temp2==0)
 {
 printf("College not found\n");
 } 
 printf("-----------------------------------------------------------\n"); 
  temp3=0;
 printf("Sangli city colleges:\n");
 for(i=0;i<57;i++)
  {
    if(strcmp(std[i].city,"sangli")==0)
    {
     temp3=entc_operations(i,std,temp3);
    }
  }
  if(temp3==0)
  {
  printf("College not found\n");
  } 
    break;
 
    printf("\n-----------------------------*************------------------------------\n"); 
 
 case 3:
 
 
  temp=0;
 printf("Pune city colleges:\n");
 for(i=0;i<57;i++)
 {
    if(strcmp(std[i].city,"pune")==0)
    {
     temp=mech_operations(i,std,temp);
    }
 }
 if(temp==0)
  {
  printf("College not found\n");
  } 
 printf("-----------------------------------------------------------\n"); 
  temp2=0;
 printf("Mumbai city colleges:\n");
 for(i=0;i<57;i++)
 {
   if(strcmp(std[i].city,"mumbai")==0)
   {
    temp1=mech_operations(i,std,temp1);
   }
 }
 if(temp1==0)
  {
  printf("College not found\n");
  } 
 printf("-----------------------------------------------------------\n"); 
   temp2=0;
 printf("Nagpur city colleges:\n");
  for(i=0;i<57;i++)
  {
     if(strcmp(std[i].city,"nagpur")==0)
    {
     temp2=mech_operations(i,std,temp2);
    }
 }
 if(temp2==0)
  {
  printf("College not found\n");
  } 
 printf("-----------------------------------------------------------\n"); 
  temp3=0;
 printf("Sangli city colleges:\n");
 for(i=0;i<57;i++)
 {
    if(strcmp(std[i].city,"sangli")==0)
    {
      temp3=mech_operations(i,std,temp3);
    }
 }
 if(temp3==0)
  {
  printf("College not found\n");
  } 
  
     break;
 
 printf("\n-------------------------------*************----------------------------\n"); 

 default:
 printf("Enter correct choice!!");
 
 printf("\n-----------------------------***************------------------------------\n");
 
 }

 do
  { 
     printf("\nWhich operation do you want to do (Enter number only):\n");
     printf("\t\t1.Enter which college information you want \n\t\t2.Do you want to check are you eligible for TFWS catagory\nEnter operation number : ");
     scanf("%d",&ch1);
switch(ch1)
{ 

case 1:
         
      for (int i=0;i<57;i++) 
      {
        root=insertCollege(root,std[i]);
      }

    
    printf("Enter the college name to search: ");
    scanf("%s",clgname);
    
    struct collegenode* foundCollege;
    foundCollege=searchCollege(root,clgname);
    if (foundCollege!=NULL) 
    {
        printf("College Name: %s\n",foundCollege->collegename);
        printf("CS Percentile: %f\n",foundCollege->cs_percentile);
        printf("EnTC Percentile: %f\n",foundCollege->entc_percentile);
        printf("Mech Percentile: %f\n",foundCollege->mech_percentile);
        printf("College Fee: %d\n",foundCollege->collegefee);
        printf("Hostel Fee: %d\n",foundCollege->hostelfee);
    } 
    else 
    {
        printf("College not found\n");
    }
    freeBST(root);
        break;
case 2:
    if(stud_info.income<800000)
    {
      printf("You are eligible for TFWS catagory\n");
    }
    else
    {
      printf("You are not eligible for TFWS catagory\n");
    }
    break;
 
default:
    printf("Enter valid number\n");

}

printf("\n-------------------------------****************----------------------------\n");
printf("\nDo you want to do any operation then (PRESS 1) Or (PRESS 0)for exit:");
scanf("%d",&n);

}while(n==1);

printf("\n---------------------------************--------------------------------\n");
if(n==0)
   {
      printf("-----------------------------THANK YOU!!---------------------------");
   }
      printf("\n---------------------------************------------------------------\n");
 return 0;
}
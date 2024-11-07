#include<stdio.h>
#include<string.h>

struct employee {
  char name[25];
  int id;
  char department[20];
  float salary;
  char email[50];
}
employee1,employeee;
int main(){
	  strcpy(employee1.name,"Joe Due");
 employee1.id=12345;
      strcpy(employee1.department,"Human resource");
 employee1.salary=55000.50;
  strcpy(employee1.name,"john.doe@company.com");
   printf("name:%s\n",employee1.name);
   printf("id:%d\n",employee1.id);	  
  printf("Department:%d\n",employee1.department);
  printf("salary:%f\n",employee1.salary);
  printf("Email:%s\n",employee1.email);
  
  return 0;
  }

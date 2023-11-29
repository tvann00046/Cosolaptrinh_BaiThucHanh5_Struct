#include <stdio.h>
#include <string.h>

struct Student{
	char id[20];
	char name[30];
	int age;
	float grade;
};
int main(){
	struct Student studentsList[3];
	int i;
	for(i=0;i<3;i++){
		printf("Nhap thong tin sinh vien thu %d\n", i+1);
		printf("Ma sinh vien:");
		scanf("%d", &studentsList[i].id);
		printf("Ho va ten:");
		getchar();
		fgets(studentsList[i].name, 50, stdin);
		printf("Diem:");
		scanf("%f", &studentsList[i].grade);
		printf("Tuoi:");
		scanf("%f", &studentsList[i].age);
	}
	for(i=0;i<2;i++);
	printf("\nThong tin sinh vien %d\n", i+1);
	printf("Ma sinh vien: %d", studentsList[i].id);
	
	return 0;
}

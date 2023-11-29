#include <stdio.h>
#include <string.h>

struct Student{
	char name[50];
	char id[30];
	float score;
};
int main(){
	struct Student students[50];
	int i, n;
	
	printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
	for(i =0;i<n;i++);{
	printf("Nhap thong tin sinh vien %d:\n", i +1);
	printf("Ma sinh vien:");
	scanf("%d", &students[i].id);
	printf("Ho va ten:");
	scanf("%s", students[i].name);
	printf("Diem:");
	scanf("%f", &students[i].score);
	}
	
	int choice;
    printf("\nChon cach sap xep:\n");
    printf("1. Theo ten\n");
    printf("2. Theo diem\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);
    
    return 0;
} 

#include<stdio.h>
#include<string.h>

//Pointers and structures

struct Person {
	
	char name[20];
	char eye_color[20];
	char hair_color[20];
	int age;
};

int main(){
	
	struct Person person;
	
	strcpy(person.name,"Seyda");
	strcpy(person.eye_color,"brown");
	strcpy(person.hair_color,"brown");
	person.age=20;
	
	//We created a pointer of the struct data type as it will hold a data of the Struct.
	struct Person *hold=&person;
	
	printf("Name:%s\nEye color:%s\nHair color:%s\nAge:%d",hold->name,hold->eye_color,hold->hair_color,hold->age);//We use (->)


	return 0;
}


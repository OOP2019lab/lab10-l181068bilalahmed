#include "Student.h"
#include "Course.h"

Student :: Student (string n, string rn){
	username = "";
	name = n;
	roll_number = rn;
	courses = 0;
	course = new Course *[2];
}

Student :: ~Student() {
	username = "";
	name = "";
	roll_number = "";
	courses = -1;
	course = nullptr;
}

void Student :: addCourse(Course * c){
	if (courses < 2){
		if (c->addStudent(this)){
			bool exist;
			for (int i =0; i < courses; i++){
				if (course[i] -> course_name == c->course_name){
					exist = true;
				}
			}
			if(!exist){
			course [courses] = c;
			courses++;
			cout << "Added course" << endl;
			}
		}
		else{
			cout << "Course Already has 4 students" << endl;
		}
	}
	else{
		cout << "Student has already regsistred to 2 courses" << endl;		
	}
}

void Student::addCourse_2(Course * c) {
	if (courses < 2) {
		if (c->getStudents() < 4) {
			bool exists = false;
			for (int i = 0; i < courses; i++) {
				if (course[i]->course_name == c->course_name)
					exists = true;
			}
			if (!exists) {
				course[courses++] = c;
				c->addStudent_2(this);
			}
		}
		else {
			cout << "Course already has 4 students" << endl;
		}
	}
	else
		cout << "Student has already regsistred to 2 course" << endl;
}
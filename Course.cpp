#include "Course.h"
#include "Student.h"

Course :: Course(string cn, string con){
	course_name = cn;
	course_number = con;
	students = 0;
	student = new Student * [4];
}

Course :: ~Course() {
	course_name = "";
	course_number = "";
	students = -1;
	student = nullptr;
}

bool Course :: addStudent(Student * s){
	if (this-> students < 4){
		student[this -> students] = s;
		this -> students++;
		return true; 
	}
	else {
		cout << "Course already has 4 students" << endl;
		return false;
	}
}

void Course :: addStudent_2(Student * s) {
	if (students < 4) {
		if (s->getCourse() < 2) {
			bool exists = false;
			for (int i = 0; i < students; i++) {
				if (student[i]->getName() == s->getName())
					exists = true;
			}
			if (!exists) {
				student[students++] = s;
				s->addCourse_2(this);
			}
		}
		else {
			cout << "Student has already regsistred to 2 course" << endl;
		}
	}
	else {
		cout << "Course already has 4 students" << endl;
	}
}

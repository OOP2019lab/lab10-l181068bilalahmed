#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student;

class Course{
private:
	string course_name;
	string course_number;
	int students;
	Student ** student;
	bool addStudent (Student * s);

public:
	Course (string, string);
	~Course();
	friend class Student;
	friend ostream&  operator << (ostream& out, Course* c){
		out << "Course Name : " << c->course_name << endl;
		out << "Course ID : " << c->course_number << endl;
		out << "Students : " << endl;
		for (int i=0; i < c->students; i++){
			out << c->student[i] -> getname() << endl;
		}
		return out;
	}
	int getStudents() {
		return students;
	}
	string getCourseName() {
		return course_name;
	}
	void addStudent_2(Student * s);
};
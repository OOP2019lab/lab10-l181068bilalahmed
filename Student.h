#pragma once
#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

class Course;

class Student {
private:
	string username;
	string name;
	string roll_number;
	int courses;
	Course ** course;

public:
	Student (string, string);
	~Student();
	void addCourse(Course * s);
	string getName() {
		return name;
	}
	int getCourse() {
		return courses;
	}
	void addCourse_2(Course * s);
	friend ostream&  operator << (ostream& out, Student * s){
		out << "Student Name : " << s->name<< endl;
		out << "Student Roll No : " << s->roll_number << endl;
		out << "Courses: :" << endl;
		for (int i=0; i < s -> courses; i++){
			out << s->course[i] -> getCourseName() << endl;
		}
		return out;
	}
};
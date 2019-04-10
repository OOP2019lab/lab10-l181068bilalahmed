#include "Course.h"
#include "Student.h"

int main() {
	Student S1("Anum", "11-1351");
	Student S2("Sara", "12-6462");
	Student S3("Sana", "11-4531");
	Student S4("Zara", "12-4342");
	Student S5("Hira", "11-5940");
	Course C1("OOP", "CS102");
	Course C2("PF", "CS101");
	Course C3("AI", "CS356");

	S1.addCourse(&C1);
	S1.addCourse(&C2);
	S1.addCourse(&C2);
	S2.addCourse(&C2);
	S3.addCourse(&C2);
	S4.addCourse(&C2);
	S5.addCourse(&C2);

	//C1.addStudent(S5); //Does not call, since private member

	cout << S1;
	cout << S2;
	cout << C1;

	C1.addStudent_2(&S5);
	S5.addCourse_2(&C3);
	C1.addStudent_2(&S5);

	cout << S5;
	cout << C1;
	cout << C3;

	system("pause");
}
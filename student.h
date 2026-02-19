#include <string>

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

class Student{
	private:
		std::string firstName;
		std::string lastName;
		int creditHours;
	public:
		Student();
		void init(std::string studentString);
		printStudent();
		getLastFirst();
};

#endif


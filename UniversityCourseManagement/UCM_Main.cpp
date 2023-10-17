#include <iostream>
#include <vector>
#include <string>

class PERSON {
public:
    PERSON(std::string surname, std::string first_name, std::string email)
        : surname(surname), first_name(first_name), email(email) {}

    std::string surname, first_name, email;

};

class LECTURER : public PERSON {
public:
    LECTURER(std::string surname, std::string first_name, std::string email, std::string academic_title)
        : PERSON(surname, first_name, email), academic_title(academic_title) {}
    
    std::string academic_title;
};

class STUDENT : public PERSON {
public:
    STUDENT(std::string surname, std::string first_name, std::string email, int matriculationNumber, std::string university)
        : PERSON(surname, first_name, email), matriculationNumber(matriculationNumber), university(university) {}

    std::string university;
    int matriculationNumber;
};

class COURSE {
public:
    COURSE(std::string name, LECTURER* lecturer) : name(name), lecturer(lecturer) {}
    
    bool add_participant(STUDENT* student) {
        for (STUDENT*& s : participants) {
            if (s->email == student->email)
                return false;
        }
        if (participants.size() < 10)
        {
            participants.push_back(student);
            return true;
        }
        return true;
    }

    std::string name;
    LECTURER* lecturer;
    std::vector<STUDENT*> participants;

};

void registerForCourse(std::vector<COURSE>& courses) {
    // declare first
    std::string surname, first_name, email, university;
    int matriculationNumber, course_choice;

    std::cout << "Enter Student Details: \n";
    std::cout << "Surname : "; std::cin >> surname;
    std::cout << "First Name : "; std::cin >> first_name;
    std::cout << "Email : "; std::cin >> email;
    std::cout << "Matriculation Number : "; std::cin >> matriculationNumber;
    std::cout << "University : "; std::cin >> university;

    STUDENT* student = new STUDENT(surname, first_name, email, matriculationNumber, university);

    std::cout << "Enter a number of course to choose : \n";
    for(int i = 0; i < courses.size(); ++i) {
        std::cout << i + 1 << ". " << courses[i].name << "\n";
    }
    std::cin >> course_choice;

    if(courses[course_choice - 1].add_participant(student)) {
        std::cout << "Successfully registered for the course.\n";
    }
    else {
        std::cout << "Registration failed. The course is full or already registered.";
        delete student;
    }
    
};

int main() {
    // add some students here
    LECTURER* lecturer1 = new LECTURER("taehyoung", "kim", "taehyoung.kim@tum.de","M.Sc");
    LECTURER* lecturer2 = new LECTURER("andrew", "kim", "andrew.kim@tum.de","Prof.");
    LECTURER* lecturer3 = new LECTURER("sam", "kim", "sam.kim@tum.de","Dr.");

    std::vector<COURSE> courses = {
        COURSE("Programming", lecturer1),
        COURSE("Databases", lecturer2),
        COURSE("Software Engineering", lecturer3) 
    };

    for (COURSE& course : courses) {
        for(STUDENT* student : course.participants) {
            delete student;
        }
    }

    registerForCourse(courses);

    delete lecturer1;
    delete lecturer2;
    delete lecturer3;

    return 0;
};

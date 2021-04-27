#include <iostream>
#include <vector>
#include <ctime>
class student
{
private:
    
public:
    student() = default;
    virtual void foo(){}
    virtual ~student() = default;
};

class non_stipendStudents : public student
{
private:
    
public:
    non_stipendStudents() = default;

    ~non_stipendStudents() = default;
};

class stipendStudents : public student
{
private:
    
public:
    stipendStudents() = default;


    ~stipendStudents() = default;
};


class A_Student : public stipendStudents
{
private:
    std::vector<std::size_t> m_allStudentStipends;
public:
    A_Student()= default;
    std::vector<std::size_t> getAllStudentStipends() const {
        return m_allStudentStipends;
    }
    ~A_Student()= default;
};

class B_Student : public stipendStudents
{
private:
    std::vector<std::size_t> m_allStudentStipends;
public:
    B_Student()= default;
    std::vector<std::size_t> getAllStudentStipends() const {
        return m_allStudentStipends;
    }
    ~B_Student()= default;
};

class C_Student : public stipendStudents
{
private:
    std::vector<std::size_t> m_allStudentStipends;
public:
    C_Student()= default;
    std::vector<std::size_t> getAllStudentStipends() const {
        return m_allStudentStipends;
    }
    ~C_Student()= default;
};

class D_Student : public non_stipendStudents
{
private:
    std::vector<std::size_t> m_academicDebts;
public:
    D_Student()= default;
    std::vector<std::size_t> getAcademicDebts() const {
        return m_academicDebts;
    }
    ~D_Student()= default;
};

class studentsDataBase
{
private:
    std::vector<student*> m_allStudents;
public:
    studentsDataBase() = default;
    void addStudentToTheBase(student* currStudent) {
        m_allStudents.push_back(currStudent);
    }

    const std::vector<student*> getAllStudents() const {
        return m_allStudents;
    }
    void removeStudentFromBase(std::size_t studentIdInBase) {
        m_allStudents.erase(m_allStudents.begin() + studentIdInBase);
    }
    ~studentsDataBase() = default;
};



class deanOffice
{
private:
    
public:
    deanOffice() = default;
    void createReport(studentsDataBase* currBase) const {

        for (std::size_t i = 0; i < currBase->getAllStudents().size(); i++) {

            if (D_Student* tempDNonStipendStudent = dynamic_cast<D_Student*>(currBase->getAllStudents()[i])) { // Если это неуспевающий студент
                if (tempDNonStipendStudent->getAcademicDebts().size() <= 3) {
                    tempDNonStipendStudent->getAcademicDebts().push_back(std::time(nullptr)); // Добавляем в список дату для пересдач с вектор, содержащий все даты передач, только 3 разрешены!
                } else {
                    std::cout << "Student has more than 3 attempt to pass exam!\n";
                    currBase->removeStudentFromBase(i); // Отчисляем студента :(
                }
                
            } else if (A_Student* tempAStipenStudent = dynamic_cast<A_Student*>(currBase->getAllStudents()[i])) {
                tempAStipenStudent->getAllStudentStipends().push_back(5000); // Начисление стипендии отличнику в размере 5000! 
            } else if (B_Student* tempBStipenStudent = dynamic_cast<B_Student*>(currBase->getAllStudents()[i])) {
                tempBStipenStudent->getAllStudentStipends().push_back(3000); // Начисление стипендии хорошисту в размере 3000! 
            } else if (C_Student* tempCStipenStudent = dynamic_cast<C_Student*>(currBase->getAllStudents()[i])) {
                tempCStipenStudent->getAllStudentStipends().push_back(1500); // Начисление стипендии троечнику в размере 1500! 
            } else {
                std::cout << "Произошел троллинг!";
            }
        } 
    }
    ~deanOffice() = default;
};





int main() {

    studentsDataBase* allStudentsDataBase = new studentsDataBase();
    deanOffice* currDeanOffice = new deanOffice();

    student* Ivanov = new D_Student();
    student* Maslov = new D_Student();
    allStudentsDataBase->addStudentToTheBase(Ivanov);
    allStudentsDataBase->addStudentToTheBase(Maslov);

    //! Деканат создает репорт, по итогам которого неуспевающим студентам выставляет дату для пересдачи, 
    //! если пересдач было уже 3 на момент создания отчета, студента отчисляют!
    //! А успевающим - начисляет стипендию.

    currDeanOffice->createReport(allStudentsDataBase); 
    


    



    
    
}
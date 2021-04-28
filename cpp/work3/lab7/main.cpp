#include <iostream>
#include <vector>
#include <ctime>
class student
{
private:
    
public:
    student() = default;
    virtual void getInfoAboutStudent() {}
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
    std::vector<std::size_t>& getAllStudentStipends() {
        return m_allStudentStipends;
    }
    void getInfoAboutStudent() override {
        std::cout << "Here is the list of stipends: \n";
        for (std::size_t i = 0; i < m_allStudentStipends.size(); i++) {
            std::cout << m_allStudentStipends[i] << ' ';
        }
        std::cout << "\n\n";
    }
    ~A_Student()= default;
};

class B_Student : public stipendStudents
{
private:
    std::vector<std::size_t> m_allStudentStipends;
public:
    B_Student()= default;
    std::vector<std::size_t>& getAllStudentStipends() {
        return m_allStudentStipends;
    }

     void getInfoAboutStudent() override {
        std::cout << "Here is the list of stipends: \n";
        for (std::size_t i = 0; i < m_allStudentStipends.size(); i++) {
            std::cout << m_allStudentStipends[i] << ' ';
        }
        std::cout << "\n\n";
    }
    ~B_Student()= default;
};

class C_Student : public stipendStudents
{
private:
    std::vector<std::size_t> m_allStudentStipends;
public:
    C_Student()= default;
    std::vector<std::size_t>& getAllStudentStipends()  {
        return m_allStudentStipends;
    }

    void getInfoAboutStudent() override {
        std::cout << "Here is the list of stipends: \n";
        for (std::size_t i = 0; i < m_allStudentStipends.size(); i++) {
            std::cout << m_allStudentStipends[i] << ' ';
        }
        std::cout << "\n\n";
    }

    ~C_Student()= default;
};

class D_Student : public non_stipendStudents
{
private:
    std::vector<std::time_t> m_academicDebts;
public:
    D_Student()= default;
    std::vector<std::time_t>& getAcademicDebts() {
        return m_academicDebts;
    }

    void getInfoAboutStudent() override {
        if (m_academicDebts.size() > 3) {
            std::cout << "Current student had been removed by DeanOffice!" << "\n\n";
            return;
        }
        std::cout << "Here is the list of debt dates: \n";
        for (std::size_t i = 0; i < m_academicDebts.size(); i++) {
            std::cout << std::asctime(std::localtime(&m_academicDebts[i]));
        }
        std::cout << std::endl;
        
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

    student* Ivanov = new A_Student();
    student* Maslov = new D_Student();
    student* Nekrasov = new B_Student();
    allStudentsDataBase->addStudentToTheBase(Ivanov);
    allStudentsDataBase->addStudentToTheBase(Maslov);
    allStudentsDataBase->addStudentToTheBase(Nekrasov);

    //! Деканат создает репорт, по итогам которого неуспевающим студентам выставляет дату для пересдачи, 
    //! если пересдач было уже 3 на момент создания отчета, студента отчисляют!
    //! А успевающим - начисляет стипендию.

    currDeanOffice->createReport(allStudentsDataBase); 
    currDeanOffice->createReport(allStudentsDataBase); 
    currDeanOffice->createReport(allStudentsDataBase); 
    currDeanOffice->createReport(allStudentsDataBase); 
    currDeanOffice->createReport(allStudentsDataBase); 
     

    Ivanov->getInfoAboutStudent();
    Maslov->getInfoAboutStudent();
    Nekrasov->getInfoAboutStudent();

    


    



    
    
}
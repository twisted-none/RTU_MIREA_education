#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Student {
    std::string lastName;
    std::string firstName;
    std::string className;
    std::string birthDate;
};

bool compareStudents(const Student& a, const Student& b) {
    if (a.className != b.className) {
        return a.className < b.className;
    } else {
        return a.lastName < b.lastName;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> students[i].lastName >> students[i].firstName >> students[i].className >> students[i].birthDate;
    }

    // Сортировка учащихся
    std::sort(students.begin(), students.end(), compareStudents);

    // Вывод отсортированных данных
    for (const Student& student : students) {
        std::cout << student.className << " " << student.lastName << " " << student.firstName << " " << student.birthDate << std::endl;
    }

    return 0;
}
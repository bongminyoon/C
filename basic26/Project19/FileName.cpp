#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    // 생성자
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }

    // 이름을 반환하는 메서드
    std::string getName() const {
        return name;
    }

    // 나이를 반환하는 메서드
    int getAge() const {
        return age;
    }

    // 나이를 증가시키는 메서드
    void haveBirthday() {
        age++;
    }

    // 정보를 출력하는 메서드
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Person 객체 생성
    Person person("Alice", 30);

    // 객체의 정보 출력
    person.displayInfo();

    // 생일을 맞아 나이를 증가시킴
    person.haveBirthday();

    // 증가된 나이를 반영한 정보 출력
    person.displayInfo();

    return 0;
}

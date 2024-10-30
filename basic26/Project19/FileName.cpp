#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    // ������
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }

    // �̸��� ��ȯ�ϴ� �޼���
    std::string getName() const {
        return name;
    }

    // ���̸� ��ȯ�ϴ� �޼���
    int getAge() const {
        return age;
    }

    // ���̸� ������Ű�� �޼���
    void haveBirthday() {
        age++;
    }

    // ������ ����ϴ� �޼���
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Person ��ü ����
    Person person("Alice", 30);

    // ��ü�� ���� ���
    person.displayInfo();

    // ������ �¾� ���̸� ������Ŵ
    person.haveBirthday();

    // ������ ���̸� �ݿ��� ���� ���
    person.displayInfo();

    return 0;
}

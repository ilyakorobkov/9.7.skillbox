#include <iostream>
#include "Vector3D.h"
#include <memory>

// Функция, принимающая std::shared_ptr<Vector3D> и нормализующая вектор
void normalizeVector(std::shared_ptr<Vector3D> vec) {
    vec->normalize();
}

int main() {
    // Демонстрация конструктора перемещения и оператора присваивания перемещением
    Vector3D v1(3.0, 4.0, 0.0);
    Vector3D v2(std::move(v1));  // Использование конструктора перемещения
    v2.print();

    Vector3D v3;
    v3 = std::move(v2);  // Использование оператора присваивания перемещением
    v3.print();

    // Демонстрация работы с std::unique_ptr
    std::unique_ptr<Vector3D> uPtr = std::make_unique<Vector3D>(1.0, 2.0, 3.0);
    uPtr->print();

    // Демонстрация работы с std::shared_ptr
    std::shared_ptr<Vector3D> sPtr = std::make_shared<Vector3D>(6.0, 8.0, 0.0);
    normalizeVector(sPtr);
    sPtr->print();

    return 0;
}

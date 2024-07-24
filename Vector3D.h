#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <memory>

class Vector3D {
private:
    std::unique_ptr<double[]> coords;

public:
    // Конструктор по умолчанию
    Vector3D();

    // Параметрический конструктор
    Vector3D(double x, double y, double z);

    // Конструктор копирования
    Vector3D(const Vector3D& other);

    // Оператор присваивания копированием
    Vector3D& operator=(const Vector3D& other);

    // Конструктор перемещения
    Vector3D(Vector3D&& other) noexcept;

    // Оператор присваивания перемещением
    Vector3D& operator=(Vector3D&& other) noexcept;

    // Метод для нормализации вектора
    void normalize();

    // Метод для печати координат вектора
    void print() const;
};

#endif // VECTOR3D_H

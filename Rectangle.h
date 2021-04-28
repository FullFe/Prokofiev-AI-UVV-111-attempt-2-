#pragma once
using namespace std;
/**
* \brief Класс Прямоугольник
*/
class Rectangle
{
private:
    double area;
    /**
    * \brief Координата левого верхнего угла по оси X
    */
    double x1;

    /**
    * \brief Координата левого верхнего угла по оси Y
    */
    double y1;

    /**
    * \brief Координата правого нижнего угла по оси X
    */
    double x2;

    /**
    * \brief Координата правого нижнего угла по оси Y
    */
    double y2;

    /**
    * \brief длина
    */
    unsigned double length;

    /**
    * \brief ширина
    */
    unsigned double width;
    double setLength()
    {
    }
    double setWidth()
    {
    }

public:

    /**
    * \brief Параметрический конструктор
    * \param x1 : Координата левого верхнего угла по оси X
    * \param y1 : Координата левого верхнего угла по оси Y
    * \param x2 : Координата правого нижнего угла по оси X
    * \param y2 : Координата правого нижнего угла по оси Y
    */
    Rectangle(const double x1, const double y1, const double x2, const double y2);
    /**
   * \brief Параметрический конструктор
   * \param width : ширина
   * \param length : длина

   */
    Rectangle(const unsigned double width, const unsigned double length);
    /**
    * \brief Деконструктор
    */
    ~Rectangle() = default;
    

    /**
    * \brief Метод вывода координат
    * \return Кординаты
    */
    double output(const double x1, const double y1, const double x2, const double y2);
    /**
    * \brief Метод подсчета длины
    * \return Длина
    */
    double length(const double x1, const double x2);
    /**
   * \brief Метод подсчета ширины
   * \return Ширина
   */
    double width(const double y1, const double y2);
    /**
   * \brief Метод получения площади
   * \return Площадь
   */
    double getArea(const unsigned double length, const unsigned double width, const double area);
    /**
   * \brief Метод перемещения
   */
    void move(const unsigned double length, const unsigned double width, const double x1, const double y1);

}
#pragma once
using namespace std;
/**
* \brief Класс Прямоугольник
*/
class Rectangle
{
private:
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

    ///**
    //* \brief длина
    //*/
    //double length;

    ///**
    //* \brief ширина
    //*/
    //double width;
   

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
    Rectangle(const double width, const double length);

    void setX1(double newX1);
    void setX2(double newX1);
    void setY1(double newX1);
    void setY2(double newX1);

    double getX1();

    double getY1();

    double getX2();

    double getY2();


    /**
    * \brief Деконструктор
    */
    ~Rectangle() = default;


    /**
    * \brief Метод подсчета длины
    * \return Длина
    */
    double Length();


    /**
   * \brief Метод подсчета ширины
   * \return Ширина
   */
    double Width();


    /**
   * \brief Метод получения площади
   * \return Площадь
   */
    double Area();


    /**
   * \brief Метод перемещения
   */
    void Move();

};
//ddd

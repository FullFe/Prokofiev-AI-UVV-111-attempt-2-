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
    /**
    * \brief Левый вехний угол
    */
    int AngleLU[2]{x1; y1};
    /**
    * \brief Левый нижний угол
    */
    int AngleLD[2]{x2; y1};
    /**
    * \brief Правый вехний угол
    */
    int AngleRU[2]{x1; y2};
    /**
    * \brief Правый нижний угол
    */
    int AngleRD[2]{x2; y2};
    /**
    * \brief длина
    */
    double length;
    /**
    * \brief ширина
    */
    double width;


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
    * \brief Деконструктор
    */
    ~Rectangle();

    
    /**
      * \brief Метод Вывода координат, задающих прямоугольник
      * \param x1 : Координата левого верхнего угла по оси X
      * \param y1 : Координата левого верхнего угла по оси Y
      * \param x2 : Координата правого нижнего угла по оси X
      * \param y2 : Координата правого нижнего угла по оси Y
      * \return Координаты, задающие прямоугольник
      */
    int output_coordinates(const double x1, const double y1, const double x2, const double y2)
    {

    }
    /**
      * \brief Метод вычисления длины сторон прямоугольника
      * \param x1 : Координата левого верхнего угла по оси X
      * \param y1 : Координата левого верхнего угла по оси Y
      * \param x2 : Координата правого нижнего угла по оси X
      * \param y2 : Координата правого нижнего угла по оси Y
      * \return Длина сторон прямоугольника
      */
    int Sides(const double x1, const double y1, const double x2, const double y2))
    {

    }
    /**
      * \brief Метод вычисления площади прямоугольника
      * \param length : длина
      * \param width : ширина
      * \return Площадь прямоугольника
      */
    int Square(const double length, const double width)
    {

    }
    /**
      * \brief Метод перемещения прямоугольника на плоскости
      * \param AngleLU : Левый вехний угол
      * \param AngleLD : Левый нижний угол
      * \param AngleRU : Правый вехний угол
      * \param AngleRD : Правый нижний угол
      * \return Новые координаты, задающие прямоугольник
      */
    int move(const int AngleLU[2], const int AngleLD[2], const int AngleRU[2], const int AngleRD[2])
    {

    }

}
// Создал 2 issue, потому что не могу добавить вас в reviewers
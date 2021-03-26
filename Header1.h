#pragma once
using namespace std;
class Rectangle
{
private:
    double x1;
    double y1;
    double x2;
    double y2;
    int AngleLU[2]{x1; y1};
    int AngleLD[2]{x2; y1};
    int AngleRU[2]{x1; y2};
    int AngleRD[2]{x2; y2};


public:
    Rectangle(const int AngleLU[2], const int AngleLD[2], const int AngleRU[2], const int AngleRD[2]);
    Rectangle(const int AngleLU[2], const int AngleLD[2], const int AngleRU[2], const int AngleRD[2]);
    ~Rectangle();
   

    int output_coordinates(const double x1, const double y1, const double x2, const double y2)
    {

    }
    int Sides(const double x1, const double y1, const double x2, const double y2)
    {

    }
    int Square(const double x1, const double y1, const double x2, const double y2)
    {

    }
    int move_a_rectangle_on_a_plane(const int AngleLU[2], const int AngleLD[2], const int AngleRU[2], const int AngleRD[2])
    {

    }

}

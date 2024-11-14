//#pragma once
//#include "Writer.h"
//#include "Triangulation.h"
//
//class STLWriter : public Writer
//{
//public:
//    void Write(const std::string& filename, const Triangulation& triangulation);
//
//private:
//    std::string fomulateText(Triangulation triangulation, Point point);
//};
//

#pragma once
#include <string>
#include <vector>
#include "Writer.h"
#include "Triangle.h"
#include "Triangulation.h"

class STLWriter : public Writer
{
public:
    void Write(const std::string& filename, const Triangulation& triangulation);

private:
    std::string formulateText(Triangulation triangulation, Point point);
};


#include <iostream>

class Rectangle 
{
	public:
		Rectangle(double input_w, double input_h);
		double get_perimeter();
		double get_area();
		void resize(double factor);
	private:
		double width;
		double height;
};

Rectangle::Rectangle(double input_w, double input_h)
{
    width = input_w;
    height = input_h;
}

double Rectangle::get_perimeter()
{
    return width*2 + height*2;
}

double Rectangle::get_area()
{
    return width * height;
}

void Rectangle::resize(double factor)
{
    width*=factor;
    height*=factor;
}

int main()
{
    Rectangle r = {2.2,2.2};
    std::cout << r.get_area() << std::endl;
    std::cout << r.get_perimeter() << std::endl;
    return 0;
}
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================

    
    Rectangle * rec = new Rectangle(length, width);

    Circle * cir = new Circle(radius);

    rec -> display();
    cir -> display();

      delete rec;
      delete cir; 
  
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}

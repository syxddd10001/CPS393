
/*Source: rectangle.h
*/
class Rectangle {
  private:                         //unnecessary, since private is default
    double width, length;
  public:
    void setWidth(double);
    void setLength(double);
    double getWidth(void)  const;  //the const(ant) keyword bans function
    double getLength(void) const;  //from altering any member variables
    double getArea(void)   const;  //in the object (width, length)
};

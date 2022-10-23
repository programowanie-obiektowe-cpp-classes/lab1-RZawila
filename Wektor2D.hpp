#include <math.h>
class Wektor2D
{
    public:
//konstruktor domuślny
    Wektor2D(){x=0.;y=0.;}
//konstruktor parametryczny
    Wektor2D(double u,double v)
    {
    x=u;
    y=v;
    }
//destruktor
    /*
     ~Wektor2D()
    {
        std::cout<<"I was nice beeing your vector"<<"\n";
    }
    */
//settery
    void setX(double a){x=a;}
    void setY(double b){y=b;}

//getter
    double getX(){return x;}
    double getY(){return y;}

    double norm(){
        double n = pow(x*x+y*y,0.5);
        return n;
    }

    void print()
    {
        std::cout<<"Wspolrzedna X:"<<x<<"\t Wspolrzedna y:"<<y<<"\n";
    }

//overload +
    Wektor2D operator + (Wektor2D &vec)
    {
        //suma wekrorów to nowy wektor?
         Wektor2D v;
         v.setX(x+vec.getX());
         v.setY(y+vec.getY());
         return v;

    }
//overload *
    double operator * (Wektor2D &v1)
    {
        double product = x*v1.getX()+y*v1.getY();

        return product;
    }
    private:
    double x;
    double y; // prywatne zmienne wspólrzêdne wektora x i y
};


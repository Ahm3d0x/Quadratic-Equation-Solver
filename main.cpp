#include <iostream>
#include <cmath>
using namespace std;
int main();

int stat(){
   int stat ;
cout << "if you need to start again press (1) :\n \b \b \b if you need to ENd again press (2) :"<< endl;    cout << ">>>> "; cin >> stat ;
if (stat == 1){
    cout << ">>-----------------------------------------------------------------<< " << endl;
    cout << ">>-----------------------------------------------------------------<< " << endl;
    main();
}else if(stat == 2){
    cout << "############> Good Bay <###########" << endl;
    cout << ">>-----------------------------------------------------------------<< " << endl;
    cout << ">>-----------------------------------------------------------------<< " << endl;
}else{
    cout << "!!!!!!> error in the data (1 or 2) <!!!!!!" << endl;
    cout << ">>-----------------------------------------------------------------<< " << endl;
        main();
        }
return 1;
};
int main()
{
double ax = 0;
double bx = 0;
double cx = 0;
double x1 = 0;
double x2 = 0;
double real = 0;
double imagin = 0;
cout << ">>>>>>>>>>>>> wellcom in Quadratic Equation Solver <<<<<<<<<<<<" << endl;
cout << ">>>>>>>>>>>>>>>>>> Created by Ahmed M Attia <<<<<<<<<<<<<<<<<<<" << endl;
cout << "lets get Equation parametar: " << endl;

cout << "enter X^2 parametar (a):"; cin >> ax;
cout << "enter X parametar (b):"; cin >> bx;
cout << "enter free parametar (c):"; cin >> cx;

double discriminant = (pow(bx,2)-(4*ax*cx));
cout << ">>-----------------------------------------------------------------<< " << endl;
cout << ">>-----------------------------------------------------------------<< " << endl;
cout << "discriminant is:" << discriminant<< endl;
cout << ">>-----------------------------------------------------------------<< " << endl;
cout << ">>-----------------------------------------------------------------<< " << endl;
if(discriminant > 0){
x1 = ((-bx) + sqrt(discriminant) )/2*ax;
x2 = ((-bx) - sqrt(discriminant))/2*ax;
cout << "first root x1 :" << x1<< endl;
cout << ">>--------------------------" << endl;
cout << "first root x2 :" << x2<< endl;
}else if (discriminant < 0){
real =  -bx/2*ax;
imagin = sqrt(-discriminant)/ 2*ax;
imagin = round(imagin * 100) / 100;
cout << "first root x1 a+bi :" << real <<"+"<< imagin << "i"<< endl;
cout << ">>--------------------------" << endl;
cout << "first root x2 a-bi :" << real <<"-"<< imagin << "i"<< endl;
}else if (discriminant == 0){
    x1 = -bx/2*ax;
    x2 = x1;
    cout << "first root x1 :" << x1<< endl;
    cout << ">>--------------------------" << endl;
    cout << "first root x2 :" << x2<< endl;
}else{
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "!!!!!!!> error in the data make sure it is real <!!!!!!" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
};
    cout << ">>-----------------------------------------------------------------<<" << endl;
    cout << ">>-----------------------------------------------------------------<<" << endl;
    cout << "##################>>>>  End of program <<<<<#########################" << endl;
stat();

    return 0;
}


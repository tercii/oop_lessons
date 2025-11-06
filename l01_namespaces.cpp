#include <iostream> // ekrana yazdirma ve klavyeden okuma islemi icin gerekli kutuphane
#include <cmath>    // matematiksel islemler icin gerekli kutuphane (c library)

 namespace Room1
 {
    int x;
    // function greet inside namespace Room1
    void greet()
    {
        std::cout << "Hello from Room 1" << std::endl;
    }
 }

namespace Room2
{
    int x;
    // function greet inside namespace Room2
    void greet()
    {
        std::cout << "Hello from Room 2" << std::endl;
    }
}

// call by value -> kopya deger uzerinde islem yapar
int func1(int y)
{
    y += 1.0f;
    return y;
}

// call by reference -> orijinal deger uzerinde islem yapar
int func2(int &y)  // cok daha kullanisli
{
    y += 1.0f;
    return y;
}

int func3(int *y)
{
    *y += 1.0f;
    return *y;
}

int main()
{
    int x,y,z;
    double x1;
    float a1,a2;
    char karakter = 'b';
    char cdizi[6]; // 'b' 'e' 'r' 'k' 'e' '\0'
   
    bool kontrol = true; // true 1, false 0
    kontrol = 3 > 5; 
    
    if (kontrol)
    {
        /* do something */
    }
    else
    {
        /* do something else */
    }

    /*
    y = 4;
    z = 5;
    
    std::cout << "merhaba dunya\n berke\n";
    std::cout << "merhaba dunya" << std::endl << "berke" << std::endl;
    std::cout << "sayi: " << x << std::endl;                                //printf("sayi: %d\n",x);
    std::cout << "sayi1: " << y << " sayi2: " << z << " OK!" <<std::endl;   //printf("sayi1: %d sayi2: %d OK!\n",y,z);

    std::cout << "sayi giriniz: ";
    std::cin >> x;                                                          // scanf("%d", &x);
    std::cout << "girdiginiz sayi: " << x << std::endl;                     //printf("girdiginiz sayi: %d\n",x);
    
    std::cout << "iki sayi giriniz: ";
    std::cin >> y >> z;                                                     // scanf("%d %d", &y
    std::cout << "girdiginiz sayilar: " << y << " " << z << std::endl;      //printf("girdiginiz sayilar: %d %d\n",y,z);
    */

    
    y = 4;

    std :: cout << "y (func1'den once)" << y << std::endl; 
    x = func1(y);
    std :: cout << "y (func1'den sonra)" << y << std::endl;
    std :: cout << "x (func1'den sonra)" << x << std::endl;

    x = func2(y);
    std :: cout << "y (func2'den sonra)" << y << std::endl;
    std :: cout << "x (func2'den sonra)" << x << std::endl;

    x = func3(&y);
    std :: cout << "y (func3'den sonra)" << y << std::endl;
    std :: cout << "x (func3'den sonra)" << x << std::endl;
    
    /*
    Room1::greet(); // Room1 isim alanindaki greet fonksiyonunu cagirir
    Room1::x = 5; // Room1 isim alanindaki x degiskenine erisir
    Room2::greet(); // Room2 isim alanindaki greet fonksiyonunu cagirir
    Room2::x = 10; // Room2 isim alanindaki x degiskenine erisir

    std::cout << "Room1 x: " << Room1::x << std::endl;
    std::cout << "Room2 x: " << Room2::x << std::endl;

    using namespace std; 
    cout << "Room1 x: " << Room1::x << endl;
    cout << "Room2 x: " << Room2::x << endl;
    */

    return 0;
}


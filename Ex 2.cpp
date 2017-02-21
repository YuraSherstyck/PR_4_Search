/*Хтось загадав число від 1 до N. За яку найменшу кількість запитань (на які він відповідає "так" або "ні") можна вгадати задумане число?*/
#include <iostream.h>
#include <conio.h>
#include <time.h>
int main ()
{
    setlocale(LC_ALL,"Russian"); 
    srand (time(NULL));
    int k=rand()%100;
    int k2=0;
        for( int i=0 ; i<1000 ; i++)
        {
            cout<<"Введите число: ";
            cin>>k2;
 
            if(k<k2)
                cout << "Слишком большое число!" << endl;
            if(k>k2)
                cout << "Слишком маленькое число!" << endl;
            if(k2==k)
                {cout<<endl<<"Ви угадали число! c "<<i+1<<" попиток"<<endl; break;}
        }
 system ("pause");
 return 0;
}

/*����� ������� ����� �� 1 �� N. �� ��� �������� ������� �������� (�� �� �� ������� "���" ��� "�") ����� ������� �������� �����?*/
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
            cout<<"������� �����: ";
            cin>>k2;
 
            if(k<k2)
                cout << "������� ������� �����!" << endl;
            if(k>k2)
                cout << "������� ��������� �����!" << endl;
            if(k2==k)
                {cout<<endl<<"�� ������� �����! c "<<i+1<<" �������"<<endl; break;}
        }
 system ("pause");
 return 0;
}

#include<iostream.h>
#include<math.h>

using namespace std;

class sophuc
{
private:
    double a;
    double b;
public:
    void nhap()
    {
        cout << "\n Nhap phan thuc : " ; 
		cin >> a;
        cout << " Nhap phan ao : " ;
	 	cin >> b;
    	}
    
    void in()
    {
        cout << "\n Phan thuc la : " << a;
        cout << "\n Phan ao la : " << b << "\n";
    	}
    
friend sophuc cong(sophuc n1, sophuc n2)
    {
        sophuc n;
        n.a = n1.a + n2.a;
        n.b = n1.b + n2.b;
        return n;
    	}
    
friend sophuc tru(sophuc n1, sophuc n2)
    {
        sophuc n;
        n.a = n1.a - n2.a;
        n.b = n1.b - n2.b;
        return n;
    	}
};

 main()
{
    sophuc ncong, ntru, n1, n2;
    
    cout << " Nhap so phuc thu nhat :  " ; 
	n1.nhap();
	
    cout << " Nhap so phuc thu hai : ";  
	n2.nhap();
	
	cout << endl;
	 
    cout << " Tong so phuc la : " ;
    ncong = cong(n1,n2);
    ncong.in();
    
    cout << " Hieu so phuc la :";
   	ntru = tru(n1,n2);
   	ntru.in();
   	
    system("pause");
}

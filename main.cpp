#include <iostream>
#include "circle.h"
#include <stdlib.h>

using namespace std;

int main()
{
	 double a, n, r;
	 
	 circle q;
	 
	 cout << "write a and b --> ";
	 cin >> a >> n;
	 q.set(a, n);
	 q.radcircle();
     q.showdata();
	 system("pause");
	 return 0;
}

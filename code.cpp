#include <iostream>
using namespace std;

int main()
{

 float pay,dis;

 cout << "Enter Payment amount : ";
 cin >> pay;

    if (pay > 10000)
    {
      discount=p*25/100;
    }

    else if (pay > 5000)
    {
      discount=y*15/100;
    }

    else if (pay > 3000)
    {
      discount=pay*10/100;
    }

    else
    discount= 0;

 cout << "Discount  is -> " << dis << endl;
return 0;
}

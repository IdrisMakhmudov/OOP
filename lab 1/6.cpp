#include <iostream>

using namespace std;

int main()
{

float dollars, val;

cin >> dollars;
val = dollars / 1.487;
cout << dollars <<  " dollars is " << val << " pounds." << endl;

val = dollars / 0.172;
cout << dollars << " dollars is " << val << " franc." << endl;

val = dollars / 0.584;
cout << dollars << " dollars is " << val << " deutsche mark." << endl;

val = dollars / 0.00955;
cout << dollars << " dollars is " << val << " japanese yen." << endl;;

val = dollars / 0.016;
cout << dollars << " dollars is " << val << " rubles.";

return 0;
}

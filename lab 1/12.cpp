#include <iostream>

using namespace std;

int main()
{

int funt, shil, pen, penni;

cin >> funt >> penni;

funt += penni / 100;

penni = penni % 100;

shil = penni / 12;

pen = penni % 12;

cout << "In outdated system " << funt <<'.' << shil <<'.' << pen << endl;

cout << "Decimal system " << funt <<'.' << penni;

return 0;

}

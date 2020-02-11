#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int funt, shil, pen;
cin >> funt >> shil >> pen;
cout << "In outdated system " << funt <<'.' << shil <<'.' << pen << endl;
cout << "Decimal system " << funt <<'.' << shil*12 + pen;

return 0;
}

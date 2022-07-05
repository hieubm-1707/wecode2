/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
for
while
if
switch
;
?
:
###End banned keyword*/
#include <iostream>

using namespace std;
int compare(int a, int b){
    return
    (a > b) - (b > a);
//###INSERT CODE HERE -

;
}


int main()
{
    int a, b;
    cin >> a >> b;

    cout << compare(a, b);

    return 0;
}

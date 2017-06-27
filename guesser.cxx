#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
srand((int)time(0));
int answer = (rand() % 100) +1;
int guess =0;
while (guess !=answer)
{
cout <<"guess a number";
cin >>guess;
if (guess > answer)
{
cout << "you geussed to high" << endl;
}
else if (guess <answer)
{
cout <<"you guessed to low" << endl;
}
}
cout <<"you guessed correct";
}

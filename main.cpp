#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int letters;

  do
  {
    cout<<"How many letters should there be per line? ";
    cin>>letters;
    
    if( letters < 1 || letters > 26 )
    {
      cout<<"\nPlease enter a number between 1-26.\n";
    }
  }while( letters < 1 || letters > 26 );

  return 0;
}

#include <iostream>
using namespace std;
int main()
{
   string input;
   cin >> input;
   //part 1
   bool flag_impossible = true;
   for (int i = input.size() - 1; i > 0; i--)
   {
      if (input[i] > input[i - 1])
      {
         flag_impossible = false;
         //swap two numbers
         char swap = input[i];
         input[i] = input[i - 1];
         input[i - 1] = swap;
		 for (int index = i + 1; index < input.size(); index++)
		 {
			for (int j = i; j < input.size() - 1; j++) // bubble sort
			{
				if (input[j] > input[j + 1])
				{
					swap = input[j];
					input[j] = input[j + 1];
					input[j + 1] = swap;
				}
			}
		 }
         break;
      }
   }
   if (flag_impossible)
   {
      cout << "impossible!\n";
   }
   else
   {
      cout << input << '\n';
   }
}

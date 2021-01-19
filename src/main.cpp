// CPP program to find nth ugly number
# include<iostream>

using namespace std;

/*
    Forward declaration of functions
    lets main be the first function.
*/

void row(const int k, const int i, const int c);

void col(const int i, const int n);

/* Driver program to test above functions */
int main()
{
    const int input = 10;
	cout<<"[INPUT] "<<input<<endl;
  cout<<"[OUTPUT]"<<endl;
	col(0, input);
	return 0;
}


// Function to print first
// n lines of Pascal's
// Triangle
void row(const int k, const int i, const int c) {
  if (k > i) return;
  cout<<c<<", ";
  const int a = c * (i-k)/(k+1);
  return row(k+1, i, a);
}
void col(const int i, const int n) {
  if (i > n) return;
  row(0, i, 1);
  cout<<endl;
  return col(i+1, n);
}

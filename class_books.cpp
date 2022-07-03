#include <iostream>

using namespace std;
class Books
{
 private:
	static char title[20];
	static char author[20];
	static char publisher[20];
	static char isbn[11];
 public:
	void get_data ()
	{
		cout << "Enter title of the book: ";
		cin >> title;
		cout << "Enter name of the author of the book: ";
		cin >> author;
		cout << "enter Publisher name of the book: ";
		cin >> publisher;
		cout << "Enter ISBN of the book: ";
		cin >> isbn;


	}
	void show_data ()
	{
		cout << title<<endl;
		cout << author<<endl;
		cout << publisher<<endl;
		cout << isbn;

	}

} s;

char Books::title[20];
char Books::author[20];
char Books::publisher[20];
char Books::isbn[11];
int main ()
{
	s.get_data ();
	s.show_data ();
	return 0;

}
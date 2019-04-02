#include"Books.h"

int cur_size = 0, buf_size = 0;
void add(Book*&bs, Book el) {
	if (buf_size == 0)
	{
		buf_size = 4;
		bs = new Book[buf_size];
	}
	else
	{
		if (cur_size == buf_size)
		{
			buf_size *= 2;
			Book*tmp1 = new Book[buf_size];
			for (int i = 0; i < cur_size; i++)
				tmp1[i] = bs[i];
			delete[] bs;
			bs = tmp1;
		}
	}
	bs[cur_size++] = el;
}

int main() {
	setlocale(LC_ALL, "Rus");

	ifstream in_file("books.txt");
	Book *bs = 0;
	Book tmp;
	char str[100];
	int y, p;
	if (!in_file)
		cerr << "File open error" << endl;
	else
	{
		while (!in_file.eof())
		{
			in_file.getline(str, 100, '#');
			tmp.set_author(str);

			in_file.getline(str, 100, '#');
			tmp.set_name(str);

			in_file.getline(str, 100, '#');
			tmp.set_publish(str);

			in_file >> y >> p;
			tmp.set_year(y);
			tmp.set_pages(p);

			add(bs, tmp);
		}
		int n;
		cout << "Enter the earliest year:" << endl;
		cin >> n;
		for (int i = 0; i < cur_size - 1; i++)
			if (bs[i].by_year(n))
				bs[i].print();
		cout << endl;

		cout << "Enter an author's full name:" << endl;
		cin.getline(str, 100);
		for (int i = 0; i < cur_size - 1; i++)
			if (bs[i].by_author(str))
				bs[i].print();
		cout << endl;

		cout << "Enter needed publishing house:" << endl;
		cin.getline(str, 100);
		for (int i = 0; i < cur_size - 1; i++)
			if (bs[i].by_publish(str))
				bs[i].print();
		cout << endl;
	}
	system("pause");
}
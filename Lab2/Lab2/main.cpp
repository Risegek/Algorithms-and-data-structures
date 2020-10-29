#include <iostream>
#include "BTS.h"
#include <locale.h>
void menu() {
	std::cout << "1. �������� ������� � ������" << std::endl
		<< "2. ������ ������" << std::endl
		<< "3. �������� ������ �� �������" << std::endl
		<< "4. ������� �������� �� �����" << std::endl
		<< "5. �������� �������� �� �����" << std::endl
		<< "6. ������� �������� �� �����" << std::endl
		<< "7. ������ ������" << std::endl
		<< "8. ������� ������" << std::endl
		<< "9. �������� ������" << std::endl
		<< "10. ������� ���������, ������� ������ ��������� �����" << std::endl
		<< "10. ���������" << std::endl;

}


int main() {
	setlocale(LC_ALL, "ru");
	Binary_tree<int, int> tree;
	bool k = true;
	while (k) {
		menu();
		int _k;
		std::cin >> _k;
		switch (_k)
		{
		case 1: {
			int val, key;
			std::cin >> key >> val;
			tree.insert(key,val);
			break; }
		case 2: {
			std::cout << tree.getSize() << std::endl;
			break; }
		case 3: {
			std::cout << tree.is_empty() << std::endl;
			break; }
		case 4: {
			int  key;
			std::cin >> key;
			std::cout << tree.get(key) << std::endl;
			break; }
		case 5: {
			int val, key;
			std::cin >> key >> val;
			std::cout << tree.change(key, val) << std::endl;
			break; }
		case 6: {
			int  key;
			std::cin >> key;
			std::cout << tree.remove(key) << std::endl;
			break; }
		case 7: {
			int* x = tree.keys();
			for (int i = 0; i < tree.getSize(); i++) {
				std::cout << x[i] << " ";
			}
			std::cout << std::endl;

			break; }
		case 8: {
			tree.show();
			break; }
		case 9: {
			tree.clear();
			break; }
		case 10: {
			int val;
			std::cin >> val;
			std::cout << tree.count(val);
			break; }
		default:
			k = false;
			break;
		}

	}


	system("Pause");
	return 0;
}
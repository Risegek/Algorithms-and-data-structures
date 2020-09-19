//2 �������
#include <iostream>
#include <locale.h>
#include <String>
#include "List.h"

int main() {
	setlocale(LC_ALL, "Rus");
	List<int> list;
	bool n = true;
	while (n) {
		int k;
		std::cout << "\t\tMenu\n" << "1. �������� ������� � ������\n" << "2. �������� ������� �� ������\n"
			<< "3. ������ �������\n" << "4.������� �������\n" << "5. ������� ������� �� ������\n"
			<< "6.�������� ������\n" << "7. ��������� �� �������\n" << "8. ���������, ���� �� ������� � �������\n"
			<< "9. �������� �������� �� ������\n" << "10. ������� �������� �� ������\n" << "11. ������� ������� ��������� ��������\n"
			<< "12. ������� ������ �� �����\n" << "13. ����� ������������� ���������\n" << "14. ���������(�����)\n";
		std::cin >> k;

		switch (k)
		{
		case 1: { // �������� ������� � ������
			int value;
			std::cin >> value;
			list.add(value);
			std::cout << std::endl;
			break; }
		case 2: { // �������� ������� �� ������
			int value,index;
			std::cin  >> index >> value;
			std::cout << list.add(index,value);
			std::cout << std::endl;
			break; }
		case 3: { // ������ �������
			std::cout << list.getSize() << " " << list.getCapacity() << std::endl;
			break; }
		case 4: { // ������� �������
			int value;
			std::cin >> value;
			std::cout << list.deleteValue(value) << std::endl;
			break; }
		case 5: { // ������� ������� �� ������
			int index;
			std::cin >> index;
			std::cout << list.deleteIndexVal(index) << std::endl;
			break; }
		case 6: { // �������� ������
			list.clear();
			break; }
		case 7: { // ��������� �� �������
			std::cout << list.isEmpty() << std::endl;
			break; }
		case 8: { // ���������, ���� �� ������� � �������
			int value;
			std::cin >> value;
			std::cout << list.contains(value) << std::endl;
			break; }
		case 9: { // �������� �������� �� ������
			int value, index;
			std::cin >> index >> value;
			std::cout << list.set(index, value) << std::endl;
			break; }
		case 10: { // ������� �������� �� ������
			int index;
			std::cin >> index;
			std::cout << list.get(index) << std::endl;
			break; }
		case 11: { // ������� ������� ��������� ��������
			int value;
			std::cin >> value;
			std::cout << list.getIndex(value) << std::endl;
			break; }
		case 12: { // ������� ������ �� �����
			int size = list.getSize();
			for (int i = 0; i < size; i++) {
				std::cout << list.get(i) << " ";
			}
			std::cout << std::endl;

			break; }
		case 13: { // ����� ������������� ���������
			std::cout << list.getSeenValCount() << std::endl;
			break; }
		case 14: {break; }
		case 15: {break; }
		default:
			break;
		}


	}



	return 0;
}
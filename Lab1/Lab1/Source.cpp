//2 �������
#include <iostream>
#include <locale.h>
#include <String>
#include "List.h"

int main() {
	setlocale(LC_ALL, "Rus");
	List<int> *list= NULL;
	bool n = true;
	List<int>::Iterator* it = NULL;
	List<int>::reverse_Iterator* it1 = NULL;
	while (n) {
		int k;
		std::cout << "\t\tMenu\n" << "1. �������� ������� � ������\n" << "2. �������� ������� �� ������\n"
			<< "3. ������ �������\n" << "4.������� �������\n" << "5. ������� ������� �� ������\n"
			<< "6. �������� ������\n" << "7. ��������� �� �������\n" << "8. ���������, ���� �� ������� � �������\n"
			<< "9. �������� �������� �� ������\n" << "10. ������� �������� �� ������\n" << "11. ������� ������� ��������� ��������\n"
			<< "12. ������� ������ �� �����\n" << "13. ����� ������������� ���������\n" << "14. ��������: �������� *\n" << "15. ��������: �������� ++\n"
			<< "16. ��������: �������� --\n" << "17. ������ ��������: �������� *\n" << "18. ������ ��������: �������� ++\n" << "19. ������ ��������: �������� --\n" 
			<< "20. ������� �������\n" << "21. �������� ��������� �� �����\n" << "22. �������� ���������� ��������� �� �����\n" << "23. ��������� ��������� �� ������\n"
			<< "24. ��������� ���������� ��������� �� ������\n" << "25. ������ � ������� ���������\n" << "26. ������ � ������� ���������� ���������\n";
		std::cin >> k;

		switch (k)
		{
		case 1: { // �������� ������� � ������
			int value;
			std::cin >> value;
			list->add(value);
			std::cout << std::endl;
			break; }
		case 2: { // �������� ������� �� ������
			int value, index;
			std::cin >> index >> value;
			std::cout << list->add(index, value);
			std::cout << std::endl;
			break; }
		case 3: { // ������ �������
			std::cout << list->getSize() << " " << list->getCapacity() << std::endl;
			break; }
		case 4: { // ������� �������
			int value;
			std::cin >> value;
			std::cout << list->deleteValue(value) << std::endl;
			break; }
		case 5: { // ������� ������� �� ������
			int index;
			std::cin >> index;
			std::cout << list->deleteIndexVal(index) << std::endl;
			break; }
		case 6: { // �������� ������
			list->clear();
			break; }
		case 7: { // ��������� �� �������
			std::cout << list->isEmpty() << std::endl;
			break; }
		case 8: { // ���������, ���� �� ������� � �������
			int value;
			std::cin >> value;
			std::cout << list->contains(value) << std::endl;
			break; }
		case 9: { // �������� �������� �� ������
			int value, index;
			std::cin >> index >> value;
			std::cout << list->set(index, value) << std::endl;
			break; }
		case 10: { // ������� �������� �� ������
			int index;
			std::cin >> index;
			try
			{
				std::cout << list->get(index) << std::endl;
			}
			catch (...)
			{
				std::cout << "Exception" << std::endl;
			}
			break; }
		case 11: { // ������� ������� ��������� ��������
			int value;
			std::cin >> value;
			std::cout << list->getIndex(value) << std::endl;
			break; }
		case 12: { // ������� ������ �� �����
			int size = list->getSize();
			for (int i = 0; i < size; i++) {
				try
				{
					std::cout << list->get(i) << " ";
				}
				catch (...)
				{
					std::cout << "Exception" << std::endl;
				}
			}
			std::cout << std::endl;

			break; }
		case 13: { // ����� ������������� ���������
			std::cout << list->getSeenValCount() << std::endl;
			break; }
		case 14: {
			if (it == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			try
			{
				std::cout << *(*it) << std::endl;
			}
			catch (...)
			{
				std::cout << "Exception" << std::endl;
			}
			break;
		}
		case 15: {
			if (it == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			try
			{
				++(*it);
			}
			catch (...)
			{
				std::cout << "Exception" << std::endl;
			}
			break; }
		case 16: {
			if (it == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			try
			{
				--(*it);
			}
			catch (...)
			{
				std::cout << "Exception" << std::endl;
			}
			break; }
		case 17: {
			if (it1 == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			try
			{
				std::cout << **it1 << std::endl;
			}
			catch (...)
			{
				std::cout << "Exception" << std::endl;
			}
			break; }
		case 18: {
			if (it1 == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			try
			{
				++(*it1);
			}
			catch (...)
			{
				std::cout << "Exception" << std::endl;
			}
			break; }
		case 19: {
			if (it1 == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			try
			{
				--(*it1);
			}
			catch (...)
			{
				std::cout << "Exception" << std::endl;
			}
			break;
		}
		case 20: {
			int capacity;
			std::cin >> capacity;
			list = new List<int>(capacity);
			break;
		}
		case 21:
		{
			if (it == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			if (*it != *list->end()) std::cout << 0 << std::endl;
			else {
				std::cout << 1 << std::endl;
			}
			break;
		}
		case 22:
		{
			if (it1 == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			if (*it1 != *list->rend()) std::cout << 0 << std::endl;
			else {
				std::cout << 1 << std::endl;
			}
			break;
		}
		case 23:
		{
			if (it == NULL) it = new List<int>::Iterator(list);
			it = list->begin();
			break;
		}
		case 24:
		{
			if (it1 == NULL) it1 = new List<int>::reverse_Iterator(list);
			it1 = list->rbegin();
			break;
		}
		case 25:
		{
			int val;
			std::cin >> val;
			if (it == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			try
			{
				**it = val;
			}
			catch (...)
			{
				std::cout << "Exception" << std::endl;
			}
			break;
		}
		case 26:
		{
			int val;
			std::cin >> val;
			if (it1 == NULL)
			{
				std::cout << "Error" << std::endl;
				break;
			}
			try
			{
				**it1 = val;
			}
			catch (...)
			{
				std::cout << "Exception" << std::endl;
			}
			break;
		}
		default: {
			n = false;
			break;
		}
		}


	}



	return 0;
}
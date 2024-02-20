#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int let, mes, rub;
	double summa, stavka, kurs, summa_mes, summa_let, summa_god;

	cout << "\t\tСегодня: 10.10.2022г.\n" << "\t\tКурс Евро к Рублю: 1 eur = 60 руб.\n";
	cout << "Введите сумму: ";
	cin >> summa;
	cout << "\nВведите процентную ставку(годовых): ";
	cin >> stavka;
	cout << "\nВведите срок вложения (годы): ";
	cin >> let;
	kurs = 60;
	mes = let * 12;
	summa_mes = (summa * stavka) / 100;
	summa_god = summa_mes * 12;
	summa_let = summa_god * let;
	cout << "\nВыплачиваемая сумма euro составляет:" << "\nВ месяц: " << summa_mes << "\nВ год: " << summa_god << "\nВ указанный Вами срок: " << summa_let;
	rub = summa_let * kurs;
	cout << "\nПереводя на курс рубля, Вы получите: " << rub << " руб.";


	return 0;
}

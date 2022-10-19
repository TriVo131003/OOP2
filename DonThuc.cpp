#include"DonThuc.h"
	void DonThuc::input()
	{
		cout << " Enter he so: ";
		cin >> heSo;
		cout << " Enter so mu: ";
		cin >> soMu;
	}
	void DonThuc::display()
	{
		if (heSo != 1) {
			if (heSo == -1)
				cout << "-";
			else
				cout << heSo;
		}
		if (soMu == 1)
			cout << "X" << endl;
		else if (soMu != 0)
			cout << "X^" << soMu << endl;
		if (soMu == 0 && heSo == 1)
			cout << 1;
	}
	void DonThuc::compute(int x)
	{
		cout << "Value: " << heSo * pow(x, soMu) << endl;
	}
	float DonThuc::getHeSo() {
		return heSo;
	}
	float DonThuc::getSoMu() {
		return soMu;
	}
	void DonThuc::setHeSo() {
		cin >> heSo;
	}
	void DonThuc::setSoMu()
	{
		cin >> soMu;
	}
	DonThuc DonThuc::daoHam()
	{
		DonThuc temp;
		temp.heSo = heSo * soMu;
		temp.soMu = soMu - 1;
		return temp;
	}
	DonThuc DonThuc::nguyenHam()
	{
		DonThuc temp;
		temp.soMu = soMu + 1;
		temp.heSo = heSo / (soMu + 1);
		return temp;
	}
	DonThuc DonThuc::Add(DonThuc a)
	{
		DonThuc tmp;
		tmp.heSo = heSo + a.heSo;
		tmp.soMu = soMu;
		return tmp;
	}
	DonThuc DonThuc::Sub(DonThuc a)
	{
		DonThuc tmp;
		tmp.heSo = heSo - a.heSo;
		tmp.soMu = soMu;
		return tmp;
	}
	DonThuc DonThuc::Mul(DonThuc a)
	{
		DonThuc tmp;
		tmp.heSo = heSo * a.heSo;
		tmp.soMu = soMu + a.soMu;
		return tmp;
	}
	DonThuc DonThuc::Div(DonThuc a)
	{
		DonThuc tmp;
		tmp.heSo = heSo / a.heSo;
		tmp.soMu = 0;
		return tmp;
	}
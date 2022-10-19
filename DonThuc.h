#pragma once
#ifndef _DONTHUC_H_
#define _DONTHUC_H_
#include<iostream>
using namespace std;
class DonThuc
{
private:
	float heSo;
	float soMu;
public:
	void input();
	void display();
	void compute(int x);
	float getHeSo();
	float getSoMu();
	void setHeSo();
	void setSoMu();
	DonThuc daoHam();
	DonThuc nguyenHam();
	DonThuc Add(DonThuc a);
	DonThuc Sub(DonThuc a);
	DonThuc Mul(DonThuc a);
	DonThuc Div(DonThuc a);
};
#endif


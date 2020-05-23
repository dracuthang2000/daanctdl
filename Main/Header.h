#pragma once
#include "maybay.h"
#include"readandwritefile.h"
void nhapdsmaybay(DS_MAYBAY& mb)
{
	mb.sl++;
	mb.dsmaybay[mb.sl]=new MAY_BAY;
	cin >> mb.dsmaybay[mb.sl]->loaimaybay;
	cin >> mb.dsmaybay[mb.sl]->sohieu;
	cin >> mb.dsmaybay[mb.sl]->socho;
}
#pragma once
#include <fstream>
#include <iostream>
#include <stdio.h>
#include "maybay.h"
#include <conio.h>
using namespace std;

void writefile_maybay(DS_MAYBAY& mb)
{
	ofstream fi;
	fi.open("ds_maybay.txt", ios_base::out | ios_base::app);
	fi << mb.dsmaybay[mb.sl]->loaimaybay << endl;
	fi << mb.dsmaybay[mb.sl]->sohieu << endl;
	fi << mb.dsmaybay[mb.sl]->socho << endl;
	fi.close();
}
void readfile_maybay(DS_MAYBAY& mb)
{
	ifstream fi;
	fi.open("ds_maybay.txt", ios_base::in);
	while (fi.eof() != true)
	{
		mb.dsmaybay[mb.sl] = new MAY_BAY;
		fi >> mb.dsmaybay[mb.sl]->loaimaybay;
		fi >> mb.dsmaybay[mb.sl]->sohieu;
		fi >> mb.dsmaybay[mb.sl]->socho;
		mb.sl++;
	}
	fi.close();
}
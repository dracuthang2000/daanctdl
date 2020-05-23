#pragma once
#include<iostream>
#define NULL 0
using namespace std;
struct may_bay
{
	string sohieu;
	string loaimaybay;
	int socho;
};
typedef struct may_bay MAY_BAY;
struct ds_maybay
{
	MAY_BAY* dsmaybay[300];
	int sl = 0;
};
typedef struct ds_maybay DS_MAYBAY;
struct ve
{
	int n;
	string cmnd;
	string sohieu;
};
typedef struct ve VE;

struct chuyenbay
{
	string sohieu;
	string sanbay;
	int ngay;
	int gio;
	int thang;
	int nam;
	VE ds_ve;
	char trangthai;
	chuyenbay* next;
};

typedef struct chuyenbay CHUYEN_BAY;
struct ds_chuyen_bay
{
	CHUYEN_BAY* pfirst = NULL;
	int sl = 0;
};
typedef struct ds_chuyen_bay DS_CHUYEN_BAY;
struct hanh_khach
{
	int cmnd;
	string ho;
	string ten;
	string phai;
	DS_CHUYEN_BAY ds_mb;
	hanh_khach *pleft;
	hanh_khach *pright;
};
typedef struct hanh_khach* tree;
struct ds_hanhkhach
{
	tree ds = NULL;
	int sl = 0;
};
typedef ds_hanhkhach DS_HANH_KHACH;

//class may_bay
//{
//public:
//	string sohieu;
//	string loaimaybay;
//	int socho;
//};
//typedef class may_bay MAY_BAY;
//class ds_maybay
//{
//public:
//	MAY_BAY* dsmaybay[300];
//	int sl = 0;
//};
//class ve : public hanh_khach, public may_bay;
//class chuyen_bay
//{
//public:
//	string sohieu;
//	string sanbay;
//	int gio;
//	int ngay;
//	int thang;
//	int nam;
//};
//typedef class chuyen_bay CHUYENBAY;
//class ds_chuyenbay 
//{
//	CHUYENBAY *pfirst=NULL;
//	int sl = 0;
//};
//typedef class ds_chuyenbay DS_CHUYENBAY;
//class hanh_khach
//{
//	string cmnd;
//	string ho;
//	string ten;
//	string sex;
//	DS_CHUYENBAY ds_mb;
//	hanh_khach *pleft;
//	hanh_khach *pright;
//};
//typedef class hanh_khach* tree;
//class ds_hanhkhach
//{
//	tree ds = NULL;
//	int sl = 0;
//};


#include<Windows.h>
#include<vector>
#include<iostream>
#include"changliang.h"
namespace LIZI
{
	class Li_zi_1
	{
	private:
		unsigned short pd_lz1;
		unsigned short pd_lz1_2;
		bool lizi1_kg_pd;
		int x;
		int y;
		int color;
		unsigned int lz1_js_x[LZ_SL];
		unsigned int lz1_js_y[LZ_SL];
	public:
		//重置函数：
		void rest();
		//普通函数:
		void lizi_1();
		bool lizi1_kg(bool);
		bool lizi1_kg();
		//构造函数和析构函数：
		Li_zi_1();
		Li_zi_1(unsigned short, unsigned short, bool, int, int, int, unsigned int, unsigned int);
		~Li_zi_1();
	};
}
namespace QUYU
{
	class Qu_yu_lei_1
	{
	private:
		unsigned int i;
		unsigned int j;
		unsigned int k;
		double x1;
		double y1;
		double x2;
		double y2;
		std::vector<bool> pd;
		std::vector<bool> sz_cc;
		std::vector<int> zc;
	public:
		//重置函数
		void rest();
		//返回和设置函数
		bool sz_assignment(unsigned int, int, bool);
		bool sz_back(unsigned int, int);
		//鼠标检测
		int mtest();
		int mtest(unsigned int, unsigned int);
		//int类型返回和设置函数
		int sz_back_int(unsigned int);
		int sz_assignment_int(unsigned int, int);
		//坐标显示（用于测试）
		void see_xy();
		//运算符重载
		void operator=(const Qu_yu_lei_1&);
		//坐标重载
		void xy_overloading(double x_1, double y_1, double x_2, double y_2);
		//构造函数和析构函数：
		Qu_yu_lei_1();
		Qu_yu_lei_1(unsigned int, unsigned int, unsigned int);
		Qu_yu_lei_1(unsigned int, unsigned int, unsigned int, double, double, double, double);
		~Qu_yu_lei_1();
	};
}

namespace USER
{
	class User
	{
	private:
		std::string name_;
		unsigned int ID_;
		unsigned int permissions_;
	public:
		//ID获取
		unsigned int& ID();
		//名字获取
		std::string& name();
		//名字修改
		std::string& name_set(std::string&);
		//构造和析构函数
		User();
		User(std::string);
		~User();
	};
}
extern LIZI::Li_zi_1 li_zi_1_create_1;

extern QUYU::Qu_yu_lei_1 cai_dan_1;
extern QUYU::Qu_yu_lei_1 cai_dan_2;
extern QUYU::Qu_yu_lei_1 cai_dan_3;

extern QUYU::Qu_yu_lei_1 cai_dan_2_1;
extern QUYU::Qu_yu_lei_1 cai_dan_2_2;
extern QUYU::Qu_yu_lei_1 cai_dan_2_3;
extern QUYU::Qu_yu_lei_1 cai_dan_2_qd;

extern QUYU::Qu_yu_lei_1 cai_dan_2_fbl[6];

extern QUYU::Qu_yu_lei_1 return_cd;
extern QUYU::Qu_yu_lei_1 sounds;
extern QUYU::Qu_yu_lei_1 xo_;
extern QUYU::Qu_yu_lei_1 win_mtest;

extern USER::User a;
extern USER::User b;
extern void ht_xo(USER::User&, USER::User&);

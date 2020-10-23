#include"Class1.h"

//LIZI空间的Li_zi_1类的构建、析构函数
LIZI::Li_zi_1::Li_zi_1(unsigned short a, unsigned short b, bool c, int d, int e, int f, unsigned int g, unsigned int h)
{
	pd_lz1 = a;
	pd_lz1_2 = b;
	lizi1_kg_pd = c;
	x = d;
	y = e;
	color = f;
	for (int i = 0; i < LZ_SL; i++)
	{
		lz1_js_x[i] = g;
		lz1_js_y[i] = h;
	}
}
LIZI::Li_zi_1::~Li_zi_1()
{
}
LIZI::Li_zi_1::Li_zi_1()
{
	pd_lz1 = 0;
	pd_lz1_2 = 0;
	lizi1_kg_pd = 0;
	x = 0;
	y = 0;
	color = 0;
	for (int i = 0; i < LZ_SL; i++)
	{
		lz1_js_x[i] = 0;
		lz1_js_y[i] = 0;
	}
}
void LIZI::Li_zi_1::rest(Li_zi_1&)
{
	pd_lz1 = 0;
	pd_lz1_2 = 0;
	lizi1_kg_pd = 0;
	x = 0;
	y = 0;
	color = 0;
	for (int i = 0; i < LZ_SL; i++)
	{
		lz1_js_x[i] = 0;
		lz1_js_y[i] = 0;
	}
}
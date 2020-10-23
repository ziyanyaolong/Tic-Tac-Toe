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
		void rest(Li_zi_1&);
		//普通函数:
		void lizi_1(Li_zi_1& a);
		bool lizi1_kg(bool, Li_zi_1&);
		bool lizi1_kg(const Li_zi_1&);
		//构造函数和析构函数：
		Li_zi_1();
		Li_zi_1(unsigned short, unsigned short, bool, int, int, int, unsigned int, unsigned int);
		~Li_zi_1();
	};
}
extern LIZI::Li_zi_1 li_zi_1_create_1;


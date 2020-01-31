#include "Ships.h"

class Cell
{
    public:
        Cell(){
            m_Ship = NULL;
        }
        ~Cell() {};

        int m_symbol;

        void Print();
        void SetShip(Ship *part_of_ship);

        Ship *m_Ship;
};

class Map
{
	public:
		Map();
		~Map();

		void initialize();
		void print_map();

		Cell m_cells[64][64];
		Ship_4_Vladimir_Mikulushevskiy m_Ship_4[1];
		Ship_3_Prorector m_Ship_3[2];
		Ship_2_Decan m_Ship_2[3];
		Ship_1_Zavkaf m_Ship_1[4];
		Submarine_Session m_Submarine[1];
		Landing_craft m_Landing_craft[2];

		Ship *m_Ships[13];
};
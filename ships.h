#include "ship.h"
#include <stdlib.h>

class Map;

class Ship_4_Vladimir_Mikulushevskiy : public Ship
{
	public:
		Ship_4_Vladimir_Mikulushevskiy();
		~Ship_4_Vladimir_Mikulushevskiy();
		void Print();
};

class Ship_3_Prorector : public Ship
{
	public:
		Ship_3_Prorector();
		~Ship_3_Prorector();
		void Print();
};

class Ship_2_Decan : public Ship
{
	public:
		Ship_2_Decan();
		~Ship_2_Decan();
		void Print();
};

class Ship_1_Zavkaf : public Ship
{
	public:
		Ship_1_Zavkaf();
		~Ship_1_Zavkaf();
		void Print();
};

class Submarine_Session : public Ship
{
	public:
		Submarine_Session();
		~Submarine_Session();
		void Print();
};

class Landing_craft : public Ship
{
	public:
		Landing_craft();
		~Landing_craft();
		void Print();
};

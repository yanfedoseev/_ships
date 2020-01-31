class Map;
class Cell;

class Ship
{
    public:
        Ship();
        ~Ship();

        virtual void Print(){}

        Cell *position;
};


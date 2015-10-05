
class Point
{
public:
	int x,y;
	
	Point operator=(Point& p);
	bool operator==(Point& p)const;
	bool operator!=(Point& p)const;
	Point operator+=(Point& p);
	Point operator-=(Point& p);
	Point operator+(Point& p)const;
	Point operator-(Point& p)const;
	bool IsZero()const;
	void SetZero();
	void Negate();

};
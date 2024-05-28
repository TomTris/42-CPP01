
#include <iostream>



class Human{

private:
	std::string 	name;
	static	int		totalHumans;
public:
	Human()
	{
		std::cout << "I am born2" << std::endl;
		totalHumans++;
		return ;
	}

	Human(std::string name): name(name){
		std::cout << "I am born1" << name << std::endl;
	}
	~Human()
	{
		std::cout << "I am die" << std::endl;
	}
	std::string get_name() {return this->name;}

	static int	getTotalHumans(void);
	void	setName(std::string name);

};

int Human::totalHumans = 0;

int	Human::getTotalHumans(void) 				{return (totalHumans);}
void	Human::setName(std::string name_out)	{this->name = name_out;}

Human *get_humans( std::string name_out,int len )
{
	int i = -1;

	Human *ptr = new Human[len];
	while (++i < len)
	{
		ptr[i].setName(name_out);
		std::cout << ptr[i].get_name() << std::endl;
	}
	return ptr;
}

int main()
{
	Human *qdo = get_humans("qdo", 6);
	std::cout << "totalHumans = " << Human::getTotalHumans() << std::endl;
	Human *abc = get_humans("abc", 6);
	std::cout << "totalHumans = " << Human::getTotalHumans() << std::endl;
	delete [] qdo;
	delete [] abc;
}

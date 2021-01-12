# include <cstring>
# include <cstdlib>

class AbstractN
{
	public:
		virtual int operator+(AbstractN& val) = 0;
		virtual int operator-(AbstractN& val) = 0;
};

class N: public AbstractN
{
	private:
		char annotation[100];
		int	 num;
	public:
		N(int num): num(num) {}
		int operator+(AbstractN& val)
		{
			return (this->num + (dynamic_cast<N&>(val)).num);
		}
		int operator-(AbstractN& val)
		{
			return (this->num - (dynamic_cast<N&>(val)).num);
		}
		void setAnnotation(char *val)
		{
			memcpy(annotation, val, strlen(val));
		}
};

int main(int argc, char **argv)
{
	if (argc < 2)
		std::exit(1);

	N *a = new N(5);
	N *b = new N(6);
	a->setAnnotation(argv[1]);
	return *b+*a;
}
#define _USE_MATH_DEFINES
#define sqr(x) (x) * (x)
#include <iostream>

using namespace std;

constexpr int INF(0x3f3f3f3f);

int32_t main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	class MyClass
	{
	private:
	protected:
	public:
		int g;
		MyClass(/* params */) {}
		~MyClass() {}
	} a;
	cout << a.g;
}

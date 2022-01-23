#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long a;
	long b;
	long c;
	cin >> a;
	cin >> b;
	cin >> c;
	long d = b * b - 4 * a*c;
	if (d == 0) {
		int x = -b / a / 2;
		cout << "Two same roots x=" << x << endl;
	}
	else if (d <0) {
		cout << "No real root" << endl;
	}
	else {
		int x1 = (-b + (int)sqrt((double)d)) / (2 * a);
		int x2 = (-b - (int)sqrt((double)d)) / (2 * a);
		if (x1 < x2) {
			cout << "Two different roots x1=" << x2 << " , x2=" << x1 << endl;
		}
		else {
			cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
		}
	}

	return 0;
}


	


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
#include<map>
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



bool isA(int n) {

	string s = to_string(n);
	int sum = 0;
	int len = s.length();
	for (int i = 0; i < len;i++) {
		int a = (int)s[i] - (int)'0';
		sum += pow(a,len);
	}

	if (sum == n)return true;
	else return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	int m;
	cin >> n >> m;
	bool isNone = true;
	for (int i = n; i <= m;i++) {
		if (isA(i)) {
			cout << i << " ";
			if (isNone)isNone = false;
		}
	}
	if (isNone)cout << "none";
	return 0;
}


	


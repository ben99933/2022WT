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
	
	int n;
	cin >> n;
	for (int t = 0; t < n;t++) {
		int arr[4];
		for (int i = 0; i < 4;i++) {
			cin >> arr[i];
		}
		if ((arr[3] + arr[1])/2 == arr[2]) {
			int d = arr[3] - arr[2];
			for (int i = 0; i < 4; i++) {
				cout << arr[i] << " ";
			}
			cout << arr[3] + d << endl;
		}
		else {
			int r = arr[3] / arr[2];
			for (int i = 0; i < 4; i++) {
				cout << arr[i] << " ";
			}
			cout << arr[3] * r << endl;
		}
	}
	return 0;
}


	


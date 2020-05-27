/* Written by: Aryan V S */

#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(x)  x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define print(x) "[" << #x ": " << x << "]"
#ifdef Z_LOCAL
template <typename T> class Range { public: T B, E; };
template <typename T> Range <T> make_range (const T& B, const T& E) { return Range <T> {B, E}; }
template <typename T> auto Check (T* x) -> decltype(cerr << *x, 0);
template <typename T> char Check (...);
class Timer { chrono::time_point <chrono::steady_clock> B, E; public: Timer () : B(), E()
{ B = chrono::steady_clock::now(); } ~Timer () { E = chrono::steady_clock::now();
cerr << "\nDuration: " << ((chrono::duration <double>)(E - B)).count() << "s\n"; } } TimerT;
#endif
class Debug { public:
#ifdef Z_LOCAL
	~Debug () { cerr << endl; }
	template <typename T> typename enable_if <sizeof Check <T> (0) != 1, Debug&>::type operator << (const T& D)
	{ cerr << boolalpha << D; return *this; }
	template <typename T> typename enable_if <sizeof Check <T> (0) == 1, Debug&>::type operator << (const T& D)
	{ return *this << make_range(begin(D), end(D)); }
	template <typename A, typename B> Debug& operator << (const pair <A, B>& D)
	{ return *this << "(" << D.first << ", " << D.second << ")"; }
	template <typename T> Debug& operator << (const Range <T>& D)
	{ *this << "["; for (auto i = D.B; i != D.E; ++i) *this << ", " +  2 * (i == D.B) << *i; return *this << "]"; }
#else
	template <typename T> Debug& operator << (const T&) { return *this; }
#endif
};

const int max_n = 2e5 + 1;

void solve () {
	int n;
	cin >> n;
	vector <int> cnt (max_n, 0);
	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		++cnt [a];
	}
	ll have = 1, extra = 0;
	for (int i = 1; i < max_n; ++i) {
		if (have + extra >= i) {
			have += cnt [i] + extra;
			extra = 0;
		}
		else {
			extra += cnt [i];
		}
	}
	cout << have << '\n';
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	cout.precision(10);
	cout << fixed;// << boolalpha;

	int t = 1;
	cin >> t;
	while (t--)
		solve();

	return 0;
}

/** notes to me from me
	 *
	 * aim:
	 *      - not to achieve high rating but to improve as a problem solver
	 *      - to focus more on solving problems than rating
	 *
	 * i must remember the following:
	 *      - check for overflow
	 *      - check for out of bounds read/write
	 *      - check for any other errors that will hinder you from AC on first submission
	 *      - check logic for special/boundary cases
	 *      - think simple, fast and efficient. no need to make things complicated
	 *      - spending time to think and test your approach is more valuable than wasting
	 *        time on submission and then debugging a wrong solution. you've proven myself
	 *        from experience many times. dont be stupid anymore and actually remember this.
	 *      - no need to use fancy coding styles and techniques. keep it simple
	 *      - don't blank out in the last 30 mins
	 *      - no stress at all. stay calm. cool, we got this nigga
	 *      - stop checking standings/dashboard. stop comparing
	 *      - read all problem statements. sometimes the D's are easier to solve than the B's
	 *      - write your ideas down. you've forgotten them a couple of times in the past
	 */
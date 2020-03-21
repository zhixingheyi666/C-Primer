//self@@:���ļ�����������������վ ��� �� coding
//��վ��Ŀ���غ���Բ鿴���˴��룬��Ŀ�з��࣬�ݶȶ��Ѷ����ú���������ѧϰ�ɳ�
// https://www.luogu.com.cn/




#include <iostream>
//#include <stdio.h>
//#include <iomanip>
//#include "sales_item.h"
//#include "sales_data.h"
#include <cstdio>
//#include <string>
#include <vector>
#include <iterator>
#include <cstring>
#include<stdexcept>
#include<math.h>
#include<algorithm>




//using namespace std;
using std::cin;
using std::cerr;
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::runtime_error;
using std::exception;



//P1000 ������������ Problem--------------------------------------------
void luogu1000()
{
	//ѧϰ����һ�ֶ�����������ַ��������İ취��˫��������Ӵ�дR,������ݼ�����
	//C++11 raw string literal

	cout << (R"(                ********
               ************
               ####....#.
             #..###.....##....
             ###.......######              ###            ###
                ...........               #...#          #...#
               ##*#######                 #.#.#          #.#.#
            ####*******######             #.#.#          #.#.#
           ...#***.****.*###....          #...#          #...#
           ....**********##.....           ###            ###
           ....****    *****....
             ####        ####
           ######        ######
##############################################################
#...#......#.##...#......#.##...#......#.##------------------#
###########################################------------------#
#..#....#....##..#....#....##..#....#....#####################
##########################################    #----------#
#.....#......##.....#......##.....#......#    #----------#
##########################################    #----------#
#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#
##########################################    ############ )");
}

//P1001 A+B Problem--------------------------------------------
int luogu1001()
{
	int a, b;
	std::cout << "Hello World!\n";
	std::cout << "Please enter two integers:/n";
	std::cin >> a >> b;
	std::cout << a + b;
	return a + b;
}

//P1422 ���ľ�
void luogu1422()
{
	//int m;
	//double c;
	//cin >> m;
	//if (m <= 150) c = 0.4463 * m;
	//self@��������о�:Warning	C26451 Arithmetic overflow : Using operator '-' on a 4 byte value and then casting the result to a 8 byte value.
		//Cast the value to the wider type before calling operator '-' to avoid overflow(io.2).
		//�ο���https://docs.microsoft.com/en-us/visualstudio/code-quality/c26451?view=vs-2019
	//else if (m <= 400) c = 66.945 + ((short)m - 150) * 0.4663;//��C26451 Arithmetic overflow����
	//else if (m <= 400) c = 66.945 + ((long)m - 150) * 0.4663//��C26451 Arithmetic overflow����;
	//else if (m <= 400) c = 66.945 + ((unsigned int)m - 150) * 0.4663;//��C26451 Arithmetic overflow����;
	//else if (m <= 400) c = 66.945 + ((unsigned __int64)m - 150) * 0.4663;//��������
	//else if (m <= 400) c = 66.945 + ((long long)m - 150) * 0.4663;//��������
	//else c = 183.52 + ((long long)m - 400) * 0.5663;
	//cout.setf(ios::fixed);
	//cout << fixed << setprecision(1) << c;
}

//P1909 ��Ǧ��
void luogu1909() {
	////my solution
	//struct Sales {
	//	unsigned int num = 0;
	//	unsigned int price = 0;
	//};
	//
	//
	//unsigned int renshu;
	//unsigned int count,cost=100000000, cost_t;

	//Sales qianbi;
	//cin >> renshu;
	//for (int i = 0; i < 3; i++) {
	//	cin >> qianbi.num >> qianbi.price;
	//	//unsigned int itt = { renshu / qianbi.num };
	//	//cout << "renshu/qianbi.num = " << renshu / qianbi.num << '\n';
	//	//cout << "renshu%qianbi.num = " << renshu % qianbi.num << '\n';
	//	//cout << itt<<'\n';
	//	if (renshu % qianbi.num)
	//		cost_t = (renshu / qianbi.num + 1) * qianbi.price;
	//	else
	//		cost_t = renshu / qianbi.num * qianbi.price;
	//	if (cost > cost_t)
	//		cost = cost_t;
	//}
	//cout << cost;

	//Sales qianbi;
	//cin >> renshu;
	//cin >> qianbi.num >> qianbi.price;
	//count = 0;
	//for (unsigned int j = 0; count++, j += qianbi.num, j < renshu;);
	//cost = count * qianbi.price;
	//for (int i = 0; i < 2; i++)
	//{
	//	cin >> qianbi.num >> qianbi.price;
	//	count = 0;
	//	for (unsigned int j = 0; count++, j += qianbi.num, j < renshu;);
	//	cost_t = count * qianbi.price;
	//	if(cost > cost_t){
	//		cost = cost_t;
	//	}
	//}
	//cout << cost;

	////other solution #include <stdio.h> #include <algorithm>
	//int n, m = 999999999;
	//scanf("%d", &n);
	//for (int i = 0; i < 3; i++)
	//{
	//	int pre, cost;
	//	scanf("%d %d", &pre, &cost);
	//	if (n % pre == 0)
	//	{
	//		m = min(m, n / pre * cost);
	//	}
	//	else
	//	{
	//		m = min(m, (n / pre + 1) * cost);
	//	}
	//}
	//printf("%d", m);

	//����%�������
	//��C++11��׼�У�m % n��ֵ��m�ķ�����ͬ��Ҳ����˵m % n = m % (-n)��(-m) % n = -(m % n)
	//int it6, it7;
	//while(cin >> it6 >> it7) {
	//cout << "it6 % it7:" << it6 % it7;
	//}


}

//P1085 ��򲻸��� 
void luogu1085() {
	////������ĳ�˴𰸣�����û�ж��Ƿ����8����� ��� AC ��!233
	//int i,a,b,ans=0,kk=0;
	//	for(i=1;i<=7;i++){
	//		scanf_s("%d %d",&a,&b);
	//		if(a+b>ans){
	//			ans=a+b;
	//			kk=i;
	//		}
	//	}
	//	printf("%d",kk);
}

//P1089 �����ƻ� 
int luogu1089() {
	//const unsigned linghua = 300;
	//int jieyu = 0;
	//unsigned chuxu = 0, yusuan = 0, yueyu = 0;
	//for (int i = 0; i < 12; i++)
	//{
	//	scanf_s("%d", &yusuan);
	//	jieyu += 300 - yusuan;
	//	if (jieyu < 0) {
	//		return -++i;
	//	}
	//	else {
	//		chuxu += jieyu / 100 * 100;
	//		jieyu %= 100;
	//	}
	//}
	//return chuxu * 12 / 10 +jieyu;
	return 404;
}

////P1008 ������
void luogu1008() {
	for (int i = 123; i < 334; i++) {
		int arr[10] = { 0 };
		arr[i / 100] = 1, arr[i / 10 % 10] = 1, arr[i % 10] = 1;
		arr[2 * i / 100] = 1, arr[2 * i / 10 % 10] = 1, arr[2 * i % 10] = 1;
		arr[3 * i / 100] = 1, arr[3 * i / 10 % 10] = 1, arr[3 * i % 10] = 1;
		bool satisfy = true;
		for (int j = 1; j < 10; j++) {
			if (arr[j] == 0) {
				satisfy = false;
				break;
			}
		}
		if (satisfy) {
			printf("%d %d %d\n", i, 2 * i, 3 * i);
		}
	}
}

////P1035 �������
void luogu1035() {
	int k, n = 1;
	scanf_s("%d", &k);
	double sum = 0.0;
	while (sum <= k) {
		sum += 1.0 / n;
		++n;
	}
	printf("%d", n - 1);
}

////P1423 С������Ӿ
void luogu1423() {
	double s = 0, sum = 0, term = 2;
	int n = 0;
	scanf_s("%lf", &s);
	while (sum < s) {
		sum += term;
		term *= 0.98;
		++n;
	}
	printf("%d", n);
}

////P1424 С��ĺ���(�Ľ���)
void luogu1424_1() {
	int x, n, s = 0;
	scanf_s("%d%d", &x, &n);
	if (n <= 6 - x)
		s += n * 250;
	else if (7 - x == n || n == 8 - x)
		s += (6 - x) * 1250;
	else {
		if (x != 7)
			s += (6 - x) * 250;
		n = n - 8 + x;
		s += n / 7 * 1250;
		if (n % 7 == 6)
			s += 1250;
		else
			s += n % 7 * 250;
	}
	printf_s("%d", s);
}

////P1424 С��ĺ���(�Ľ���)
void luogu1424_2() {
	long x, n, s = 0, r = 0;
	scanf_s("%ld%ld", &x, &n);
	for (long i = x; i < n + x; i++)
	{
		if (i == 6) continue;
		if (i == 7) {
			r = n - (7 - x + 1);
			s += r / 7 * 1250;
			i += r / 7 * 7;
			if (r % 7 == 6) { s += 1250; break; }
			continue;

		}
		s += 250;
	}
	printf("%ld", s);
}


////P1424 С��ĺ���(�Ľ���)
void luogu1424_3() {
	int x, n, s;
	scanf_s("%d%d", &x, &n);
	s = 0;
	s = s + n / 7 * 1250;
	n = n % 7;
	while (n != 0)
	{
		if (x < 6)
		{
			s = s + 250;
		}
		if (x == 7)
		{
			x = 1;
		}
		else
			x++;
		n--;
	}
	printf_s("%d\n", s);
}



////P1980 ��������  self@@:����������㷨�ĵ���~~~
int count_1980(const string& n, const int& k, const int& s_pr, const int& i) {
	if (i == 0) {
		return n[i] == k ? s_pr + 1 : s_pr;
	}
	else {

		int s = 0;
		int a_i = n[i - 1] - '0';////i���ڵ���1
		if (a_i == 0) {
			//if (k == 0) { ++s; }
			//else { s = 0; }
			s = 0;
		}
		else {
			string f(i - 1, '9');
			int p = pow(10, i - 1);
			if (i > 1) {
				if (k == 0)
				{
					s += a_i * count_1980(f, 1, 0, i - 1);//������ȱ�ݣ����ܴ���k==0ʱ��ǰ��0������,���������á��ڿƼ���������һ����
				}
				else {
					s += a_i * count_1980(f, k, 0, i - 1);
				}
				//s += a_i * count_1980(f, k, 0, i - 1);
			}
			s += s_pr * a_i * p;
			if (a_i > k) {
				//if (k != 0 || i != n.size()||(k==0&&i==1)) { s += p; }
				if (k != 0 || i != n.size() || i == 1) { s += p; }
				else { ; }
			}
		}
		int n_spr = s_pr;
		a_i == k ? ++n_spr : 0;
		s += count_1980(n, k, n_spr, i - 1);
		return s;
	}
}


////self@@@:���㷨����ΪŪ���ʼ������һ����������ϰ
int count_1980_v2(const string& n, const int& k, const int& s_pr, const int& i, const vector<int> & base_i, const vector<int> & base_0) {
	if (i == 0) {
		return n[i] == k ? s_pr + 1 : s_pr;
	}
	else {

		int s = 0;
		int a_i = n[i - 1] - '0';////i���ڵ���1
		int p = pow(10, i - 1);
		if (i > 1&&a_i>0) {
			if ((k == 0)&&(i==n.size()))//��iΪ���λʱ����Χ1~(10**i-1)�����ֵ�0�ĸ�����base_0����
			{
				s +=( a_i-1) * base_i[i-2]+base_0[i-2];
			}
			else {
				s += a_i * base_i[i-2];
			}
		}
		s += s_pr * a_i * p;
		if (a_i > k) {//self:�����Լ�������
			if (k != 0 || i != n.size()) { s += p; }
		}

		int n_spr = s_pr;//self:����Ҳ����
		a_i == k ? ++n_spr : 0;
		s += count_1980_v2(n, k, n_spr, i - 1,base_i,base_0);
		return s;
	}
}

void luogu1980() {
	//cout << "pow(10, 0): " << pow(10, 0) << endl;
	//cout << "pow(10, -1): " << pow(10, -1) << endl;
	string stt1980(10, 'c');
	cout << "stt1980:\n" << stt1980 << endl;
	////��������ȡһ���ַ�������ʾ��������n������λ�ϵ�����,�����λ����(������λ˳�򵹹���)
	int k = 1, x = 0;
	string n, nr;
	//for (; cin >> nr >> k;) {
	//	n = nr;
	//	int d = nr.size();
	//	int d0 = 0;
	//	std::reverse(nr.begin(), nr.end());
	//	x = count_1980(nr, k, 0, d);
	//	if (k == 0) {
	//		for (int i = 1; i < d - 1; i++) {
	//			d0 += (d - 1 - i) * int(pow(10, i - 1) * 9);
	//		}
	//		d0 += d - 1;
	//		x -= d0;
	//		if (n.size() == 1) { x = 0; }
	//	}
	//	cout << "Count " << k << " from 1 to " << n << ": \n" << x << endl;
	//}

	for (; cin >> nr >> k;) {
		n = nr;
		int d = nr.size();//Ҫ��d>=1
		int d0 = 0,p_10=1,s=0;
		vector<int> base_i,base_0 ;
		if (k == 0) {
			for (int i = 1; i <= d; i++) { 
				base_i.push_back(i * p_10);
				s=10*s+9*(i-1);
				base_0.push_back(i*p_10-s-i);
				p_10 *= 10; }
		}
		else {
			for (int i = 1; i <= d; i++) { base_i.push_back(i * p_10); p_10 *= 10; }
		}

		std::reverse(nr.begin(), nr.end());
		x = count_1980_v2(nr, k, 0, d,base_i,base_0);
		cout << "Count " << k << " from 1 to " << n << ": \n" << x << endl;

		//for (auto e : base_i) { cout << e << " "; }
		//cout << endl;
		//if (!base_0.empty()) { for (auto e : base_0) { cout << e << " "; } }
		//cout << endl;
	}


}


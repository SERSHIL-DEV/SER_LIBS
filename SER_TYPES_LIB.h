#pragma once

#ifndef SER_TYPES_LIB_H
#define SER_TYPES_LIB_H

#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <array>
#include <initializer_list>

#ifdef _WIN64

using size_v = unsigned long long int;

#else

using size_v = unsigned long int;

#endif

//��������������� ���� ������, ����� ������ �� ������.

	/*

	����� �� �������� ����, ������� �� ������� ���������� (������ - char, int).
	����� ����� ����������� ����� � ������ ����, ������� ��� ����������.

	*/

	//���������

using cbool = const bool;
using pvoid = void*;

//�� ������
using cchar = const char;
using cint16 = const short int;
using cint = const int;
using cint32 = const long int;
using cint64 = const long long int;
using cfloat = const float;
using cdouble = const double;
using cdouble32 = const long double;

//��� ������
using cuchar = const unsigned char;
using CBYTE = const unsigned char;
using cuint16 = const unsigned short int;
using cuint = const unsigned int;
using cuint32 = const unsigned long int;
using cuint64 = const unsigned long long int;

//����������

using str = std::string;
using sstr = std::stringstream;
using STRING = std::string;
using STR = str;

#ifdef UNICODE

using tstring = std::wstring;
using tstr = std::wstring;
using char_t = wchar_t;

#else

using tstring = std::string;
using tstr = std::string;
using char_t = char;

#endif

using ftstring = const tstring;

using ctstring = const char_t*;

using fptstringc = const tstring* const;
using ptstringc = tstring* const;
using ptstring = tstring*;

using ftstr = ftstring;
using fptstrc =fptstringc;
using ptstrc = ptstringc;
using ptstr = tstr*;
using pchar_t = char_t*;

//����������
using uint16 = unsigned short int;
using uint = unsigned int;
using uint32 = unsigned long int;
using uint64 = unsigned long long int;
using uchar = unsigned char;
using QWORD = unsigned long long int;

//�� ������
using int16 = short int;
using int32 = long int;
using int64 = long long int;
using double32 = long double;

//�������

//��� ��������������

using vstring = std::vector <std::string>;
using vstr = std::vector <str>;
using vchar = std::vector <char>;
using vuchar = std::vector <uchar>;
using vbool = std::vector <bool>;

//������������� ���� ������

//����������
using vuint16 = std::vector <uint16>;
using vuint = std::vector <uint>;
using vuint32 = std::vector <uint32>;
using vuint64 = std::vector <uint64>;

//��������� �� ���
using pvuint16 = std::vector <uint16>*;
using pvuint = std::vector <uint>*;
using pvuint32 = std::vector <uint32>*;
using pvuint64 = std::vector <uint64>*;

//�� ������
using vint16 = std::vector <int16>;
using vint = std::vector <int>;
using vint32 = std::vector <int32>;
using vint64 = std::vector <int64>;

//��������� �� ���
using pvstr = std::vector<str>*;
using pvint16 = std::vector <int16>*;
using pvint = std::vector <int>*;
using pvint32 = std::vector <int32>*;
using pvint64 = std::vector <int64>*;

//C ��������� �������
using vfloat = std::vector <float>;
using vdouble = std::vector <double>;
using vdouble32 = std::vector <double32>;

//��������� �� ���
using pvfloat = std::vector <float>*;
using pvdouble = std::vector <double>*;
using pvdouble32 = std::vector <double32>*;


//��������� ����������

//��� ����������
using pstring = std::string*;
using pstr = std::string*;
using pchar = char*;
using puchar = unsigned char*;
using pbool = bool*;

//�������������

//�� ������
using pint16 = int16*;
using pint = int*;
using pint32 = int32*;
using pint64 = int64*;

//����������
using puint16 = uint16*;
using puint = uint*;
using puint32 = uint32*;
using puint64 = uint64*;

//��������� ��������
using pcbool = const bool*;

//�� ������
using pcchar = const char*;
using cstring = const char*;
using CSTRING = cstring;
using cstr = const char*;
using CSTR = cstr;
using pcint16 = const short int*;
using pcint = const int*;
using pcint32 = const long int*;
using pcint64 = const long long int*;
using pcfloat = const float*;
using pcdouble = const double*;
using pcdouble32 = const long double*;

//��� ������
using pcuchar = const unsigned char*;
using ucstring = const unsigned char*;
using ucstr = const unsigned char*;
using pcuint16 = const unsigned short int*;
using pcuint = const unsigned int*;
using pcuint32 = const unsigned long int*;
using pcuint64 = const unsigned long long int*;

//������� ��������

//��������

using vcbool = std::vector <cbool>;

using vcchar = std::vector <cchar>;

using vcint16 = std::vector <cint16>;
using vcint = std::vector <cint>;
using vcint32 = std::vector <cint32>;
using vcint64 = std::vector <cint64>;
using vcfloat = std::vector <cfloat>;
using vcdouble = std::vector <cdouble>;
using vcdouble32 = std::vector <cdouble32>;

//�������� ���������
using vpcbool = std::vector <pcbool>;

using vpcchar = std::vector <pcchar>;

using vpcint16 = std::vector <pcint16>;
using vpcint = std::vector <pcint>;
using vpcint32 = std::vector <pcint32>;
using vpcint64 = std::vector <pcint64>;
using vpcfloat = std::vector <pcfloat>;
using vpcdouble = std::vector <pcdouble>;
using vpcdouble32 = std::vector <pcdouble32>;

//����������
using vcuchar = std::vector <cuchar>;

using vcuint16 = std::vector <cuint16>;
using vcuint = std::vector <cuint>;
using vcuint32 = std::vector <cuint32>;
using vcuint64 = std::vector <cuint64>;

//���������� ���������
using vpcuchar = std::vector <pcuchar>;

using vpcuint16 = std::vector <pcuint16>;
using vpcuint = std::vector <pcuint>;
using vpcuint32 = std::vector <pcuint32>;
using vpcuint64 = std::vector <pcuint64>;

//������

using stringl = std::string&;
using strl = std::string&;
using booll = bool&;

//��������
using charl = char&;
using floatl = float&;
using doiblel = double&;
using doiblel32 = double32&;
using int16l = int16&;
using intl = int&;
using int32l = int32&;
using int64l = int64&;

//��� �����
using ucharl = uchar&;
using uint16l = uint16&;
using uintl = uint&;
using uint32l = uint32&;
using uint64l = uint64&;

//������ �� ���������

using cbooll = cbool&;

//��������
using ccharl = cchar&;
using cfloatl = cfloat&;
using cdoiblel = cdouble&;
using cdoiblel32 = cdouble32&;
using cint16l = cint16&;
using cintl = cint&;
using cint32l = cint32&;
using cint64l = cint64&;

//��� �����
using cucharl = cuchar&;
using cuint16l = cuint16&;
using cuintl = cuint&;
using cuint32l = cuint32&;
using cuint64l = cuint64&;

//�������������� ���� ��� unicode

using usymb = wchar_t;
using usymb16 = char16_t;
using usymb32 = char32_t;
using wstr = std::wstring;
using WSTRING = std::wstring;
using WSTR = wstr;
using ustr = std::wstring;
using USTR = ustr;
using string16 = std::u16string;
using ustring16 = std::u16string;
using str16 = std::u16string;
using ustr16 = std::u16string;
using string32 = std::u32string;
using ustring32 = std::u32string;
using str32 = std::u32string;
using ustr32 = std::u32string;

//���������
using pusymb = wchar_t*;
using pusymb16 = char16_t*;
using pusymb32 = char32_t*;
using pwstr = std::wstring*;
using pustr = std::wstring*;
using pstring16 = std::u16string*;
using pustring16 = std::u16string*;
using pstr16 = std::u16string*;
using pustr16 = std::u16string*;
using pstring32 = std::u32string*;
using pustring32 = std::u32string*;
using pstr32 = std::u32string*;
using pustr32 = std::u32string*;

//������
using usymbl = wchar_t&;
using usymb16l = char16_t&;
using usymb32l = char32_t&;
using wstrl = std::wstring&;
using ustrl = std::wstring&;
using string16l = std::u16string&;
using ustring16l = std::u16string&;
using str16l = std::u16string&;
using ustr16l = std::u16string&;
using string32l = std::u32string&;
using ustring32l = std::u32string&;
using str32l = std::u32string&;
using ustr32l = std::u32string&;

//�������
using vusymb = std::vector<wchar_t>;
using vusymb16 = std::vector<char16_t>;
using vusymb32 = std::vector<char32_t>;
using vwstring = std::vector<std::wstring>;
using vwstr = std::vector<std::wstring>;
using vustr = std::vector<std::wstring>;
using vstring16 = std::vector<std::u16string>;
using vustring16 = std::vector<std::u16string>;
using vstr16 = std::vector<std::u16string>;
using vustr16 = std::vector<std::u16string>;
using vstring32 = std::vector<std::u32string>;
using vustring32 = std::vector<std::u32string>;
using vstr32 = std::vector<std::u32string>;
using vustr32 = std::vector<std::u32string>;

using cwstring = const wchar_t*;
using cwstr = const wchar_t*;
using c16string = const char16_t*;
using cstring16 = const char16_t*;
using c16str = const char16_t*;
using cstr16 = const char16_t*;
using c32string = const char32_t*;
using cstring32 = const char32_t*;
using c32str = const char32_t*;
using cstr32 = const char32_t*;

//������� ����������� stl

template <typename T> using container = std::vector<T>;
template <typename T> using pcontainer = container<T>*;
template <typename T> using ccontainer = const container<T>;
template <typename T> using pccontainer = const container<T>*;
template <typename T> using pcontainerc = container<T>* const;
template <typename T> using pccontainerc = const container<T>* const;

template<typename T> using inilist = std::initializer_list<T>;

template <typename MAP_KEY, typename MAP_VALUE> using catalog = std::map<MAP_KEY, MAP_VALUE>;
template <typename MAP_KEY, typename MAP_VALUE> using ccatalog = const catalog<MAP_KEY, MAP_VALUE>;
template <typename MAP_KEY, typename MAP_VALUE> using pcatalog = catalog<MAP_KEY, MAP_VALUE>*;
template <typename MAP_KEY, typename MAP_VALUE> using pcatalogc = catalog<MAP_KEY, MAP_VALUE>* const;
template <typename MAP_KEY, typename MAP_VALUE> using pccatalog = const catalog<MAP_KEY, MAP_VALUE>*;
template <typename MAP_KEY, typename MAP_VALUE> using pccatalogc = const catalog<MAP_KEY, MAP_VALUE>* const;

template <typename MAP_KEY> using dcatalog = catalog<MAP_KEY, MAP_KEY>;
template <typename MAP_KEY> using cdcatalog = ccatalog<MAP_KEY, MAP_KEY>;
template <typename MAP_KEY> using pdcatalog = catalog<MAP_KEY, MAP_KEY>*;
template <typename MAP_KEY> using pdcatalogc = catalog<MAP_KEY, MAP_KEY>* const;
template <typename MAP_KEY> using pdccatalog = const catalog<MAP_KEY, MAP_KEY>*;
template <typename MAP_KEY> using pdccatalogc = const catalog<MAP_KEY, MAP_KEY>* const;

template <typename T, std::size_t size_var> using massif = std::array<T, size_var>;
template <typename T, std::size_t size_var> using cmassif = const massif<T, size_var>;
template <typename T, std::size_t size_var> using pmassif = massif<T, size_var>*;
template <typename T, std::size_t size_var> using pcmassif = const massif<T, size_var>*;
template <typename T, std::size_t size_var> using pmassifc = massif<T, size_var>* const;
template <typename T, std::size_t size_var> using pcmassifc = const massif<T, size_var>* const;

//������ ������� �� ���� std::array
template <typename T, std::size_t int_var, std::size_t int_var2> using MATRIX = massif<massif<T, int_var>, int_var2>;
template <typename T, std::size_t int_var, std::size_t int_var2> using CMATRIX = const MATRIX<T, int_var, int_var2>*;
template <typename T, std::size_t int_var, std::size_t int_var2> using PMATRIX = MATRIX<T, int_var, int_var2>*;

//������ ���������� ������� �� ���� std::array
template <typename T, std::size_t int_var> using QMATRIX = MATRIX <T, int_var, int_var>;
template <typename T, std::size_t int_var> using PQMATRIX = QMATRIX<T, int_var>*;

//������ ������� ���������� ������ �� ���� std::map � std::vector � �������� ������ ������
template <typename T> using FMATRIX = catalog<T, container<T>>;
template <typename T> using PFMATRIX = FMATRIX<T>*;

//������ ������� ���
template <typename T1, typename T2> using vpair = container<std::pair<T1, T2>>;
template <typename T1, typename T2> using pvpair = vpair<T1, T2>*;

template <typename val1> using dcontainer = container<container<val1>>;
template <typename val1> using pdcontainer = dcontainer<val1>*;
template <typename val1> using cdcontainer = const dcontainer<val1>;
template <typename val1> using pcdcontainer = const dcontainer<val1>*;
template <typename val1> using pdcontainerc = dcontainer<val1>* const;
template <typename val1> using pcdcontainerc = const dcontainer<val1>* const;

//��������� ��������� ��� ����������� ������� ������
struct matrix_size {

	size_t total_size{ 0 }; //������ ���� �������
	size_t string_size{ 0 }; //������ ������
	size_t column_size{ 0 }; //������ �������

	size_t total_lengh{ 0 }; //������� �������
	size_t string_lengh{ 0 }; //������ ������
	size_t column_lengh{ 0 }; //������ �������

};

using pmatrix_size = matrix_size*;

//���������� ������ ������� �� ���� std::array
template<typename T, std::size_t st_1, size_t st_2>
int Get_Matrix_Size(pmatrix_size matrix_struct, PMATRIX<T, st_1, st_2> lc_matrix) {

	if (matrix_struct == nullptr || lc_matrix == nullptr) { return 1; }

	matrix_struct->column_size = sizeof(T) * st_2;
	matrix_struct->string_size = sizeof(T) * st_1;
	matrix_struct->total_size = matrix_struct->column_size * matrix_struct->string_size;

	matrix_struct->column_lengh = matrix_struct->column_size / sizeof(T);
	matrix_struct->string_lengh = matrix_struct->string_size / sizeof(T);
	matrix_struct->total_lengh = matrix_struct->column_lengh * matrix_struct->string_lengh;

	return 0;

};

//�������������� ��������� � ����������� ����������
namespace STD {

	//��������� ����� ���������� �� ���� std::basic_string
	template<class str_type, typename char_type> class cpp_basic_execption {

	protected:

		str_type exc_msg;

	public:

		cpp_basic_execption(str_type err_str) { exc_msg = err_str; }

		str_type what() { return exc_msg; }

		const char_type* c_what() { return exc_msg.c_str(); }

	};

	using cpp_exception = cpp_basic_execption<str, char>;
	using cpp_exc = cpp_basic_execption<str, char>;

	using cpp_wexception = cpp_basic_execption<wstr, wchar_t>;
	using cpp_wexc = cpp_wexception;

	using cpp_u16exception = cpp_basic_execption<std::u16string, char16_t>;
	using cpp_16exc = cpp_basic_execption<std::u16string, char16_t>;

	using cpp_u32exception = cpp_basic_execption<std::u32string, char32_t>;
	using cpp_32exc = cpp_basic_execption<std::u32string, char32_t>;

	extern inline std::size_t string_size(const str user_str);

	extern inline std::size_t string_size(const wstr user_str);

	extern inline std::size_t string_size(const str16 user_str);

	extern inline std::size_t string_size(const str32 user_str);

	extern inline std::size_t string_size(str* const user_str);

	extern inline std::size_t string_size(wstr* const user_str);

	extern inline std::size_t string_size(str16* const user_str);

	extern inline std::size_t string_size(str32* const user_str);

	//�������� ������ ���������
	template <typename T>
	class smart_ptr {

	private:

		T* m_obj; //������������ ���������.
		
		T** m_client_ptr; //��������� ���������, ������� ��������� �� ������������ ��� ���������������� ��������� (������� �� ������������)

		inline void mem_malloc() { 
			
			if (this->m_client_ptr != nullptr) { 
				
				//������ �� ������ ������
				if (*this->m_client_ptr == nullptr) { (*this->m_client_ptr) = new T{}; }

			} 
		
		}

		inline void mem_free() { if (this->m_client_ptr != nullptr) { 
			
			if (*this->m_client_ptr != nullptr) { delete (*this->m_client_ptr); (*this->m_client_ptr) = nullptr; this->m_client_ptr = nullptr; } 
		
		} 
		
		}

		inline void mem_malloc_controller(const bool create_new) { if (create_new == true) { mem_malloc(); } }

	public:

		smart_ptr() { this->m_client_ptr = &this->m_obj; mem_malloc(); }

		smart_ptr(std::nullptr_t) { m_client_ptr = nullptr; m_obj = nullptr; }

		smart_ptr(T*& obj, const bool create_new = true) { 
			
			this->m_client_ptr = &obj; 
			
			if (create_new == true) { mem_malloc(); }
		
			this->m_obj = nullptr; 
		
		}

		smart_ptr(T*& obj, T user_value) : smart_ptr(obj) { **this->m_client_ptr = user_value; }

		smart_ptr(T user_value) : smart_ptr() { **this->m_client_ptr = user_value; }

		// �� ������ �� ������� ��������� ���� ������ �� ���������
		~smart_ptr() { mem_free(); }

		T* take_ptr() { return *this->m_client_ptr; }

		//����������� ���������� (���� ������������� ����������������)
		bool reset_ptr() { 
			
			//������ �� ������� ���������� ����������� �� ���������� ������ ������ ������.
			if (*this->m_client_ptr != &m_obj) { this->m_client_ptr = nullptr; return true; }  
			
			return false; 
		
		}

		// ������������� ���������

		// ��������. ��������� ���������� � ������ ���� T ����������� "���������"
		T* operator->() { return **this->m_client_ptr; }

		// � ������� ������ ��������� �� ����� ������������ ��������� � �������� ������ �� ������, ������� �� ������
		T& operator*() { return **this->m_client_ptr; }

		//��������� ������������� ��������� (������ �������� ��������� �� ����������)
		smart_ptr<T> operator=(smart_ptr<T>& temp_smart_ptr) { return *this->m_client_ptr = temp_smart_ptr.m_obj; }

		//��������� ������ ����� ������������� ���������
		T** operator=(T** temp_origin_ptr) { return this->m_client_ptr = temp_origin_ptr; }

	};

	//���������� ������� smart_ptr
	template <typename T>
	class smart_ptr_s : public smart_ptr<T> {

	public:

		smart_ptr_s(T user_value) { smart_ptr<T>(user_value); }

		smart_ptr_s() { smart_ptr<T>(); }

		~smart_ptr_s() { ~smart_ptr<T>(); }

	};

	//������� smart_ptr ��� ��������
	template <typename T>
	class smart_ptr_m {

	private:

		T* m_obj; 
		
		T** m_client_ptr; //��������� ���������, ������� ��������� �� ������������ ��� ���������������� ��������� (������� �� ������������)

		inline void mem_malloc(const std::size_t mass_size) {

			if (this->m_client_ptr != nullptr) {

				//������ �� ������ ������
				if (*this->m_client_ptr == nullptr) { (*this->m_client_ptr) = new T[mass_size]{}; }

			}

		}

		inline void mem_free() {

			if (this->m_client_ptr != nullptr) {

				if (*this->m_client_ptr != nullptr) { delete[] (*this->m_client_ptr); (*this->m_client_ptr) = nullptr; this->m_client_ptr = nullptr; }

			}

		}

	public:

		smart_ptr_m(T*& obj) { this->m_client_ptr = &obj; this->m_obj = nullptr; }

		smart_ptr_m(T*& obj, T*& user_value, const std::size_t mass_size) : smart_ptr_m(obj) { std::memcpy(user_value, (*this->m_client_ptr), mass_size); }

		smart_ptr_m(const std::size_t mass_size) { this->m_client_ptr = &m_obj; mem_malloc(mass_size); }

		smart_ptr_m(const std::size_t mass_size, T*& user_value): smart_ptr_m(mass_size) { std::memcpy(user_value, (*this->m_client_ptr), mass_size); }
		
		smart_ptr_m(std::initializer_list<T> user_value) : smart_ptr_m(user_value.size()){

			std::size_t lc_counter{ 0 };

			//���� while �� �������� � ������ ������������ ��-�� ����������� std::initializer_list. For each - ����������� ����
			for(auto &lc_mass_el : user_value) { (*this->m_client_ptr)[lc_counter] = lc_mass_el; ++lc_counter; }

			//user_value �� ������� �������� - ��� �� ������.

		}

		~smart_ptr_m() { mem_free(); }

		// ������������� ���������

		smart_ptr_m<T> operator=(smart_ptr_m<T>& temp_smart_ptr) { return *this->m_client_ptr = temp_smart_ptr.m_obj; }

		T** operator=(T** temp_origin_ptr) { return this->m_client_ptr = temp_origin_ptr; }

		T& operator[](const std::size_t mass_num) { return (*this->m_client_ptr)[mass_num]; }

		T* take_ptr() { return (*this->m_client_ptr); }

		//����������� ���������� (���� ������������� ����������������)
		bool reset_ptr() {

			//������ �� ������� ���������� ����������� �� ���������� ������ ������ ������.
			if (*this->m_client_ptr != &this->m_obj) { this->m_client_ptr = nullptr; return true; }

			return false;

		}

	};

	template <typename T>
	class smart_ptr_m_s: public smart_ptr_m <T> {

		std::size_t lc_mass_size{ 0 };

	public:

		smart_ptr_m_s(const std::size_t mass_size) :smart_ptr_m<T>(mass_size) { this->lc_mass_size = mass_size; }

		smart_ptr_m_s(const std::size_t mass_size, T*& user_value) : smart_ptr_m<T>(mass_size, user_value) { this->lc_mass_size = mass_size; }

		//���������� ��������� �������)
		inline std::size_t mass_size() { return this->lc_mass_size; }

		//������ ������� � ������ (�� ������������ ��� basic string)
		inline std::size_t mass_size_byte() { return static_cast<std::size_t>(sizeof(T) * this->lc_mass_size); }

		T& at(const std::size_t mass_num) { 
			
			if (mass_num >= this->lc_mass_size) { throw std::out_of_range; } 
		
			return smart_ptr_m<T>::take_ptr()[mass_num];

		}

		~smart_ptr_m_s() { smart_ptr<T>::~smart_ptr(); }

	};

	//������ ������������� �������
	template<typename mass_type>
	extern inline void free_massif(mass_type*& your_massif) {

		if (your_massif == nullptr) { return; }

		delete[] your_massif; your_massif = nullptr;

	}

	//������ ���������
	template<typename ptr_type>
	extern inline void free_ptr(ptr_type*& your_ptr) {

		if (your_ptr == nullptr) { return; }

		delete your_ptr; your_ptr = nullptr;

	}

	//������ ������ �� void, ������� ����������� operator new
	extern inline void free_void_ptr(void*& your_ptr);

	extern catalog <str, int> month_convert;
	
	struct time_pack {

	public:

		int HOUR{};

		int MINUTE{};

		int SECOND{};

		int MILLISECOND{};

	};

	struct date_pack {

	public:

		int DAY{};

		int WEEK{};

		int MONTH{};

		int YEAR{};

	};

	//������������ ���� �� ������� __DATE__ � �������� ��������
	extern bool STL_DATE_CONVERTER_A(const str& user_date, date_pack& dp);

	//������������ ���� �� ������� __TIME__ � �������� ��������
	extern inline bool STL_TIME_CONVERTER_A(const str& user_time, time_pack& tp);

	extern inline bool STL_STR_SPLITTER(const str& user_str, container<str>& str_buf, const char control_symb = ' ');

	extern inline bool STL_STR_SPLITTER(const wstr& user_str, container<wstr>& str_buf, const wchar_t control_symb = L' ');

	extern inline bool STL_STR_SPLITTER(const str16& user_str, container<str16>& str_buf, const usymb16 control_symb = u' ');

	extern inline bool STL_STR_SPLITTER(const str32& user_str, container<str32>& str_buf, const usymb32 control_symb = U' ');

}

//��������� �������

//������� 

//�� ������ (� ������ �����)

extern const char MAX_CHAR;
extern const int MAX_INT;
extern const short int MAX_INT16;
extern const long int MAX_INT32;
extern const long long int MAX_INT64;
extern const float MAX_FLOAT;
extern const double MAX_DOUBLE;
extern const long double& MAX_DOUBLE64;

//�� ������ (� uint64, ����� ����� � ��������� �������)

extern const uint64 TMAX_CHAR;
extern const uint64 TMAX_INT;
extern const uint64 TMAX_INT16;
extern const uint64 TMAX_INT32;
extern const uint64 TMAX_INT64;

//��� ����� (������)

extern const unsigned char MAX_UCHAR;
extern const unsigned int MAX_UINT;
extern const unsigned short int MAX_UINT16;
extern const unsigned long int MAX_UINT32;
extern const unsigned long int& MAX_DWORD;
extern const unsigned long long int MAX_UINT64;
extern const unsigned long long int& MAX_QWORD;
extern const wchar_t MAX_WCHAR_T;

//��� ����� (uint64)

extern const uint64 TMAX_UCHAR;
extern const uint64 TMAX_UINT;
extern const uint64 TMAX_UINT16;
extern const uint64 TMAX_UINT32;
extern const uint64& TMAX_DWORD;
extern const uint64 TMAX_UINT64;
extern const uint64& TMAX_QWORD;
extern const uint64 TMAX_WCHAR_T;

//��������

//�� ������ (������ ������)
extern const char MIN_CHAR;
extern const int MIN_INT;
extern const short int MIN_INT16;
extern const long int MIN_INT32;
extern const long long int MIN_INT64;
extern const float MIN_FLOAT;
extern const double MIN_DOUBLE;
extern const long double& MIN_DOUBLE64;

//��� ����� (������)
extern const unsigned char MIN_UCHAR;
extern const unsigned int MIN_UINT;
extern const unsigned short int MIN_UINT16;
extern const unsigned long int MIN_UINT32;
extern const unsigned long int& MIN_DWORD;
extern const unsigned long long int MIN_UINT64;
extern const unsigned long long int& MIN_QWORD;
extern const wchar_t MIN_WCHAR_T;

//��� ����� (uint64)

extern const uint64 TMIN_UNSIGNED;
extern const uint64& TMIN_UINT;
extern const uint64& TMIN_UINT16;
extern const uint64& TMIN_UINT32;
extern const uint64& TMIN_DWORD;
extern const uint64& TMIN_UINT64;
extern const uint64& TMIN_QWORD;
extern const uint64& TMIN_WCHAR_T;

#endif

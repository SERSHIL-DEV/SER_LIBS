// SER_TYPES_LIB.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "SER_TYPES_LIB.h"

//Константы лимитов

//Пределы 

//Со знаком (в родных типах)

const char MAX_CHAR{ 127 };
const short int MAX_INT16{ 32767 };
const long int MAX_INT32{ 2147483647 };
const long long int MAX_INT64{ 9223372036854775807 };
const float MAX_FLOAT{ 3.4e7 };
const double MAX_DOUBLE{ 1.7e15 };
const long double& MAX_DOUBLE64{ MAX_DOUBLE };

//со знаком (в uint64, кроме чисел с плавающей запятой)

const uint64 TMAX_CHAR{ 127 };
const uint64 TMAX_INT16{ 32767 };
const uint64 TMAX_INT32{ 2147483647 };
const uint64 TMAX_INT64{ 9223372036854775807 };

//Без знака (родные)

const unsigned char MAX_UCHAR{ 255 };
const unsigned short int MAX_UINT16{ 65535 };
const unsigned long int MAX_UINT32{ 4294967295 };
const unsigned long int& MAX_DWORD{ MAX_UINT32 };
const unsigned long long int MAX_UINT64{ 18446744073709551615 };
const unsigned long long int& MAX_QWORD{ MAX_UINT64 };
const wchar_t MAX_WCHAR_T{ 65535 };

//Без знака (uint64)

const uint64 TMAX_UCHAR{ 255 };
const uint64 TMAX_UINT16{ 65535 };
const uint64 TMAX_UINT32{ 4294967295 };
const uint64& TMAX_DWORD{ TMAX_UINT32 };
const uint64 TMAX_UINT64{ 18446744073709551615 };
const uint64& TMAX_QWORD{ TMAX_UINT64 };
const uint64 TMAX_WCHAR_T{ 65535 };

//Минимумы

//со знаком (только родные)
const char MIN_CHAR{ -127 };
const short int MIN_INT16{ -32767 };
const long int MIN_INT32{ -2147483647 };
const long long int MIN_INT64{ -9223372036854775807 };
const float MIN_FLOAT{ -38e7 };
const double MIN_DOUBLE{ -308e15 };
const long double& MIN_DOUBLE64{ MIN_DOUBLE };

//Без знака (родные)
const unsigned char MIN_UCHAR{ 0 };
const unsigned int MIN_UINT{ 0 };
const unsigned short int MIN_UINT16{ 0 };
const unsigned long int MIN_UINT32{ 0 };
const unsigned long int& MIN_DWORD{ MIN_UINT32 };
const unsigned long long int MIN_UINT64{ 0 };
const unsigned long long int& MIN_QWORD{ MIN_UINT64 };
const wchar_t MIN_WCHAR_T{ 0 };

//Без знака (uint64)

const uint64 TMIN_UNSIGNED{ 0 };
const uint64& TMIN_UINT{ TMIN_UNSIGNED };
const uint64& TMIN_UINT16{ TMIN_UNSIGNED };
const uint64& TMIN_UINT32{ TMIN_UNSIGNED };
const uint64& TMIN_DWORD{ TMIN_UNSIGNED };
const uint64& TMIN_UINT64{ TMIN_UNSIGNED };
const uint64& TMIN_QWORD{ TMIN_UNSIGNED };
const uint64& TMIN_WCHAR_T{ TMIN_UNSIGNED };

#ifdef _WIN64

const int MAX_INT{ 2147483647 };
const uint64 TMAX_INT{ TMAX_INT32 };
const unsigned int MAX_UINT{ 4294967295 };
const uint64 TMAX_UINT{ TMAX_UINT32 };

const int MIN_INT{ -2147483647 };

#else

const int MAX_INT{ MAX_INT16 };
const uint64 TMAX_INT{ TMAX_INT16 };
const unsigned int MAX_UINT{ MAX_UINT16 };
const uint64 TMAX_UINT{ TMAX_UINT16 };

const int MIN_INT{ MIN_INT16 };
#endif

namespace STD {

	//Делит строки на несколько частей по ключевому символу
	template <typename STR_TYPE, typename CHAR_TYPE>
	bool STL_STR_SPLITTER_UN(const STR_TYPE& user_str, container<STR_TYPE>& str_buf, const CHAR_TYPE& control_symb){
	
		if (user_str.empty() == true) { return false; }

		enum str_points {

			FIRST,

			COUNTER,

			STR_LENGTH,

			COPY_LENGTH,

			LAST

		};

		if (str_buf.empty() == false) { str_buf.clear(); }

		std::size_t str_point[LAST]{}; //рабочий массив
		
		//На некоторые элементы массива для удобства делаем ссылки

		std::size_t& lc_counter { str_point[COUNTER] };

		str_point[STR_LENGTH] = user_str.length();

		auto lc_cycle_skip = [&lc_counter, &str_point]() { return str_point[FIRST] += str_point[COPY_LENGTH] + 1; };

		while (lc_counter < str_point[STR_LENGTH]) {

			if ((user_str.at(lc_counter) == control_symb) || ((lc_counter + 1) == str_point[STR_LENGTH])) {

				//Используется тернарный оператор ?: вместо if else
				str_point[COPY_LENGTH] = (((lc_counter + 1) != str_point[STR_LENGTH]) 
					? (lc_counter - str_point[FIRST]) 
					: ((lc_counter - str_point[FIRST]) + 1));

				if ((lc_counter > 0) && (user_str.at(lc_counter - 1) == control_symb)) { lc_cycle_skip(); ++lc_counter; continue; }

				str_buf.push_back(user_str.substr(str_point[FIRST], str_point[COPY_LENGTH]));

				lc_cycle_skip(); //Пропускаем совпадающий символ

			}

			++lc_counter;

		}

		return true;

	}

	bool STL_STR_SPLITTER(const str& user_str, container<str>& str_buf, const char control_symb) { return STL_STR_SPLITTER_UN(user_str, str_buf, control_symb); }

	bool STL_STR_SPLITTER(const wstr& user_str, container<wstr>& str_buf, const wchar_t control_symb) { return STL_STR_SPLITTER_UN(user_str, str_buf, control_symb); }

	bool STL_STR_SPLITTER(const str16& user_str, container<str16>& str_buf, const usymb16 control_symb) { return STL_STR_SPLITTER_UN(user_str, str_buf, control_symb); }

	bool STL_STR_SPLITTER(const str32& user_str, container<str32>& str_buf, const usymb32 control_symb) { return STL_STR_SPLITTER_UN(user_str, str_buf, control_symb); }

	//Возращает размер basic_string. Если вернула 0 - неверно указаны аргументы
	template <class STR_VAR, typename CHAR_VAR>
	inline std::size_t basic_string_size(STR_VAR* your_string, const CHAR_VAR any_symbol) {

		if (static_cast<int>(any_symbol) == 0 || your_string == nullptr) { return 0; } 
		
		return static_cast<std::size_t>((((*your_string).length()) * sizeof(CHAR_VAR)) + sizeof(CHAR_VAR));

	}

	std::size_t string_size(const str user_str) { return basic_string_size(&user_str, u8'0'); }

	std::size_t string_size(const wstr user_str) { return basic_string_size(&user_str, L'0'); }

	std::size_t string_size(const str16 user_str) { return basic_string_size(&user_str, u'0'); }

	std::size_t string_size(const str32 user_str) { return basic_string_size(&user_str, U'0'); }

	std::size_t string_size(str* user_str) { return basic_string_size(user_str, u8'0'); }

	std::size_t string_size(wstr* user_str) { return basic_string_size(user_str, L'0'); }

	std::size_t string_size(str16* user_str) { return basic_string_size(user_str, u'0'); }

	std::size_t string_size(str32* user_str) { return basic_string_size(user_str, U'0'); }

	void free_void_ptr(void*& your_ptr) {

		if (your_ptr == nullptr) { return; } 
		
		operator delete(your_ptr); your_ptr = nullptr;

	}

	 catalog <str, int> month_convert{

		{"Jan", 1}, {"Feb", 2}, {"Mar", 3}, {"Apr", 4}, {"May", 5}, {"Jun", 6}, {"Jul", 7}, {"Aug", 8}, {"Sep", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 12},

	};

	bool STL_DATE_CONVERTER_A(const str& user_date, date_pack& dp) {

		vstr date_buf; 

		switch (STL_STR_SPLITTER(user_date, date_buf)) {

		case true: {

			try {

				dp.MONTH = month_convert[date_buf.at(0)];

				dp.DAY = std::stoi(date_buf.at(1));

				dp.YEAR = std::stoi(date_buf.at(2));

			}

			catch (std::invalid_argument) { return false; }

			catch (std::out_of_range) { return false; }

			break;

		}

		case false: { return false; break; }

		}

		return true;

	}

	bool STL_TIME_CONVERTER_A(const str& user_time, time_pack& tp) {
		
		try { 
		
			tp.HOUR = std::stoi(user_time.substr(0, 2));

			tp.MINUTE = std::stoi(user_time.substr(3, 2));

			tp.SECOND = std::stoi(user_time.substr(6, 2));

		}

		catch (std::invalid_argument) { return false; }

		catch (std::out_of_range) { return false; }

		return true;

	}

}
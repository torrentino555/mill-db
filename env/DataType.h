#ifndef PROJECT_DATATYPE_H
#define PROJECT_DATATYPE_H

#include <map>
#include <string>

class DataType {
public:
	enum Type {INT, FLOAT, DOUBLE, CHAR};

	DataType(Type type);
	DataType(Type type, int length);

	//static std::string convert_type_to_str(DataType* type);
//	static DataType* convert_str_to_type(std::string str);

	Type get_typecode();
	int get_length();

	std::string str(std::string name);

	int equals(DataType* that);
private:
//	static std::map<std::string, DataType*> str_to_type;
//	static std::map<DataType*, std::string> type_to_str;

	Type type;
	int length;
};


#endif //PROJECT_DATATYPE_H

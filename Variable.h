
#ifndef VARIABLE_H_
#define VARIABLE_H_

class Variable {

private:
	int variableId;
	int variableValue;
	int variableLastAccess;

public:
	Variable();
	virtual ~Variable();
};

#endif /* VARIABLE_H_ */

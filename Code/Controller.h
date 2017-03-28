#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <sstream>
#include <ios>
#include "View.h"

class Controller{
public:
	Controller(Shop& _shop, View& _view) : shop(_shop), 
											view(_view) {}
	void execute_cmd(int cmd);
	void cli();
	int validate_integer(std::string prompt);
	void new_robot_part();
	void new_robot_model();
	void view_robot_parts();
	void create_new_customer();
	void create_new_sales_associate();
	void use_test();


private:
	Shop& shop;
	View& view;


};

#endif

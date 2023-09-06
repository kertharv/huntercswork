#include <iostream>

class Circuit 
{
	public:
		int get_first_switch_state();
		int get_second_switch_state();
		int get_lamp_state();
		void toggle_first_switch();
		void toggle_second_switch();
	private:
		int first_switch = 0;
		int second_switch = 0;
		int lamp_state = 0;
};

int Circuit::get_first_switch_state()
{
    return first_switch;
}

int Circuit::get_second_switch_state()
{
    return second_switch;
}

int Circuit::get_lamp_state()
{
    return lamp_state;
}

void Circuit::toggle_first_switch()
{
    if(first_switch)
    {
        first_switch = 0;
        if(lamp_state == 0)
        {
            lamp_state = 1;
        }
        else
        {
            lamp_state = 0;
        }
    }
    else
    {
        first_switch = 1;   
        if(lamp_state == 0)
        {
            lamp_state = 1;
        }
        else
        {
            lamp_state = 0;
        }
    }
}

void Circuit::toggle_second_switch()
{
    if(second_switch)
    {
        second_switch = 0;
        if(lamp_state == 0)
        {
            lamp_state = 1;
        }
        else
        {
            lamp_state = 0;
        }
    }
    else
    {
        second_switch = 1;
        if(lamp_state == 0)
        {
            lamp_state = 1;
        }
        else
        {
            lamp_state = 0;
        }
    }
}

int main()
{
    return 0;
}
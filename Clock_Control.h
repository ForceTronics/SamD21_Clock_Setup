/*
 * Clock_Control.h
 *
 * Created: 12/5/2020 
 *  Author: ForceTronics
 */ 


#ifndef CLOCK_CONTROL_H_
#define CLOCK_CONTROL_H_

class Clock_Control //class name
{
	public: //stuff you can use outside of library
	Clock_Control();
	void Clock_Init(void);
	void Change_Clock(uint32_t clk);
	
	private: //stuff you can only use inside library
	void PM_Clock_Bus_Setup(void);
	
};




#endif /* CLOCK_CONTROL_H_ */
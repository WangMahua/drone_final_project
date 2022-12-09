#ifndef __PIDCONTORL_H__
#define __PIDCONTORL_H__

#define gain_P 0.0f //100
#define gain_I 0.0f
#define gain_D 0.0f //50
#define left_Base 1800
#define right_Base 2500

void pid_control(float,float);

#endif

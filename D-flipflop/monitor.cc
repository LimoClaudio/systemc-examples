#include "monitor.h"
#include<iostream>

using namespace std;

void monitor::mon(void){
	cout<<"at "<<sc_time_stamp()<<" input is: "<<m_din<<" output is: "<<m_d1<<" "<<m_d2<<" "<<m_d3<<" "<<m_dout<<endl;
}


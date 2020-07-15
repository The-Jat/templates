#ifndef _SIMPLEPAIR_H_
#define _SIMPLEPAIR_H_

//the simple pair 
template <typename T1, typename T2>
struct SimplePair{
T1 first;
T2 second;
SimplePair(T1 first,T2 second): first{first}, second{second} {};

};


#endif

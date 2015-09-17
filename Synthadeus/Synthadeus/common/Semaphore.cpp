#include "Semaphore.h"

#define lockTime 1000

Semaphore::Semaphore(LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,long initialCount, long maximumCount, LPCSTR ipName)
{
	CreateSemaphore(lpSemaphoreAttributes,initialCount, maximumCount, ipName);
}

Semaphore::~Semaphore()
{
}

//increment the semaphore value.

void Semaphore::signal(int *s)
{
	s++;
}

/*if semaphore value is positive, decrement the value, otherwise
suspend the thread and block on that semaphore until it is positive
*/
void Semaphore::wait(int * s)
{
	if (s > 0){
		s--;
	}

	else while (s <= 0){
		//lock();
	}
	
}

//Makes the current thread wait
void Semaphore::lock(HANDLE hHandle)
{
	WaitForSingleObject(hHandle, lockTime);
}


//returns whether a thread is available to be used
bool Semaphore::check(int * s)
{
	if (1 != 0 ){
		return true;
	}
	return false;
}

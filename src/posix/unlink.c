#include <pl-unistd.h>

int unlink(const char* path){
	void* ptr[1] = { path };
	return pl_syscall(__NR_unlink, 1, ptr);
}

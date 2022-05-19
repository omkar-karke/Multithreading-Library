typedef struct spinlock
{
    int flag;
} spinlock;

void spinlock_init(spinlock *sl);
void thread_lock(spinlock *sl);
void thread_unlock(spinlock *sl);
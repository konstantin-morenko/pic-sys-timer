#include <xc.h>

#include <stdbool.h>

struct timer_t {
  int time;
  int period;
  unsigned overflow : 1;
  unsigned is_on : 1;
};

void start_timer(struct timer_t* timer, int period);
void stop_timer(struct timer_t* timer);
bool check_overflow(struct timer_t* timer);
void timer_clock(struct timer_t* timer);

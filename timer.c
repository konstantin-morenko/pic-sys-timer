
#include "timer.h"

void start_timer(struct timer_t* timer, int period) {
  timer->time = 0;
  timer->period = period;
  timer->overflow = 0;
  timer->is_on = 1;
}

void stop_timer(struct timer_t* timer) { timer->is_on = 0; }

bool check_overflow(struct timer_t* timer) { return timer->overflow; }

void timer_tick(struct timer_t* timer) {
  if(timer->is_on) timer->time++;
  if(timer->time == timer->period) {
    timer->time = 0;
    timer->overflow = 1;
  }
  return;
}

/* void set_timer(struct timer_t* timer, int period); */
/* void drop_overflow(struct timer_t* timer); */
/* void turn_overflow(struct timer_t* timer, bool state); */
/* void reset_timer(struct timer_t* timer); */
/* void turn_timer(struct timer_t* timer, bool state); */
/* #define TIMER_ON true */
/* #define TIMER_OFF false */

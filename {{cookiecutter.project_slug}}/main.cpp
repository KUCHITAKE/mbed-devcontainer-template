#include "mbed.h"

int main() {
  DigitalOut led{LED1};

  while (true) {
    led = !led;
    ThisThread::sleep_for(1000ms);
  }
}

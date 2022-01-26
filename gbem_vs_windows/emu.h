//code to start the emulator
#pragma once

#include "common.h"

typedef struct 
{
    bool paused;
    bool running;
    u64 ticks;
} emu_context;

int emu_run(int argc, char **argv);

emu_context *get_emu_context();

void emu_cycles(int cpu_cycles);
//code for processing cpu instructions idk
#include "cpu.h"
#include "emu.h"

//processes cpu instructions
static void proc_none(cpu_context* ctx)
{
	printf("INVALID INSTRUCTION!\n");
	exit(-7);
}

static void proc_ld(cpu_context* ctx)
{
	//TODO....
}

static void proc_jp(cpu_context* ctx)
{
	if (check_cond(ctx))
	{
		ctx->regs.pc = ctx->fetched_data;
		emu_cycles(1);
	}
}

static IN_PROC processors[] = {
	[IN_NONE] = proc_none,
	[IN_LD] = proc_ld,
	[IN_JP] = proc_jp
};
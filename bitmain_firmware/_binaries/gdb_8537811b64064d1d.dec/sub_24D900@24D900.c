int sub_24D900()
{
  int v0; // r0

  sub_26CBB8("_sdata", &unk_3EE398, 0);
  dword_48A8BC = -1;
  dword_48A8C0 = -1;
  sub_539B4("scope", (int)sub_2480FC, (int)"List the variables local to a scope");
  sub_53284("tracepoints", 7, (int)"Tracing of program execution without stopping the program.", (int **)&dword_474744);
  sub_539E8("tdump", 7, (int)sub_24B478, (int)"Print everything collected at the current tracepoint.");
  v0 = sub_539E8(
         "tvariable",
         7,
         (int)&loc_2499E8,
         (int)"Define a trace state variable.\n"
              "Argument is a $-prefixed name, optionally followed\n"
              "by '=' and an expression that sets the initial value\n"
              "at the start of tracing.");
  sub_53274(v0, (int)sub_F7440);
  sub_5329C(
    "tvariable",
    7,
    (int)sub_248C0C,
    (int)"Delete one or more trace state variables.\n"
         "Arguments are the names of the variables to delete.\n"
         "If no arguments are supplied, delete all variables.",
    &dword_4747A0);
  sub_539B4("tvariables", (int)&sub_24A0A8, (int)"Status of trace state variables and their values.\n");
  sub_539B4("static-tracepoint-markers", (int)sub_248F44, (int)"List target static tracepoints markers.\n");
  sub_53420(
    "tfind",
    7,
    (int)sub_24BABC,
    (int)"Select a trace frame;\nNo argument means forward by one frame; '-' means backward by one frame.",
    algn_48A924,
    (int)"tfind ",
    1,
    (int **)&dword_474744);
  sub_5329C(
    "outside",
    7,
    (int)sub_24BF50,
    (int)"Select a trace frame whose PC is outside the given range (exclusive).\nUsage: tfind outside addr1, addr2",
    (int **)algn_48A924);
  sub_5329C(
    "range",
    7,
    (int)sub_24BE48,
    (int)"Select a trace frame whose PC is in the given range (inclusive).\nUsage: tfind range addr1,addr2",
    (int **)algn_48A924);
  sub_5329C(
    "line",
    7,
    (int)sub_24BBD8,
    (int)"Select a trace frame by source line.\n"
         "Argument can be a line number (with optional source file),\n"
         "a function name, or '*' followed by an address.\n"
         "Default argument is 'the next source line that was traced'.",
    (int **)algn_48A924);
  sub_5329C(
    "tracepoint",
    7,
    (int)sub_24BB3C,
    (int)"Select a trace frame by tracepoint number.\nDefault is the tracepoint for the current trace frame.",
    (int **)algn_48A924);
  sub_5329C(
    "pc",
    7,
    (int)sub_24BAC0,
    (int)"Select a trace frame by PC.\nDefault is the current PC, or the PC of the current trace frame.",
    (int **)algn_48A924);
  sub_5329C(
    "end",
    7,
    (int)sub_24BAB0,
    (int)"De-select any trace frame and resume 'live' debugging.",
    (int **)algn_48A924);
  sub_5474C((int)"none", (unsigned __int8 *)"end", 7, 0, (int *)algn_48A924);
  sub_5329C("start", 7, (int)sub_24BAA4, (int)"Select the first trace frame in the trace buffer.", (int **)algn_48A924);
  sub_539E8("tstatus", 7, (int)sub_247BB4, (int)"Display the status of the current trace data collection.");
  sub_539E8(
    "tstop",
    7,
    (int)sub_24AE74,
    (int)"Stop trace data collection.\n"
         "Usage: tstop [ <notes> ... ]\n"
         "Any arguments supplied are recorded with the trace as a stop reason and\n"
         "reported by tstatus (if the target supports trace notes).");
  sub_539E8(
    "tstart",
    7,
    (int)sub_24ACC0,
    (int)"Start trace data collection.\n"
         "Usage: tstart [ <notes> ... ]\n"
         "Any arguments supplied are recorded with the trace as a note and\n"
         "reported by tstatus (if the target supports trace notes).");
  sub_539E8(
    "end",
    7,
    (int)sub_24792C,
    (int)"Ends a list of commands or actions.\n"
         "Several GDB commands allow you to enter a list of commands or actions.\n"
         "Entering \"end\" on a line by itself is the normal way to terminate\n"
         "such a list.\n"
         "\n"
         "Note: the \"end\" command cannot be used at the gdb prompt.");
  sub_539E8(
    "while-stepping",
    7,
    (int)sub_24793C,
    (int)"Specify single-stepping behavior at a tracepoint.\n"
         "Argument is number of instructions to trace in single-step mode\n"
         "following the tracepoint.  This command is normally followed by\n"
         "one or more \"collect\" commands, to specify what to collect\n"
         "while single-stepping.\n"
         "\n"
         "Note: this command can only be used in a tracepoint \"actions\" list.");
  sub_547D8((int)"ws", "while-stepping", 8, 0);
  sub_547D8((int)"stepping", "while-stepping", 8, 0);
  sub_539E8(
    "collect",
    7,
    (int)sub_248DFC,
    (int)"Specify one or more data items to be collected at a tracepoint.\n"
         "Accepts a comma-separated list of (one or more) expressions.  GDB will\n"
         "collect all data (variables, registers) referenced by that expression.\n"
         "Also accepts the following special arguments:\n"
         "    $regs   -- all registers.\n"
         "    $args   -- all function arguments.\n"
         "    $locals -- all variables local to the block/function scope.\n"
         "    $_sdata -- static tracepoint data (ignored for non-static tracepoints).\n"
         "Note: this command can only be used in a tracepoint \"actions\" list.");
  sub_539E8(
    "teval",
    7,
    (int)sub_248BFC,
    (int)"Specify one or more expressions to be evaluated at a tracepoint.\n"
         "Accepts a comma-separated list of (one or more) expressions.\n"
         "The result of each evaluation will be discarded.\n"
         "Note: this command can only be used in a tracepoint \"actions\" list.");
  sub_539E8(
    "actions",
    7,
    (int)sub_248028,
    (int)"Specify the actions to be taken at a tracepoint.\n"
         "Tracepoint actions may include collecting of specified data,\n"
         "single-stepping, or enabling/disabling other tracepoints,\n"
         "depending on target's capabilities.");
  dword_48A914 = sub_32727C("");
  sub_536B0(
    "default-collect",
    7,
    (int)&dword_48A914,
    "Set the list of expressions to collect by default",
    "Show the list of expressions to collect by default",
    0,
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535E0(
    "disconnected-tracing",
    -1,
    (int)&dword_48A8A8,
    "Set whether tracing continues after GDB disconnects.",
    "Show whether tracing continues after GDB disconnects.",
    "Use this to continue a tracing run even if GDB disconnects\n"
    "or detaches from the target.  You can reconnect later and look at\n"
    "trace data collected in the meantime.",
    (int)sub_2478C8,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535E0(
    "circular-trace-buffer",
    -1,
    (int)&dword_48A8AC,
    "Set target's use of circular trace buffer.",
    "Show target's use of circular trace buffer.",
    "Use this to make the trace buffer into a circular buffer,\n"
    "which will discard traceframes (oldest first) instead of filling\n"
    "up and stopping the trace run.",
    (int)sub_2478E8,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_538F4(
    "trace-buffer-size",
    -1,
    (int)&dword_46DCF0,
    "Set requested size of trace buffer.",
    "Show requested size of trace buffer.",
    "Use this to choose a size for the trace buffer.  Some targets\n"
    "may have fixed or limited buffer sizes.  Specifying \"unlimited\" or -1\n"
    "disables any attempt to set the buffer size and lets the target choose.",
    (int)sub_247908,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_536B0(
    "trace-user",
    7,
    (int)&dword_48A8B8,
    "Set the user name to use for current and future trace runs",
    "Show the user name to use for current and future trace runs",
    0,
    (int)sub_247A08,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_536B0(
    "trace-notes",
    7,
    (int)&dword_48A8B4,
    "Set notes string to use for current and future trace runs",
    "Show the notes string to use for current and future trace runs",
    0,
    (int)sub_2479C8,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  return sub_536B0(
           "trace-stop-notes",
           7,
           (int)&dword_48A8B0,
           "Set notes string to use for future tstop commands",
           "Show the notes string to use for future tstop commands",
           0,
           (int)sub_247988,
           0,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}

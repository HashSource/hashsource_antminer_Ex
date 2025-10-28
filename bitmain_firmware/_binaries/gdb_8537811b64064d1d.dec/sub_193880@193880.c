int sub_193880()
{
  int result; // r0
  int v1; // r0
  int v2; // r0

  dword_4879E4 = sub_1A4284("/usr/lib/gdb", 1);
  sub_5395C(
    "jit",
    11,
    (int)&dword_4879D8,
    "Set JIT debugging.",
    "Show JIT debugging.",
    "When non-zero, JIT debugging is enabled.",
    0,
    (int)sub_192300,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_1B9368(sub_193510);
  sub_1BA1C4(1652396);
  sub_1B9C6C(1647800);
  dword_4879D4 = sub_1B6B00(0, sub_191F74);
  dword_4879D0 = sub_1CD128(0, sub_191DB0);
  dword_4879E0 = (int)sub_16EBE0(1646884);
  result = sub_16353C();
  if ( result )
  {
    v1 = sub_539E8(
           "jit-reader-load",
           -1,
           (int)sub_193520,
           (int)"Load FILE as debug info reader and unwinder for JIT compiled code.\n"
                "Usage: jit-reader-load FILE\n"
                "Try to load file FILE as a debug info reader (and unwinder) for\n"
                "JIT compiled code.  The file is loaded from /usr/lib/gdb,\n"
                "relocated relative to the GDB executable if required.");
    sub_53274(v1, 1010984);
    v2 = sub_539E8(
           "jit-reader-unload",
           -1,
           (int)sub_193720,
           (int)"Unload the currently loaded JIT debug info reader.\n"
                "Usage: jit-reader-unload\n"
                "\n"
                "Do \"help jit-reader-load\" for info on loading debug info readers.");
    return sub_53274(v2, (int)nullsub_61);
  }
  return result;
}

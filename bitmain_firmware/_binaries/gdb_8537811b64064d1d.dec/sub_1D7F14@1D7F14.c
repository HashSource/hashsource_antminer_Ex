int sub_1D7F14()
{
  int result; // r0

  sub_53420(
    "btrace",
    10,
    (int)sub_1D4780,
    (int)"Start branch trace recording.",
    &unk_488080,
    (int)"record btrace ",
    0,
    &dword_487D58);
  sub_5474C((int)"b", (unsigned __int8 *)"btrace", 10, 1, (int *)&dword_487D58);
  sub_5329C(
    "bts",
    10,
    (int)sub_1D46CC,
    (int)"Start branch trace recording in Branch Trace Store (BTS) format.\n"
         "\n"
         "The processor stores a from/to record for each branch into a cyclic buffer.\n"
         "This format may not be available on all processors.",
    (int **)&unk_488080);
  sub_5474C((int)"bts", "btrace bts", 10, 1, (int *)&dword_487D58);
  sub_5329C(
    "pt",
    10,
    (int)sub_1D4618,
    (int)"Start branch trace recording in Intel Processor Trace format.\n"
         "\n"
         "This format may not be available on all processors.",
    (int **)&unk_488080);
  sub_5474C((int)"pt", "btrace pt", 10, 1, (int *)&dword_487D58);
  sub_53420(
    "btrace",
    4,
    (int)sub_1D451C,
    (int)"Set record options",
    &dword_487D88,
    (int)"set record btrace ",
    0,
    (int **)&dword_487D54);
  sub_53420(
    "btrace",
    4,
    (int)sub_1D4504,
    (int)"Show record options",
    &dword_487D84,
    (int)"show record btrace ",
    0,
    (int **)&dword_487D50);
  sub_53514(
    "replay-memory-access",
    -1,
    (int)off_3D03C8,
    (int)&off_46DAB4,
    "Set what memory accesses are allowed during replay.",
    "Show what memory accesses are allowed during replay.",
    "Default is READ-ONLY.\n"
    "\n"
    "The btrace record target does not trace data.\n"
    "The memory therefore corresponds to the live target and not to the current replay position.\n"
    "\n"
    "When READ-ONLY, allow accesses to read-only memory during replay.\n"
    "When READ-WRITE, allow accesses to read-only and read-write memory during replay.",
    0,
    (int)sub_1D4534,
    (int **)&dword_487D88,
    (int **)&dword_487D84);
  sub_53420(
    "bts",
    4,
    (int)sub_1D4598,
    (int)"Set record btrace bts options",
    &dword_487D90,
    (int)"set record btrace bts ",
    0,
    (int **)&dword_487D88);
  sub_53420(
    "bts",
    4,
    (int)sub_1D44EC,
    (int)"Show record btrace bts options",
    &dword_487D80,
    (int)"show record btrace bts ",
    0,
    (int **)&dword_487D84);
  sub_53834(
    "buffer-size",
    -1,
    (int)&dword_487D70,
    "Set the record/replay bts buffer size.",
    "Show the record/replay bts buffer size.",
    "When starting recording request a trace buffer of this size.  The actual buffer size may differ from the requested s"
    "ize.  Use \"info record\" to see the actual buffer size.\n"
    "\n"
    "Bigger buffers allow longer recording but also take more time to process the recorded execution trace.\n"
    "\n"
    "The trace buffer size may not be changed while recording.",
    0,
    (int)sub_1D44C4,
    (int **)&dword_487D90,
    (int **)&dword_487D80);
  sub_53420(
    "pt",
    4,
    (int)sub_1D455C,
    (int)"Set record btrace pt options",
    &dword_487D8C,
    (int)"set record btrace pt ",
    0,
    (int **)&dword_487D88);
  sub_53420(
    "pt",
    4,
    (int)sub_1D44D4,
    (int)"Show record btrace pt options",
    &dword_487D7C,
    (int)"show record btrace pt ",
    0,
    (int **)&dword_487D84);
  sub_53834(
    "buffer-size",
    -1,
    (int)&dword_487D74,
    "Set the record/replay pt buffer size.",
    "Show the record/replay pt buffer size.",
    "Bigger buffers allow longer recording but also take more time to process the recorded execution.\n"
    "The actual buffer size may differ from the requested size.  Use \"info record\" to see the actual buffer size.",
    0,
    (int)sub_1D44B4,
    (int **)&dword_487D8C,
    (int **)&dword_487D7C);
  dword_487DA0 = (int)"record-btrace";
  dword_487DA4 = (int)"Branch tracing target";
  dword_487DA8 = (int)"Collect control-flow trace and provide the execution history.";
  dword_487DB0 = (int)sub_1D7DD4;
  dword_487DB8 = (int)sub_1D6CAC;
  dword_487EFC = (int)sub_1D6C70;
  dword_487DC4 = (int)&loc_1D39F0;
  dword_487DC8 = (int)sub_1D6C44;
  dword_487E90 = (int)&loc_1D3A8C;
  dword_487E58 = (int)&loc_1D3B1C;
  dword_488028 = (int)sub_1D6BCC;
  dword_48802C = (int)sub_1D6964;
  dword_488050 = (int)sub_1D6710;
  dword_488054 = (int)sub_1D666C;
  dword_488058 = (int)sub_1D6518;
  dword_48805C = (int)sub_1D5E9C;
  dword_488060 = (int)sub_1D5DF8;
  dword_488064 = (int)sub_1D5CA4;
  dword_488024 = (int)sub_1D45D4;
  dword_488038 = (int)sub_1D5138;
  dword_48803C = (int)sub_1D5318;
  dword_488040 = (int)sub_1D4AC8;
  dword_487F20 = (int)sub_1D5350;
  dword_487DEC = (int)sub_1D4958;
  dword_487DE8 = (int)sub_1D48A4;
  dword_487DD8 = (int)&loc_1D5020;
  dword_487DDC = (int)&loc_1D7130;
  dword_487DE0 = (int)sub_1D52B4;
  dword_48806C = (int)sub_1D40C4;
  dword_488070 = (int)sub_1D40D0;
  dword_487DCC = (int)&loc_1D5554;
  dword_487DD0 = (int)sub_1D70EC;
  dword_487DD4 = (int)sub_1D742C;
  dword_487EB8 = (int)sub_1D5468;
  dword_487EA4 = (int)sub_1D5284;
  dword_487EA0 = (int)sub_1D5224;
  dword_488044 = (int)sub_1D73C8;
  dword_488048 = (int)sub_1D73B4;
  dword_48804C = (int)sub_1D733C;
  dword_487F44 = (int)sub_1D40DC;
  dword_487DF8 = (int)sub_1D705C;
  dword_487DFC = (int)sub_1D51B4;
  dword_487F48 = (int)sub_1D40E4;
  dword_488074 = (int)sub_1D40F4;
  dword_488078 = (int)sub_1D4108;
  dword_487DF0 = (int)sub_1D70A4;
  dword_487DF4 = (int)sub_1D51EC;
  dword_487ED4 = 4;
  dword_48807C = 3840;
  sub_22EED8(algn_487D9C);
  result = sub_323B08(50, sub_1D4098, sub_1D40AC, 0, sub_930BC, sub_1D4484);
  dword_487D78 = result;
  *(_QWORD *)&dword_487D70 = 0x400000010000LL;
  return result;
}

int sub_1DC9BC()
{
  int v0; // r0
  int v1; // r11
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  dword_488408 = (int)&loc_1D3954;
  dword_488498 = (int)&loc_1D3B1C;
  dword_48841C = (int)sub_1DC7BC;
  dword_4883E0 = (int)"record-full";
  dword_48840C = (int)sub_1D9808;
  dword_488410 = (int)sub_1D8B80;
  dword_488404 = (int)&loc_1D39F0;
  dword_4884D0 = (int)&loc_1D3A8C;
  dword_488560 = (int)sub_1DC5A4;
  dword_488428 = 1937420;
  dword_48842C = (int)sub_1D8664;
  dword_48853C = 1936128;
  dword_4883F8 = 1938608;
  dword_4883F0 = (int)sub_1D9938;
  dword_488414 = 1942416;
  dword_48846C = 1936456;
  dword_488460 = 1936372;
  dword_488430 = (int)sub_1D84F8;
  dword_488438 = 1934620;
  dword_4880B8 = 0;
  dword_4880BC = 0;
  dword_4880C0 = 0;
  dword_4883E4 = (int)"Process record and replay target";
  dword_4883E8 = (int)"Log program while executing and replay execution from log.";
  dword_488434 = 1934612;
  dword_48843C = 1937404;
  dword_488584 = (int)sub_1D9004;
  dword_488514 = 4;
  dword_488680 = (int)sub_1DB2F0;
  dword_488670 = (int)sub_1DB318;
  dword_488674 = (int)sub_1D9374;
  dword_488678 = (int)sub_1D8560;
  dword_488554 = 1936520;
  dword_488684 = 1946356;
  dword_488688 = (int)sub_1DB2B4;
  dword_488558 = 1935840;
  dword_488588 = 1934648;
  dword_48868C = (int)sub_1DB258;
  dword_4886BC = 3840;
  dword_488664 = (int)sub_1D8548;
  dword_48866C = 1935552;
  dword_48867C = (int)sub_1D85A4;
  sub_22EED8(&unk_4883DC);
  sub_22EEE0(&unk_4883DC, "record");
  dword_4880F8 = (int)"Log program while executing and replay execution from log.";
  dword_488144 = 1934612;
  dword_48824C = 1936128;
  dword_488148 = 1934620;
  dword_488124 = 1942416;
  dword_48814C = 1937404;
  dword_488170 = 1936372;
  dword_488294 = (int)sub_1D9004;
  dword_48817C = 1936456;
  dword_488264 = 1936520;
  dword_4880F4 = (int)"Process record and replay target";
  dword_488100 = (int)sub_1D9938;
  dword_488108 = 1938608;
  dword_488140 = (int)sub_1D84F8;
  dword_488224 = 4;
  dword_488268 = 1935840;
  dword_48838C = (int)sub_1D85A4;
  dword_488298 = 1934648;
  dword_48813C = (int)sub_1D8600;
  dword_4880F0 = (int)"record-core";
  dword_48837C = 1935552;
  dword_488238 = (int)sub_1D8608;
  dword_48811C = (int)sub_1D8A98;
  dword_488384 = (int)sub_1D9374;
  dword_488394 = 1946356;
  dword_488128 = (int)&loc_1D8F8C;
  dword_488130 = (int)nullsub_65;
  dword_488138 = (int)sub_1D85F8;
  dword_48812C = (int)sub_1D887C;
  dword_488270 = (int)&loc_1D8D5C;
  dword_488398 = (int)sub_1DB2B4;
  dword_488374 = (int)sub_1D8548;
  dword_488388 = (int)sub_1D8560;
  dword_4881A8 = (int)sub_1D8B3C;
  dword_48839C = (int)sub_1DB258;
  dword_4883CC = 3840;
  sub_22EED8(&unk_4880EC);
  sub_53420(
    "full",
    10,
    (int)sub_1D88B4,
    (int)"Start full execution recording.",
    &dword_4886C0,
    (int)"record full ",
    0,
    &dword_487D58);
  v0 = sub_5329C(
         "restore",
         10,
         (int)sub_1DA370,
         (int)"Restore the execution log from a file.\nArgument is filename.  File must be created with 'record save'.",
         &dword_4886C0);
  sub_53274(v0, 1010984);
  v1 = sub_5474C((int)"restore", "full restore", 10, 1, (int *)&dword_487D58);
  sub_53274(v1, 1010984);
  sub_532D0(v1, (int)"record full restore");
  sub_53420(
    "full",
    4,
    (int)sub_1D8834,
    (int)"Set record options",
    &dword_4880AC,
    (int)"set record full ",
    0,
    (int **)&dword_487D54);
  sub_53420(
    "full",
    4,
    (int)sub_1D881C,
    (int)"Show record options",
    &dword_4880A8,
    (int)"show record full ",
    0,
    (int **)&dword_487D50);
  sub_535E0(
    "stop-at-limit",
    -1,
    (int)&dword_46DAC0,
    "Set whether record/replay stops when record/replay buffer becomes full.",
    "Show whether record/replay stops when record/replay buffer becomes full.",
    "Default is ON.\n"
    "When ON, if the record/replay buffer becomes full, ask user what to do.\n"
    "When OFF, if the record/replay buffer becomes full,\n"
    "delete the oldest recorded instruction to make room for each new one.",
    0,
    0,
    (int **)&dword_4880AC,
    (int **)&dword_4880A8);
  v2 = sub_5474C((int)"stop-at-limit", (unsigned __int8 *)"full stop-at-limit", -1, 1, &dword_487D54);
  sub_532D0(v2, (int)"set record full stop-at-limit");
  v3 = sub_5474C((int)"stop-at-limit", (unsigned __int8 *)"full stop-at-limit", -1, 1, &dword_487D50);
  sub_532D0(v3, (int)"show record full stop-at-limit");
  sub_53834(
    "insn-number-max",
    -1,
    (int)&dword_46DABC,
    "Set record/replay buffer limit.",
    "Show record/replay buffer limit.",
    "Set the maximum number of instructions to be stored in the\n"
    "record/replay buffer.  A value of either \"unlimited\" or zero means no\n"
    "limit.  Default is 200000.",
    (int)sub_1D9654,
    0,
    (int **)&dword_4880AC,
    (int **)&dword_4880A8);
  v4 = sub_5474C((int)"insn-number-max", (unsigned __int8 *)"full insn-number-max", -1, 1, &dword_487D54);
  sub_532D0(v4, (int)"set record full insn-number-max");
  v5 = sub_5474C((int)"insn-number-max", (unsigned __int8 *)"full insn-number-max", -1, 1, &dword_487D50);
  sub_532D0(v5, (int)"show record full insn-number-max");
  sub_535E0(
    "memory-query",
    -1,
    (int)&dword_4886C4,
    "Set whether query if PREC cannot record memory change of next instruction.",
    "Show whether query if PREC cannot record memory change of next instruction.",
    "Default is OFF.\nWhen ON, query if PREC cannot record memory change of next instruction.",
    0,
    0,
    (int **)&dword_4880AC,
    (int **)&dword_4880A8);
  v6 = sub_5474C((int)"memory-query", (unsigned __int8 *)"full memory-query", -1, 1, &dword_487D54);
  sub_532D0(v6, (int)"set record full memory-query");
  v7 = sub_5474C((int)"memory-query", (unsigned __int8 *)"full memory-query", -1, 1, &dword_487D50);
  return sub_532D0(v7, (int)"show record full memory-query");
}

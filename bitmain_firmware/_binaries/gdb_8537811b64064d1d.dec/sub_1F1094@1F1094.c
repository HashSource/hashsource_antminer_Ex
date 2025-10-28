int sub_1F1094()
{
  _DWORD *v0; // r6
  void *v1; // r0
  int **v2; // r5
  int **v3; // r11
  int v4; // r7
  char *v5; // r11
  _DWORD *v6; // r12
  char *v7; // r0
  int v8; // r0
  int v9; // r0
  int *v10; // r3
  int v11; // r2
  int v12; // r1
  __int64 v14; // r0
  int v15; // lr
  int *v16; // r11
  _DWORD *v17; // r5
  int v18; // r0
  const char **v19; // r8
  int v20; // r4
  int v21; // r12
  int v22; // r3
  int v23; // r0
  const char **i; // r4
  int v25; // r0
  int v26; // r2
  _DWORD *j; // r4
  __int16 *v28; // r1
  char *v29; // r0
  int v30; // r0
  int v31; // r12
  int v32; // r4
  int v33; // r6
  char *v34; // r7
  size_t v35; // r0
  int v36; // r0
  int v37; // r0
  int **v38; // r0
  int v39; // r1
  char *v40; // r5
  char *v41; // r6
  char *v42; // r4
  char *v43; // r0
  const char **v44; // r5
  const char **v45; // r6
  char *v46; // r4
  char *v47; // r0
  size_t v48; // r0
  size_t v49; // r0
  _DWORD *v50; // r3
  char *v51; // r0
  int v52; // r4
  void *v53; // r4
  size_t v54; // r7
  int v55; // r0
  int v56; // r0
  void *v57; // r4
  char *v58; // [sp+4h] [bp-8E0h]
  void **v59; // [sp+10h] [bp-8D4h]
  void **v60; // [sp+14h] [bp-8D0h]
  const char **v61; // [sp+18h] [bp-8CCh] BYREF
  void *v62; // [sp+1Ch] [bp-8C8h]
  int v63; // [sp+20h] [bp-8C4h]
  _DWORD *v64; // [sp+24h] [bp-8C0h] BYREF
  void *ptr; // [sp+28h] [bp-8BCh]
  int v66; // [sp+2Ch] [bp-8B8h]
  int v67[4]; // [sp+30h] [bp-8B4h] BYREF
  char s[40]; // [sp+40h] [bp-8A4h] BYREF
  char v69[2052]; // [sp+68h] [bp-87Ch] BYREF
  int *v70; // [sp+86Ch] [bp-78h]
  int v71; // [sp+870h] [bp-74h]
  _DWORD *v72; // [sp+874h] [bp-70h]
  int *v73; // [sp+878h] [bp-6Ch]
  int *v74; // [sp+87Ch] [bp-68h]
  int *v75; // [sp+880h] [bp-64h]
  int *v76; // [sp+884h] [bp-60h]
  const char *v77; // [sp+888h] [bp-5Ch]
  int v78; // [sp+88Ch] [bp-58h]
  int *v79; // [sp+890h] [bp-54h]
  const char *v80; // [sp+894h] [bp-50h]
  int v81; // [sp+898h] [bp-4Ch]
  int **v82; // [sp+89Ch] [bp-48h]
  const char *v83; // [sp+8B0h] [bp-34h]
  int **v84; // [sp+8B4h] [bp-30h]
  int (*v85)(); // [sp+8B8h] [bp-2Ch]
  void (*v86)(); // [sp+8BCh] [bp-28h]
  int (*v87)(); // [sp+8C0h] [bp-24h]
  int v88; // [sp+8C4h] [bp-20h]
  int v89; // [sp+8C8h] [bp-1Ch] BYREF
  int v90; // [sp+8CCh] [bp-18h]
  int v91; // [sp+8D0h] [bp-14h]
  const char *v92; // [sp+8DCh] [bp-8h] BYREF

  dword_488CA0 = (int)sub_16EBE8((int)sub_1E1DA0);
  dword_488D00 = (int)sub_16EBE0(1973528);
  dword_488C80 = sub_1CD128(0, (int)sub_1E125C);
  v83 = "remote";
  v0 = sub_930BC(1u, 0x1D8u);
  v0[1] = 400;
  v1 = sub_93050(0x190u);
  dword_488D94 = (int)sub_1E1FF8;
  dword_488DA4 = (int)&loc_1EE284;
  dword_488DA8 = (int)&loc_1EDF98;
  v84 = (int **)&loc_1ED8AC;
  *v0 = v1;
  dword_488D70 = (int)"Remote serial target in gdb-specific protocol";
  dword_488D74 = (int)"Use a remote computer via a serial line, using a gdb-specific protocol.\n"
                      "Specify the serial device it is connected to\n"
                      "(e.g. /dev/ttyS0, /dev/ttya, COM1, etc.).";
  dword_488D7C = (int)sub_1F4D18;
  dword_488D84 = (int)&loc_1E7B84;
  dword_488D90 = (int)sub_1E8D40;
  dword_488D98 = (int)sub_1EEE28;
  dword_488D9C = (int)&loc_1EEB44;
  dword_488DA0 = (int)sub_1EE3E4;
  dword_488DC8 = (int)sub_1E22A8;
  dword_488C94 = (int)v0;
  dword_488DAC = (int)sub_1E2FC4;
  dword_488DB0 = (int)sub_1E1B44;
  dword_488DB4 = (int)&loc_1EDB68;
  dword_488DB8 = (int)sub_1EDA5C;
  dword_488DBC = (int)sub_1E3C48;
  dword_488DC0 = (int)sub_1E22C4;
  dword_488DC4 = (int)sub_1E3C14;
  v85 = sub_1ED018;
  dword_488DEC = (int)sub_1E3BE0;
  dword_488DF8 = (int)sub_1E3B94;
  dword_488DFC = (int)sub_1E1CF8;
  dword_488DCC = (int)sub_1E105C;
  v2 = v84;
  v86 = (void (*)())sub_1E3B58;
  dword_488DD8 = (int)&loc_1ED790;
  v84 = (int **)sub_1F31D4;
  dword_488E74 = (int)sub_1E2E8C;
  dword_488DE0 = (int)&loc_1ED5FC;
  dword_488D6C = (int)v83;
  v0[21] = -1;
  v0[106] = -1;
  v3 = v84;
  dword_488E5C = (int)sub_1ED044;
  dword_488E7C = (int)v86;
  v4 = (int)v85;
  dword_488DD4 = (int)v2;
  dword_488E00 = (int)sub_1E1034;
  v84 = (int **)sub_1EB2A8;
  dword_488E78 = 2032320;
  v0[24] = 0;
  v0[26] = 0;
  dword_488DDC = (int)&loc_1ED478;
  dword_488E24 = (int)sub_1ED290;
  dword_488E28 = (int)sub_1E2034;
  dword_488E64 = v4;
  dword_488E54 = (int)sub_1ECC20;
  dword_488E68 = (int)&loc_1ECA34;
  dword_488E6C = (int)sub_1EC988;
  dword_488E70 = (int)v3;
  dword_488E84 = (int)sub_1EC308;
  dword_488F04 = (int)sub_1E1520;
  v87 = sub_22EA24;
  dword_488EF0 = (int)sub_1E3540;
  dword_488EB0 = (int)sub_22EA20;
  dword_488EEC = (int)sub_1EB568;
  v88 = 1989240;
  dword_488EB4 = (int)sub_22EA24;
  dword_488EE8 = (int)v84;
  dword_489048 = 3840;
  dword_488E88 = (int)sub_1EC21C;
  dword_488E8C = (int)sub_1E6FB4;
  dword_488E90 = (int)&loc_1E5B78;
  dword_488EAC = (int)sub_22EA1C;
  dword_488F10 = (int)sub_1E2614;
  dword_488EA0 = 2;
  dword_488E94 = (int)&loc_1E22FC;
  dword_488E98 = (int)sub_1FDC7C;
  dword_488EA4 = (int)sub_22E9F4;
  dword_488EA8 = (int)sub_22EA18;
  v85 = sub_1E8094;
  v86 = nullsub_66;
  dword_488EB8 = 1;
  dword_488EF4 = (int)sub_1E3CD4;
  dword_488EF8 = (int)&loc_1E5AD4;
  dword_488EFC = 1989240;
  dword_488F00 = (int)&loc_1EB1E4;
  dword_488F0C = (int)sub_1E83BC;
  dword_488EC0 = (int)sub_1E2B88;
  dword_488EC8 = (int)sub_1E36E4;
  dword_488EC4 = (int)sub_1E2B50;
  dword_488ECC = (int)sub_1EAFBC;
  dword_488E0C = (int)sub_1E8094;
  dword_488E1C = (int)nullsub_67;
  dword_488F20 = (int)sub_1E10D0;
  dword_488E14 = (int)nullsub_66;
  dword_488F18 = (int)sub_1E2894;
  dword_488F38 = (int)sub_1E662C;
  dword_488F3C = (int)sub_1E6320;
  dword_488F40 = (int)sub_1E6460;
  dword_488F44 = (int)sub_1E703C;
  dword_488F48 = (int)sub_1E68A8;
  dword_488F4C = (int)sub_1E6570;
  dword_488F50 = (int)sub_1E66F4;
  dword_488F54 = (int)sub_1E67A4;
  dword_488F28 = (int)sub_1E2254;
  dword_488ED0 = (int)sub_1E10C8;
  dword_488F1C = (int)sub_1E228C;
  dword_488F24 = (int)sub_1E2270;
  dword_488F2C = (int)sub_1E2238;
  dword_488F5C = (int)sub_1EAF70;
  dword_488F60 = (int)&loc_1F29D4;
  dword_488F64 = (int)sub_1EA8CC;
  dword_488F68 = (int)sub_1EAC94;
  dword_488F6C = (int)sub_1EABE4;
  dword_488F70 = (int)sub_1EAB34;
  dword_488F74 = (int)sub_1EA9B4;
  dword_488F80 = (int)sub_1EA624;
  dword_488F78 = (int)sub_1EA948;
  dword_488F7C = (int)sub_1EA780;
  dword_488F84 = (int)sub_1EA5B8;
  dword_488F88 = (int)sub_1EA2F4;
  dword_488F8C = (int)sub_1EA264;
  dword_488F90 = (int)sub_1EA194;
  dword_488F94 = (int)sub_1EA0E0;
  dword_488F98 = (int)sub_1EA02C;
  dword_488F9C = (int)sub_1E9F54;
  dword_488FA0 = (int)sub_1E9ED0;
  dword_488FAC = (int)&loc_1E9C94;
  dword_488FA4 = (int)sub_1E9E20;
  dword_488FA8 = (int)sub_1E9D98;
  dword_488FB0 = (int)sub_1E9B18;
  dword_488FB4 = (int)sub_1E3AA4;
  dword_488FB8 = (int)sub_1E97C8;
  dword_488FBC = (int)sub_1E96B8;
  dword_488FC0 = (int)sub_1E95C8;
  dword_488FC4 = (int)sub_1E94F8;
  dword_488FC8 = (int)sub_1E9300;
  dword_488FCC = (int)sub_1E1EC8;
  dword_488FD8 = (int)sub_1E2640;
  dword_488FD0 = (int)sub_1E9250;
  dword_488FD4 = (int)sub_1E2220;
  dword_488FDC = (int)sub_1E8E84;
  dword_488FE0 = (int)sub_1E8D58;
  dword_488FE4 = (int)sub_1E12E8;
  dword_488FE8 = (int)sub_1E251C;
  dword_488FEC = (int)sub_1E10D8;
  dword_489034 = (int)sub_1E2204;
  dword_488E44 = (int)sub_1E8BA8;
  dword_488E50 = (int)sub_1E1E34;
  dword_488E3C = (int)sub_1E2854;
  dword_488E40 = (int)sub_1E6FA8;
  dword_488E48 = (int)sub_1E2834;
  dword_488E80 = (int)sub_1E39F0;
  dword_488E34 = (int)sub_1E2874;
  dword_488E38 = (int)sub_1E0E44;
  v84 = (int **)&dword_474744;
  dword_488E4C = (int)sub_1E49C0;
  dword_488F14 = (int)sub_1E2814;
  sub_22EED8(&unk_488D68);
  memcpy(&unk_48904C, &unk_488D68, 0x2E4u);
  dword_489050 = (int)"extended-remote";
  dword_489054 = (int)"Extended remote serial target in gdb-specific protocol";
  dword_489110 = (int)sub_1EFBD8;
  dword_489074 = (int)sub_1E8D4C;
  dword_48906C = (int)&loc_1F4D38;
  dword_489070 = (int)sub_1EFAD4;
  dword_489204 = (int)sub_1E22E0;
  dword_489058 = (int)"Use a remote computer via a serial line, using a gdb-specific protocol.\n"
                      "Specify the serial device it is connected to (e.g. /dev/ttya).";
  dword_489060 = (int)sub_1F4D28;
  sub_22EED8(&unk_48904C);
  sub_1B9664((int)sub_1E8AAC);
  sub_1BA1C4((int)sub_1E7A30);
  v5 = (char *)v83;
  v6 = sub_93050(0xCu);
  v80 = "set remote ";
  LOBYTE(v81) = 0;
  v82 = (int **)&dword_47475C;
  v7 = (char *)v83;
  v79 = &dword_488C88;
  v6[2] = sub_1E1CA4;
  *v6 = 0;
  v6[1] = 0;
  dword_488CE4 = (int)v6;
  sub_53420(
    v7,
    11,
    (int)sub_1E19CC,
    (int)"Remote protocol specific variables\n"
         "Configure various remote-protocol specific variables such as\n"
         "the packets being used",
    v79,
    (int)v80,
    v81,
    v82);
  sub_53420(
    v5,
    11,
    (int)sub_1E1B88,
    (int)"Remote protocol specific variables\n"
         "Configure various remote-protocol specific variables such as\n"
         "the packets being used",
    &dword_488C8C,
    (int)"show remote ",
    0,
    (int **)&dword_47474C);
  sub_5329C(
    "compare-sections",
    10,
    (int)sub_1E8614,
    (int)"Compare section data on target to the exec file.\n"
         "Argument is a single section name (default: all loaded sections).\n"
         "To compare only read-only loaded sections, specify the -r option.",
    v84);
  sub_5329C(
    "packet",
    11,
    (int)sub_1E80FC,
    (int)"Send an arbitrary packet to a remote target.\n"
         "   maintenance packet TEXT\n"
         "If GDB is talking to an inferior via the GDB serial protocol, then\n"
         "this command sends the string TEXT to the inferior, and displays the\n"
         "response packet.  GDB supplies the initial `$' character, and the\n"
         "terminating `#' character and checksum.",
    (int **)&dword_47478C);
  sub_535E0(
    "remotebreak",
    -1,
    (int)dword_4886E4,
    "Set whether to send break if interrupted.",
    "Show whether to send break if interrupted.",
    "If set, a break, instead of a cntrl-c, is sent to the remote target.",
    (int)sub_1E0DE4,
    (int)nullsub_68,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  v92 = "remotebreak";
  v8 = sub_544F0((unsigned __int8 **)&v92, dword_47475C, "", -1, 1);
  sub_532D0(v8, (int)"set remote interrupt-sequence");
  v92 = "remotebreak";
  v9 = sub_544F0((unsigned __int8 **)&v92, dword_47474C, "", -1, 1);
  sub_532D0(v9, (int)"show remote interrupt-sequence");
  sub_53514(
    "interrupt-sequence",
    4,
    (int)off_3D4C1C,
    (int)&off_46DB04,
    "Set interrupt sequence to remote target.",
    "Show interrupt sequence to remote target.",
    "Valid value is \"Ctrl-C\", \"BREAK\" or \"BREAK-g\". The default is \"Ctrl-C\".",
    0,
    (int)sub_1E18E0,
    (int **)&dword_488C88,
    (int **)&dword_488C8C);
  sub_535E0(
    "interrupt-on-connect",
    4,
    (int)&dword_489330,
    "Set whether interrupt-sequence is sent to remote target when gdb connects to.",
    "\t\tShow whether interrupt-sequence is sent to remote target when gdb connects to.",
    "\t\tIf set, interrupt sequence is sent to remote target.",
    0,
    0,
    (int **)&dword_488C88,
    (int **)&dword_488C8C);
  sub_5329C(
    "remotewritesize",
    -1,
    (int)sub_1E1B38,
    (int)"Set the maximum number of bytes per memory write packet (deprecated).",
    (int **)&dword_47475C);
  sub_5329C(
    "remotewritesize",
    -1,
    (int)sub_1E3624,
    (int)"Show the maximum number of bytes per memory write packet (deprecated).",
    (int **)&dword_47474C);
  sub_5329C(
    "memory-write-packet-size",
    -1,
    (int)sub_1E1B38,
    (int)"Set the maximum number of bytes per memory-write packet.\n"
         "Specify the number of bytes in a packet or 0 (zero) for the\n"
         "default packet size.  The actual limit is further reduced\n"
         "dependent on the target.  Specify ``fixed'' to disable the\n"
         "further restriction and ``limit'' to enable that restriction.",
    (int **)&dword_488C88);
  sub_5329C(
    "memory-read-packet-size",
    -1,
    (int)sub_1E1B2C,
    (int)"Set the maximum number of bytes per memory-read packet.\n"
         "Specify the number of bytes in a packet or 0 (zero) for the\n"
         "default packet size.  The actual limit is further reduced\n"
         "dependent on the target.  Specify ``fixed'' to disable the\n"
         "further restriction and ``limit'' to enable that restriction.",
    (int **)&dword_488C88);
  sub_5329C(
    "memory-write-packet-size",
    -1,
    (int)sub_1E3624,
    (int)"Show the maximum number of bytes per memory-write packet.",
    (int **)&dword_488C8C);
  sub_5329C(
    "memory-read-packet-size",
    -1,
    (int)sub_1E3618,
    (int)"Show the maximum number of bytes per memory-read packet.",
    (int **)&dword_488C8C);
  sub_5389C(
    "hardware-watchpoint-limit",
    -1,
    (int)&dword_46DB10,
    "Set the maximum number of target hardware watchpoints.",
    "Show the maximum number of target hardware watchpoints.",
    "Specify a negative limit for unlimited.",
    0,
    0,
    (int **)&dword_488C88,
    (int **)&dword_488C8C);
  sub_5389C(
    "hardware-watchpoint-length-limit",
    -1,
    (int)&dword_46DB08,
    "Set the maximum length (in bytes) of a target hardware watchpoint.",
    "Show the maximum length (in bytes) of a target hardware watchpoint.",
    "Specify a negative limit for unlimited.",
    0,
    0,
    (int **)&dword_488C88,
    (int **)&dword_488C8C);
  sub_5389C(
    "hardware-breakpoint-limit",
    -1,
    (int)&dword_46DB0C,
    "Set the maximum number of target hardware breakpoints.",
    "Show the maximum number of target hardware breakpoints.",
    "Specify a negative limit for unlimited.",
    0,
    0,
    (int **)&dword_488C88,
    (int **)&dword_488C8C);
  sub_5395C(
    "remoteaddresssize",
    10,
    (int)&dword_488C90,
    "Set the maximum size of the address (in bits) in a memory packet.",
    "Show the maximum size of the address (in bits) in a memory packet.",
    0,
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  v10 = dword_4886EC;
  do
  {
    v10[2] = 2;
    v10 += 4;
    *(v10 - 1) = 0;
  }
  while ( v10 != &dword_488C6C );
  sub_1E20B4((const char **)&unk_4886FC, "X", "binary-download", 1);
  sub_1E20B4((const char **)dword_4886EC, "vCont", "verbose-resume", 0);
  sub_1E20B4((const char **)&unk_48891C, "QPassSignals", "pass-signals", 0);
  sub_1E20B4((const char **)dword_48892C, "QCatchSyscalls", "catch-syscalls", 0);
  sub_1E20B4((const char **)&unk_48893C, "QProgramSignals", "program-signals", 0);
  sub_1E20B4((const char **)dword_48894C, "QSetWorkingDir", "set-working-dir", 0);
  sub_1E20B4((const char **)&unk_48895C, "QStartupWithShell", "startup-with-shell", 0);
  sub_1E20B4((const char **)&unk_48896C, "QEnvironmentHexEncoded", "environment-hex-encoded", 0);
  sub_1E20B4((const char **)&unk_48897C, "QEnvironmentReset", "environment-reset", 0);
  sub_1E20B4((const char **)&unk_48898C, "QEnvironmentUnset", "environment-unset", 0);
  sub_1E20B4((const char **)&unk_48870C, "qSymbol", "symbol-lookup", 0);
  sub_1E20B4((const char **)dword_48871C, "P", "set-register", 1);
  sub_1E20B4((const char **)dword_48872C, "p", "fetch-register", 1);
  sub_1E20B4((const char **)&unk_48873C, "Z0", "software-breakpoint", 0);
  sub_1E20B4((const char **)&unk_48874C, "Z1", "hardware-breakpoint", 0);
  sub_1E20B4((const char **)&unk_48875C, "Z2", "write-watchpoint", 0);
  sub_1E20B4((const char **)&unk_48876C, "Z3", "read-watchpoint", 0);
  sub_1E20B4((const char **)&unk_48877C, "Z4", "access-watchpoint", 0);
  sub_1E20B4((const char **)dword_48880C, "qXfer:auxv:read", "read-aux-vector", 0);
  sub_1E20B4((const char **)dword_48882C, "qXfer:exec-file:read", "pid-to-exec-file", 0);
  sub_1E20B4((const char **)dword_48881C, "qXfer:features:read", "target-features", 0);
  sub_1E20B4((const char **)dword_48883C, "qXfer:libraries:read", "library-info", 0);
  sub_1E20B4((const char **)dword_48884C, "qXfer:libraries-svr4:read", "library-info-svr4", 0);
  sub_1E20B4((const char **)dword_48885C, "qXfer:memory-map:read", "memory-map", 0);
  sub_1E20B4((const char **)dword_48886C, "qXfer:spu:read", "read-spu-object", 0);
  sub_1E20B4((const char **)&unk_48887C, "qXfer:spu:write", "write-spu-object", 0);
  sub_1E20B4((const char **)dword_48888C, "qXfer:osdata:read", "osdata", 0);
  sub_1E20B4((const char **)dword_48889C, "qXfer:threads:read", "threads", 0);
  sub_1E20B4((const char **)dword_4889FC, "qXfer:siginfo:read", "read-siginfo-object", 0);
  sub_1E20B4((const char **)&unk_488A0C, "qXfer:siginfo:write", "write-siginfo-object", 0);
  sub_1E20B4((const char **)dword_4888BC, "qXfer:traceframe-info:read", "traceframe-info", 0);
  sub_1E20B4((const char **)dword_4888CC, "qXfer:uib:read", "unwind-info-block", 0);
  sub_1E20B4((const char **)dword_4888EC, "qGetTLSAddr", "get-thread-local-storage-address", 0);
  sub_1E20B4((const char **)dword_4888DC, "qGetTIBAddr", "get-thread-information-block-address", 0);
  sub_1E20B4((const char **)&unk_488A8C, (const char *)&word_3D7854, "reverse-continue", 0);
  sub_1E20B4((const char **)&unk_488A9C, (const char *)&word_43308C, "reverse-step", 0);
  sub_1E20B4((const char **)&unk_4888FC, "qSupported", "supported-packets", 0);
  sub_1E20B4((const char **)dword_4889AC, "qSearch:memory", "search-memory", 0);
  sub_1E20B4((const char **)dword_48890C, "qTStatus", "trace-status", 0);
  sub_1E20B4((const char **)&unk_48878C, "vFile:setfs", "hostio-setfs", 0);
  sub_1E20B4((const char **)&unk_48879C, "vFile:open", "hostio-open", 0);
  sub_1E20B4((const char **)&unk_4887AC, "vFile:pread", "hostio-pread", 0);
  sub_1E20B4((const char **)&unk_4887BC, "vFile:pwrite", "hostio-pwrite", 0);
  sub_1E20B4((const char **)&unk_4887CC, "vFile:close", "hostio-close", 0);
  sub_1E20B4((const char **)&unk_4887DC, "vFile:unlink", "hostio-unlink", 0);
  sub_1E20B4((const char **)&unk_4887EC, "vFile:readlink", "hostio-readlink", 0);
  sub_1E20B4((const char **)&unk_4887FC, "vFile:fstat", "hostio-fstat", 0);
  sub_1E20B4((const char **)&unk_4889BC, "vAttach", "attach", 0);
  sub_1E20B4((const char **)dword_4889CC, "vRun", "run", 0);
  sub_1E20B4((const char **)&unk_4889DC, "QStartNoAckMode", "noack", 0);
  sub_1E20B4((const char **)&unk_4889EC, "vKill", "kill", 0);
  sub_1E20B4((const char **)dword_488A1C, "qAttached", "query-attached", 0);
  sub_1E20B4((const char **)&unk_488A2C, "ConditionalTracepoints", "conditional-tracepoints", 0);
  sub_1E20B4((const char **)&unk_488A3C, "ConditionalBreakpoints", "conditional-breakpoints", 0);
  sub_1E20B4((const char **)&unk_488A4C, "BreakpointCommands", "breakpoint-commands", 0);
  sub_1E20B4((const char **)&unk_488A5C, "FastTracepoints", "fast-tracepoints", 0);
  sub_1E20B4((const char **)&unk_488AAC, "TracepointSource", "TracepointSource", 0);
  sub_1E20B4((const char **)&unk_488ABC, "QAllow", "allow", 0);
  sub_1E20B4((const char **)&unk_488A6C, "StaticTracepoints", "static-tracepoints", 0);
  sub_1E20B4((const char **)&unk_488A7C, "InstallInTrace", "install-in-trace", 0);
  sub_1E20B4((const char **)dword_4888AC, "qXfer:statictrace:read", "read-sdata-object", 0);
  sub_1E20B4((const char **)dword_488ACC, "qXfer:fdpic:read", "read-fdpic-loadmap", 0);
  sub_1E20B4((const char **)&unk_488ADC, "QDisableRandomization", "disable-randomization", 0);
  sub_1E20B4((const char **)&unk_488AEC, "QAgent", "agent", 0);
  sub_1E20B4((const char **)&unk_488AFC, "QTBuffer:size", "trace-buffer-size", 0);
  sub_1E20B4((const char **)&dword_488B0C, "Qbtrace:off", "disable-btrace", 0);
  sub_1E20B4((const char **)&dword_488B1C, "Qbtrace:bts", "enable-btrace-bts", 0);
  sub_1E20B4((const char **)&unk_488B2C, "Qbtrace:pt", "enable-btrace-pt", 0);
  sub_1E20B4((const char **)dword_488B3C, "qXfer:btrace", "read-btrace", 0);
  sub_1E20B4((const char **)dword_488BBC, "qXfer:btrace-conf", "read-btrace-conf", 0);
  sub_1E20B4((const char **)&dword_488BCC, "Qbtrace-conf:bts:size", "btrace-conf-bts-size", 0);
  sub_1E20B4((const char **)&unk_488B6C, "multiprocess-feature", "multiprocess-feature", 0);
  sub_1E20B4((const char **)&unk_488BDC, "swbreak-feature", "swbreak-feature", 0);
  sub_1E20B4((const char **)&unk_488BEC, "hwbreak-feature", "hwbreak-feature", 0);
  sub_1E20B4((const char **)&unk_488BFC, "fork-event-feature", "fork-event-feature", 0);
  sub_1E20B4((const char **)&unk_488C0C, "vfork-event-feature", "vfork-event-feature", 0);
  sub_1E20B4((const char **)&dword_488C1C, "Qbtrace-conf:pt:size", "btrace-conf-pt-size", 0);
  sub_1E20B4((const char **)&unk_488C3C, "vContSupported", "verbose-resume-supported", 0);
  sub_1E20B4((const char **)&unk_488C2C, "exec-event-feature", "exec-event-feature", 0);
  sub_1E20B4((const char **)dword_488C4C, "vCtrlC", "ctrl-c", 0);
  sub_1E20B4((const char **)dword_488B5C, "QThreadEvents", "thread-events", 0);
  sub_1E20B4((const char **)&dword_488C4C[4], "N stop reply", "no-resumed-stop-reply", 0);
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    if ( (dword_4886EC[4 * v11] == 0) != v12 )
    {
      v14 = sub_94728(
              (int)"remote.c",
              14397,
              "%s: Assertion `%s' failed.",
              "void _initialize_remote()",
              "excepted == (remote_protocol_packets[i].name == NULL)");
      v70 = dword_4886E4;
      v71 = 0;
      v72 = dword_4886EC;
      v73 = &dword_488C88;
      v74 = &dword_488C8C;
      v75 = &dword_47475C;
      v76 = &dword_47474C;
      v77 = "Specify a negative limit for unlimited.";
      v78 = v15;
      v16 = (int *)HIDWORD(v14);
      v61 = 0;
      v17 = *(_DWORD **)(HIDWORD(v14) + 16);
      v62 = 0;
      v63 = 0;
      v64 = 0;
      ptr = 0;
      v66 = 0;
      v18 = sub_16F67C(v14);
      ((void (__fastcall *)(int))loc_1E2798)(v18);
      v60 = (void **)&v64;
      v59 = (void **)&v61;
      v19 = (const char **)dword_488C94;
      sub_24F890(v16);
      v20 = v16[13];
      sprintf(s, "%08lx", v20);
      if ( v17[4] == 1 )
        v21 = 69;
      else
        v21 = 68;
      sub_93198(v69, 0x800u, "QTDP:%x:%s:%c:%lx:%x", v17[6], s, v21, v17[34], v17[35]);
      v22 = v17[3];
      if ( v22 == 28 )
      {
        if ( ((int (__fastcall *)(int))loc_1E21C0)(55) == 1 )
        {
          if ( !((int (__fastcall *)(int, int, _DWORD))loc_16DA50)(v16[11], v20, 0) )
          {
            sub_94728((int)"remote.c", 12321, "Fast tracepoint not valid during download");
            v57 = (void *)v67[0];
            if ( v67[0] )
            {
              sub_C0988(v67[0]);
              sub_33AC2C(v57);
            }
            sub_1F523C(&v64);
            v56 = sub_1F523C(&v61);
            sub_339024(v56);
          }
          v54 = strlen(v69);
          v55 = sub_10C054(v16[11], v20);
          sub_93198(&v69[v54], 2048 - v54, ":F%x", v55);
        }
        else
        {
          sub_946D8("Target does not support fast tracepoints, downloading %d as regular tracepoint", v17[6]);
        }
      }
      else if ( v22 == 29 )
      {
        if ( ((int (__fastcall *)(int))loc_1E21C0)(56) != 1 )
          sub_94708("Target does not support static tracepoints");
        if ( !off_489BFC() )
          sub_94708("Static tracepoint not valid during download");
        strcat(v69, ":S");
      }
      if ( v16[5] )
      {
        if ( ((int (__fastcall *)(int))loc_1E21C0)(52) == 1 )
        {
          sub_BFEAC(v67, v20, v16[5]);
          v48 = strlen(v69);
          sub_93198(&v69[v48], 2048 - v48, ":X%x,", *(_DWORD *)(v67[0] + 4));
          v49 = strlen(v69);
          v50 = (_DWORD *)v67[0];
          v51 = &v69[v49];
          if ( *(int *)(v67[0] + 4) > 0 )
          {
            v52 = 0;
            do
            {
              v51 = sub_99184(v51, *(_BYTE *)(*v50 + v52));
              v50 = (_DWORD *)v67[0];
              ++v52;
            }
            while ( *(_DWORD *)(v67[0] + 4) > v52 );
          }
          *v51 = 0;
          v53 = (void *)v67[0];
          if ( v67[0] )
          {
            sub_C0988(v67[0]);
            sub_33AC2C(v53);
          }
        }
        else
        {
          sub_946D8("Target does not support conditional tracepoints, ignoring tp %d cond", v17[6]);
        }
      }
      if ( v17[11] || *(_BYTE *)dword_48A914 )
        *(_WORD *)&v69[strlen(v69)] = 45;
      v23 = sub_1E7E14(v69);
      sub_1E9910(v23);
      if ( !strcmp(*v19, "OK") )
      {
        for ( i = v61; v62 != i; i += 6 )
        {
          sub_258BFC(0);
          if ( v62 == i )
          {
            if ( v64 == ptr )
              v26 = 0;
            else
              v26 = 45;
          }
          else
          {
            v26 = 45;
          }
          sub_93198(v69, 0x800u, "QTDP:-%x:%s:%s%c", v17[6], s, *i, v26);
          v25 = sub_1E7E14(v69);
          sub_1E9910(v25);
          if ( strcmp(*v19, "OK") )
            sub_94708("Error on target while setting tracepoints.");
        }
        for ( j = v64; ptr != j; j += 6 )
        {
          sub_258BFC(0);
          if ( ptr == j )
            v28 = (__int16 *)"";
          else
            v28 = &word_3C148C;
          if ( v64 == j )
            v29 = "S";
          else
            v29 = "";
          sub_93198(v69, 0x800u, "QTDP:-%x:%s:%s%s%s", v17[6], s, v29, *j, v28, v59, v60);
          v30 = sub_1E7E14(v69);
          sub_1E9910(v30);
          if ( strcmp(*v19, "OK") )
            sub_94708("Error on target while setting tracepoints.");
        }
        if ( ((int (__fastcall *)(int))loc_1E21C0)(60) == 1 )
        {
          v31 = v17[19];
          v32 = v17[6];
          v33 = v16[13];
          if ( v31 )
          {
            strcpy(v69, "QTDPsrc:");
            v34 = (char *)((int (__fastcall *)(int))loc_19D250)(v31);
            v35 = strlen(v69);
            sub_24B4F8(v32, (int)&v69[v35], v33, 0, "at", v34, (int)&v69[v35], 2048 - v35);
            v36 = sub_1E7E14(v69);
            sub_1E9910(v36);
            if ( strcmp(*v19, "OK") )
              sub_946D8("Target does not support source download.");
            v32 = v17[6];
            v33 = v16[13];
          }
          if ( v17[25] )
          {
            v58 = (char *)v17[25];
            strcpy(v69, "QTDPsrc:");
            sub_24B4F8(v32, *(int *)"src:", v33, 0, "cond", v58, (int)&v69[8], 2040);
            v37 = sub_1E7E14(v69);
            sub_1E9910(v37);
            if ( strcmp(*v19, "OK") )
              sub_946D8("Target does not support source download.");
            v33 = v16[13];
            v32 = v17[6];
          }
          v38 = (int **)sub_CD294((int)v17);
          sub_1EADA0(v32, v39, v33, 0, v38);
        }
        v40 = (char *)v64;
        v41 = (char *)ptr;
        if ( v64 != ptr )
        {
          v42 = (char *)(v64 + 2);
          do
          {
            v43 = (char *)*((_DWORD *)v42 - 2);
            if ( v43 != v42 )
              sub_339E8C(v43);
            v40 += 24;
            v42 += 24;
          }
          while ( v41 != v40 );
          v41 = (char *)v64;
        }
        if ( v41 )
          sub_339E8C(v41);
        v44 = v61;
        v45 = (const char **)v62;
        if ( v61 != v62 )
        {
          v46 = (char *)(v61 + 2);
          do
          {
            v47 = (char *)*((_DWORD *)v46 - 2);
            if ( v47 != v46 )
              sub_339E8C(v47);
            v44 += 6;
            v46 += 24;
          }
          while ( v45 != v44 );
          v45 = v61;
        }
        if ( v45 )
          sub_339E8C(v45);
        __asm { POP             {R4-R11,PC} }
      }
      sub_94708("Target does not support tracepoints.");
    }
    if ( ++v11 == 88 )
      break;
    switch ( v11 )
    {
      case '+':
      case 'F':
      case 'I':
      case 'J':
      case 'K':
      case 'L':
        v12 = 1;
        break;
      default:
        v12 = 0;
        break;
    }
  }
  sub_53578(
    "Z-packet",
    10,
    (int)&dword_4886E8,
    "Set use of remote protocol `Z' packets",
    "Show use of remote protocol `Z' packets ",
    "When set, GDB will attempt to use the remote breakpoint and watchpoint\npackets.",
    (int)sub_1E0E20,
    (int)&loc_1E24E4,
    (int **)&dword_488C88,
    (int **)&dword_488C8C);
  sub_53420(
    "remote",
    3,
    (int)sub_1E199C,
    (int)"Manipulate files on the remote system\nTransfer files to and from the remote target system.",
    &dword_488C84,
    (int)"remote ",
    0,
    v84);
  sub_5329C("put", 3, (int)sub_1F0C14, (int)"Copy a local file to the remote system.", (int **)&dword_488C84);
  sub_5329C("get", 3, (int)sub_1F0E9C, (int)"Copy a remote file to the local system.", (int **)&dword_488C84);
  sub_5329C("delete", 3, (int)sub_1F0FE0, (int)"Delete a remote file.", (int **)&dword_488C84);
  sub_53708(
    "exec-file",
    3,
    (int)&dword_488C7C,
    "Set the remote pathname for \"run\"",
    "Show the remote pathname for \"run\"",
    0,
    (int)&loc_1E3630,
    (int)sub_1E18C8,
    (int **)&dword_488C88,
    (int **)&dword_488C8C);
  sub_535E0(
    "range-stepping",
    0,
    (int)&dword_46DB2C,
    "Enable or disable range stepping.",
    "Show whether target-assisted range stepping is enabled.",
    "If on, and the target supports it, when stepping a source line, GDB\n"
    "tells the target to step the corresponding range of addresses itself instead\n"
    "of issuing multiple single-steps.  This speeds up source level\n"
    "stepping.  If off, GDB always issues single-steps, even if range\n"
    "stepping is supported by the target.  The default is on.",
    (int)sub_1E8010,
    (int)&loc_1E18B8,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_1F7618(dword_488C88, dword_488C8C);
  sub_98F70(&v89, 42000, -1, 1);
  dword_488C70[0] = v89;
  dword_488C70[1] = v90;
  dword_488C70[2] = v91;
  sub_98F70(&v89, 42000, -2, 1);
  unk_489334 = v89;
  unk_489338 = v90;
  unk_48933C = v91;
  sub_98F70(&v89, 42000, 0, 1);
  dword_488CF4[0] = v89;
  dword_488CF4[1] = v90;
  dword_488CF4[2] = v91;
  return v89;
}

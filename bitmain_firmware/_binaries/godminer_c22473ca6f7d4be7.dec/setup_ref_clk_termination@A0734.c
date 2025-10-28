int __fastcall setup_ref_clk_termination(int a1)
{
  int v2; // r6
  char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r2
  int v6; // r1
  _DWORD v8[7]; // [sp+28h] [bp-20h] BYREF
  int v9; // [sp+44h] [bp-4h]
  char v10[4096]; // [sp+48h] [bp+0h] BYREF

  LOWORD(v2) = -24664;
  V_LOCK();
  LOWORD(v3) = -7948;
  HIWORD(v3) = (unsigned int)&loc_12D594 >> 16;
  HIWORD(v2) = (unsigned int)"_lane" >> 16;
  V_INT((int)v8, v3, *(int *)(a1 + 140));
  LOWORD(v4) = -22412;
  HIWORD(v4) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v4, v2 - 2064);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -25512;
  HIWORD(v6) = (unsigned int)"one" >> 16;
  zlog(*v5, v6, 154, v2 - 2036, 25, 12182, 60, v10);
  sub_5C100(a1, 81, 256);
  usleep(0x2710u);
  sub_5C158(a1, 1u, 81, 138);
  usleep(0x2710u);
  sub_5C158(a1, 5u, 81, 138);
  usleep(0x2710u);
  sub_5C158(a1, 9u, 81, 138);
  usleep(0x2710u);
  sub_5C158(a1, 0xDu, 81, 138);
  usleep(0x2710u);
  sub_5C158(a1, 2u, 81, 6);
  usleep(0x2710u);
  sub_5C158(a1, 6u, 81, 6);
  usleep(0x2710u);
  sub_5C158(a1, 0xAu, 81, 6);
  usleep(0x2710u);
  sub_5C158(a1, 0xEu, 81, 6);
  usleep(0x2710u);
  sub_5C100(a1, 84, 9586980);
  usleep(0x2710u);
  sub_5C100(a1, 92, 9586980);
  usleep(0x2710u);
  return 0;
}

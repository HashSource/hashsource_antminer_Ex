int __fastcall eeprom_fmt_info_init_0(_BYTE *a1, int a2)
{
  int v2; // r4
  int v3; // r0
  _BYTE v5[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = 0;
  a1[4] = 20;
  a1[5] = 22;
  a1[3] = 3;
  a1[6] = 35;
  a1[7] = 36;
  *a1 = 0;
  a1[1] = 1;
  a1[2] = 2;
  a1[33] = 1;
  a1[34] = 1;
  a1[35] = 1;
  a1[37] = 2;
  if ( (unsigned int)(a2 - 3) > 1 )
  {
    a1[39] = 1;
    a1[36] = 17;
    a1[38] = 13;
  }
  else
  {
    v2 = 1;
    a1[39] = 1;
    qmemcpy(a1 + 8, "-.2345678:<>@ABCDLQRVXZ", 23);
    a1[31] = -38;
    a1[32] = -31;
    a1[36] = 17;
    a1[38] = 13;
    a1[40] = 9;
  }
  a1[41] = 1;
  a1[43] = 1;
  a1[44] = 1;
  a1[45] = 1;
  a1[46] = 1;
  a1[47] = 1;
  a1[48] = 1;
  a1[53] = 1;
  a1[54] = 1;
  a1[55] = 1;
  a1[56] = 1;
  a1[59] = 1;
  a1[65] = 1;
  a1[42] = 4;
  a1[60] = 4;
  a1[49] = 2;
  a1[50] = 2;
  a1[51] = 2;
  a1[52] = 2;
  a1[61] = 2;
  a1[62] = 2;
  a1[57] = 8;
  a1[58] = 5;
  a1[63] = 0x80;
  a1[64] = 7;
  if ( !v2 )
  {
    V_LOCK(*(_DWORD *)"supported\n");
    v3 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "init_eeprom_fmt_info",
      20,
      392,
      100,
      v5);
  }
  return v2;
}

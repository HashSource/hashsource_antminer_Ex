int __fastcall init_eeprom_fmt_info(_BYTE *a1, int a2)
{
  int v2; // r4
  char v4[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  a1[3] = 3;
  v2 = 0;
  a1[5] = 22;
  a1[6] = 35;
  a1[4] = 20;
  a1[7] = 36;
  *a1 = 0;
  a1[1] = 1;
  a1[2] = 2;
  if ( a2 == 3 )
  {
    a1[33] = 1;
    a1[34] = 1;
    v2 = 1;
    a1[35] = 1;
    a1[37] = 2;
    a1[39] = 1;
    qmemcpy(a1 + 8, "-.2345678:<>@ABCDLMQ", 20);
    a1[36] = 17;
    a1[38] = 13;
  }
  else
  {
    a1[33] = 1;
    a1[34] = 1;
    a1[35] = 1;
    a1[37] = 2;
    a1[39] = 1;
    a1[36] = 17;
    a1[38] = 13;
    if ( a2 != 4 )
      goto LABEL_3;
  }
  a1[40] = 9;
LABEL_3:
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
  a1[58] = 1;
  a1[63] = 1;
  a1[42] = 4;
  a1[49] = 2;
  a1[50] = 2;
  a1[51] = 2;
  a1[52] = 2;
  a1[59] = 2;
  a1[61] = 2;
  a1[57] = 8;
  a1[60] = 0x80;
  a1[62] = 3;
  if ( !v2 )
  {
    strcpy(v4, "This FMT is not supported");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "init_eeprom_fmt_info",
      20,
      462,
      100,
      v5);
  }
  return v2;
}

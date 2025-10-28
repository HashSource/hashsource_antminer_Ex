int __fastcall sub_A31B4(int a1, int a2)
{
  int v2; // r4
  int v3; // r0
  _BYTE v5[4100]; // [sp+810h] [bp-1004h] BYREF

  *(_QWORD *)a1 = 0x2423161403020100LL;
  if ( a2 == 3 )
  {
    qmemcpy((void *)(a1 + 8), "-.2345678:<>@ABCDLMQ", 20);
    v2 = 1;
    *(_QWORD *)(a1 + 28) = 0x9010D0211010101LL;
  }
  else
  {
    v2 = 0;
    *(_DWORD *)(a1 + 28) = 285278465;
    *(_WORD *)(a1 + 32) = 3330;
    *(_BYTE *)(a1 + 34) = 1;
  }
  *(_DWORD *)(a1 + 36) = 16843777;
  *(_DWORD *)(a1 + 40) = 16843009;
  *(_QWORD *)(a1 + 44) = 0x101010102020202LL;
  *(_WORD *)(a1 + 52) = 264;
  if ( !v2 )
  {
    V_LOCK(*(_DWORD *)"supported");
    v3 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "init_eeprom_fmt_info",
      20,
      434,
      100,
      v5);
  }
  return v2;
}

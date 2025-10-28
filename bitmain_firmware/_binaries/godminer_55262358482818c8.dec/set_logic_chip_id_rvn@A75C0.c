int __fastcall set_logic_chip_id_rvn(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r1
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

  LOWORD(v2) = 896;
  V_LOCK();
  LOWORD(v3) = 23936;
  HIWORD(v3) = (unsigned int)"p" >> 16;
  HIWORD(v2) = (unsigned int)"x reg:%02x, core_id:%d" >> 16;
  V_INT((int)v6, v3, *(int *)(a1 + 248));
  LOWORD(a1) = -17388;
  HIWORD(a1) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, a1, v2 + 1412);
  V_UNLOCK();
  LOWORD(v4) = 5292;
  HIWORD(v4) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v4, 174, v2 + 1436, 21, 501, 60, v8);
  return 0;
}

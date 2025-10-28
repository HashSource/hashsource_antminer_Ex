int __fastcall clear_dag_mode_rvn(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  char v9[4100]; // [sp+48h] [bp-1004h] BYREF

  LOWORD(v2) = 896;
  V_LOCK();
  LOWORD(v3) = 23936;
  HIWORD(v3) = (unsigned int)"p" >> 16;
  HIWORD(v2) = (unsigned int)"x reg:%02x, core_id:%d" >> 16;
  V_INT((int)v7, v3, *(int *)(a1 + 248));
  LOWORD(v4) = -17388;
  HIWORD(v4) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v4, v2 + 1124);
  V_UNLOCK();
  LOWORD(v5) = 5292;
  HIWORD(v5) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v5, 174, v2 + 1144, 18, 316, 60, v9);
  sub_A3FA8(a1, 147, 0);
  usleep(0x2710u);
  return 0;
}

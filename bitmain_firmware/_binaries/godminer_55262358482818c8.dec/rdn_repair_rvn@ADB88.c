int __fastcall rdn_repair_rvn(int a1, int a2)
{
  int v4; // r4
  int v5; // r3
  int v6; // r5
  int v7; // r1
  int v8; // t1
  char v10[4096]; // [sp+10h] [bp-1000h] BYREF

  v4 = a2 - 4;
  V_LOCK();
  LOWORD(v5) = -17388;
  HIWORD(v5) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  v6 = a2 + 204;
  logfmt_raw(v10, 0x1000u, 0, v5, "rdn_repair_rvn");
  V_UNLOCK();
  LOWORD(v7) = 5292;
  HIWORD(v7) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v7, 174, "rdn_repair_rvn", 14, 3312, 40, v10);
  sub_A3FA8(a1, 222, 270532609);
  usleep(0x2710u);
  do
  {
    v8 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    sub_A3FA8(a1, 223, v8);
  }
  while ( v4 != v6 );
  usleep(0x2710u);
  sub_A3FA8(a1, 222, 0);
  return 0;
}

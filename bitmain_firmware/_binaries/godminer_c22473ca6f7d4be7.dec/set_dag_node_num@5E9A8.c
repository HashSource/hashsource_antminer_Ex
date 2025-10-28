int __fastcall set_dag_node_num(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r1
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = 32688;
  HIWORD(v2) = (unsigned int)&unk_1372E0 >> 16;
  V_LOCK();
  LOWORD(v5) = -25128;
  HIWORD(v5) = (unsigned int)"op_one_lane" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v2 + 1008, a2);
  V_UNLOCK();
  LOWORD(v6) = -14512;
  HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v7) = -25512;
  HIWORD(v7) = (unsigned int)"one" >> 16;
  zlog(*v6, v7, 154, v2 + 1028, 16, 334, 20, v9);
  sub_5C100(a1, 11, a2);
  usleep(0x2710u);
  return 0;
}

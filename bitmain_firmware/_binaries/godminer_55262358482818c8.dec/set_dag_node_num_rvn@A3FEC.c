int __fastcall set_dag_node_num_rvn(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v8; // r3
  int v9; // r1
  int v11; // [sp+4h] [bp-100Ch]
  char v12[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v4) = 896;
  HIWORD(v4) = (unsigned int)"x reg:%02x, core_id:%d" >> 16;
  V_LOCK();
  LOWORD(v8) = 5276;
  HIWORD(v8) = (unsigned int)algn_171484 >> 16;
  logfmt_raw(v12, 0x1000u, 0, v8, v4, v11, a3, a4);
  V_UNLOCK();
  LOWORD(v9) = 5292;
  HIWORD(v9) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v9, 174, v4 + 24, 20, 2131, 60, v12);
  sub_A3FA8(a1, 27, a3);
  usleep(0x3E8u);
  return 0;
}

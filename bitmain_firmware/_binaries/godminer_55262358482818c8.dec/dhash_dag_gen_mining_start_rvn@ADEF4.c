void __fastcall __noreturn dhash_dag_gen_mining_start_rvn(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 9080;
  HIWORD(v1) = (unsigned int)"misc_ctrl_ZEC_1746" >> 16;
  V_LOCK();
  LOWORD(v3) = -17388;
  HIWORD(v3) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v5, 0x1000u, 0, v3, v1 - 3920);
  V_UNLOCK();
  LOWORD(v4) = 5292;
  HIWORD(v4) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v4, 174, v1 - 3888, 30, 3679, 40, v5);
  dram_bist_rvn(a1);
}

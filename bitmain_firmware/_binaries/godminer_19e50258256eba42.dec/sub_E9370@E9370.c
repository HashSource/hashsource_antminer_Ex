int __fastcall sub_E9370(int a1, int a2)
{
  _BYTE v5[16]; // [sp+1Ch] [bp-1010h] BYREF
  float v6; // [sp+101Ch] [bp-10h]
  float v7; // [sp+1020h] [bp-Ch]
  int v8; // [sp+1024h] [bp-8h]

  v8 = 1;
  v6 = 50.0;
  v7 = 50.0;
  do
  {
    sub_DF0A4(a1, 0);
    usleep(0x61A8u);
    v7 = v6 + (float)(a2 * v8++);
  }
  while ( v7 <= *(float *)(a1 + 1020) );
  v7 = v7 - (float)a2;
  if ( v7 < *(float *)(a1 + 1020) )
  {
    sub_DF0A4(a1, 0);
    usleep(0x61A8u);
    v7 = *(float *)(a1 + 1020);
  }
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "Set chip final freq=%.2f", v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "set_working_freq_by_steps",
    25,
    460,
    40,
    v5);
  return 0;
}

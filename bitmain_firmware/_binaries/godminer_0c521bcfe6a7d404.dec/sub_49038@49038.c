int __fastcall sub_49038(int a1, int a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r0
  _BYTE v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 >= a4 || dword_171440 > 120 )
  {
    v4 = 0;
    dword_171440 = 0;
  }
  else if ( dword_171440 )
  {
    if ( a2 )
      v4 = 20;
    else
      v4 = 40;
    ++dword_171440;
  }
  else
  {
    v4 = 0;
  }
  V_LOCK(a1);
  v5 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/dash_1766/machine_runtime_dash_1766.c",
    184,
    "calc_voltage_bias_dash_1766",
    27,
    72,
    20,
    v7);
  return v4;
}

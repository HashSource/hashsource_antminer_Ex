unsigned int __fastcall sub_46A88(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r0
  unsigned int v9; // r6
  int v10; // r0
  _BYTE v12[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v7);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
         178,
         "calc_voltage_bias_ltc_1489",
         26,
         13,
         40,
         v12);
  if ( a3 >= a4 )
  {
    dword_16344C = 0;
    goto LABEL_10;
  }
  if ( dword_16344C > 120 )
  {
    dword_16344C = 0;
    goto LABEL_10;
  }
  if ( !dword_16344C )
  {
LABEL_10:
    v9 = 0;
    goto LABEL_11;
  }
  v8 = dword_16344C + 1;
  if ( !a2 )
  {
LABEL_8:
    v9 = 20;
    dword_16344C = v8;
    goto LABEL_11;
  }
  ++dword_16344C;
  v9 = 10 * ((a4 - a3 + 10) / 5u);
  if ( a2 <= 0 && v8 )
  {
    ++v8;
    goto LABEL_8;
  }
LABEL_11:
  V_LOCK(v8);
  v10 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    178,
    "calc_voltage_bias_ltc_1489",
    26,
    33,
    40,
    v12);
  return v9;
}

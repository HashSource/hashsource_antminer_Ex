int __fastcall sub_495FC(int a1, int a2)
{
  int v2; // r4
  int all_created_runtime; // r11
  int v4; // r0
  int v5; // r0
  __int16 v6; // r3
  int v7; // r4
  int v8; // r0
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v13; // r0
  unsigned __int16 v14; // [sp+34h] [bp-1058h]
  int v15; // [sp+38h] [bp-1054h]
  int v16; // [sp+44h] [bp-1048h] BYREF
  _BYTE v17[32]; // [sp+48h] [bp-1044h] BYREF
  int v18; // [sp+68h] [bp-1024h] BYREF
  _BYTE v19[4100]; // [sp+88h] [bp-1004h] BYREF

  v2 = a2 + 1150;
  all_created_runtime = get_all_created_runtime(&v16);
  V_LOCK(all_created_runtime);
  v4 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
         178,
         "set_voltage_zec",
         15,
         21,
         40,
         v19);
  if ( v2 > 2500 )
  {
    v14 = 2500;
LABEL_16:
    V_LOCK(v5);
    v13 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
      178,
      "set_voltage_zec",
      15,
      24,
      80,
      v19);
    goto LABEL_5;
  }
  v6 = 2350;
  if ( v2 >= 2350 )
    v6 = v2;
  v14 = v6;
  if ( v2 <= 2349 )
    goto LABEL_16;
LABEL_5:
  if ( v16 <= 0 )
    return 0;
  v7 = 0;
  v15 = 0;
  do
  {
    v9 = 3;
    do
    {
      v10 = set_chain_mps_voltage(*(_DWORD *)(*(_DWORD *)(all_created_runtime + 4 * v7) + 212), v14);
      if ( !v10 )
      {
        V_LOCK(0);
        V_INT((int)&v18, "chain");
        v8 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
          178,
          "set_voltage_zec",
          15,
          35,
          60,
          v19);
        goto LABEL_8;
      }
      V_LOCK(v10);
      V_INT((int)v17, "chain");
      v11 = logfmt_raw((int)v19, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        178,
        "set_voltage_zec",
        15,
        32,
        100,
        v19);
      --v9;
    }
    while ( v9 );
    v15 = 19;
LABEL_8:
    ++v7;
  }
  while ( v16 > v7 );
  return v15;
}

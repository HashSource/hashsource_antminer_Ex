int __fastcall set_chain_mps_voltage(int a1, unsigned int a2)
{
  int v2; // r4
  int v4; // r0
  int chain_mps_voltage; // r0
  int v6; // r0
  int v7; // r0
  unsigned int v9; // r5
  int v10; // r0
  unsigned __int16 v11; // [sp+16h] [bp-100Eh] BYREF
  _WORD src[4]; // [sp+18h] [bp-100Ch] BYREF
  _BYTE v13[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = 2500;
  if ( a2 < 0x92E )
    a2 = 2350;
  if ( a2 < 0x9C4 )
    v2 = a2;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/drv_pic/mps2973.c",
    163,
    "set_chain_mps_voltage",
    21,
    205,
    40,
    v13);
  chain_mps_voltage = get_chain_mps_voltage(a1, &v11);
  if ( v11 == v2 )
  {
    V_LOCK(chain_mps_voltage);
    v10 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/drv_pic/mps2973.c",
      163,
      "set_chain_mps_voltage",
      21,
      210,
      20,
      v13);
    return 0;
  }
  else
  {
    v6 = sub_9ABE8(a1, 0);
    if ( v6
      && (v9 = (v2 - 490) / 0xAu, src[0] = (unsigned __int8)v9, (v6 = sub_9AB88(a1, 33, src, 2u)) != 0)
      && (v6 = sub_9ABE8(a1, 2)) != 0
      && (src[0] = (32 * v9) | 0xC, (v6 = sub_9AB88(a1, 13, src, 2u)) != 0) )
    {
      return 0;
    }
    else
    {
      V_LOCK(v6);
      v7 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/drv_pic/mps2973.c",
        163,
        "set_chain_mps_voltage",
        21,
        247,
        100,
        v13);
      return 1;
    }
  }
}

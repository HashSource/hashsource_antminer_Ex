int __fastcall set_chain_mps_voltage(int a1, unsigned int a2)
{
  unsigned int v2; // r4
  int v4; // r7
  int v5; // r0
  int chain_mps_voltage; // r0
  int v7; // r0
  int v8; // r0
  int v10; // r4
  int v11; // r0
  unsigned __int16 v12; // [sp+16h] [bp-100Eh] BYREF
  _WORD src[4]; // [sp+18h] [bp-100Ch] BYREF
  _BYTE v14[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = a2;
  if ( a2 - 2350 > 0x12C )
  {
    if ( a2 <= 0xA59 )
      v4 = 2350;
    else
      v4 = 2650;
    V_LOCK(a1);
    v5 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v5);
    v2 = v4;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      167,
      "set_chain_mps_voltage",
      21,
      207,
      40,
      v14);
  }
  chain_mps_voltage = get_chain_mps_voltage(a1, &v12);
  if ( v12 == v2 )
  {
    V_LOCK(chain_mps_voltage);
    v11 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      167,
      "set_chain_mps_voltage",
      21,
      213,
      20,
      v14);
    return 0;
  }
  else
  {
    v7 = sub_A60A0(a1, 0);
    if ( v7
      && (v10 = (int)(v2 - 490) / 10, src[0] = v10 & 0x1FF, (v7 = sub_A6040(a1, 33, src, 2u)) != 0)
      && (v7 = sub_A60A0(a1, 2)) != 0
      && (src[0] = (32 * v10) & 0x3FE0 | 0xC, (v7 = sub_A6040(a1, 13, src, 2u)) != 0) )
    {
      return 0;
    }
    else
    {
      V_LOCK(v7);
      v8 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
        167,
        "set_chain_mps_voltage",
        21,
        250,
        100,
        v14);
      return 1;
    }
  }
}

int __fastcall set_mps_rail1_voltage(int a1, char a2, unsigned __int16 a3)
{
  unsigned __int16 v3; // r3
  char v4; // r0
  char v5; // r0
  unsigned __int16 v7; // [sp+10h] [bp-101Ch]
  _BYTE v10[20]; // [sp+18h] [bp-1014h] BYREF
  _WORD v11[5]; // [sp+1018h] [bp-14h] BYREF
  __int16 v12; // [sp+1022h] [bp-Ah]
  int v13; // [sp+1024h] [bp-8h]

  v7 = a3;
  v13 = 0;
  if ( a3 > 0x320u || a3 < 0x258u )
  {
    if ( a3 >= 0x320u )
    {
      v3 = 800;
    }
    else
    {
      v3 = a3;
      if ( a3 < 0x258u )
        v3 = 600;
    }
    v7 = v3;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "the mps rail2 voltage value-%d is out of the allowed range(%d-%d)", v7, 600, 800);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "set_mps_rail1_voltage",
      21,
      826,
      80,
      v10);
  }
  v4 = sub_14C444(a2);
  if ( !sub_14CD54(a1, v4, 0, v11, 1u) )
  {
    ++v13;
  }
  else
  {
    v12 = (v7 / 5u - 49) & 0x1FF;
    v11[0] = v12;
    v5 = sub_14C444(a2);
    if ( !sub_14CD54(a1, v5, 33, v11, 2u) )
      ++v13;
  }
  if ( v13 > 0 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "set_mps_rail1_voltage error, fd %d, which %d", a1, (unsigned __int8)a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "set_mps_rail1_voltage",
      21,
      856,
      100,
      v10);
  }
  return v13;
}

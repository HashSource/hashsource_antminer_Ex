int __fastcall set_mps_rail2_voltage(int a1, char a2, unsigned __int16 a3)
{
  unsigned __int16 v3; // r3
  char v4; // r0
  unsigned __int16 v6; // [sp+10h] [bp-1024h]
  _BYTE v9[24]; // [sp+1Ch] [bp-1018h] BYREF
  unsigned __int16 v10; // [sp+101Eh] [bp-16h] BYREF
  _WORD v11[5]; // [sp+1020h] [bp-14h] BYREF
  __int16 v12; // [sp+102Ah] [bp-Ah]
  int v13; // [sp+102Ch] [bp-8h]

  v6 = a3;
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
    v6 = v3;
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "the mps rail2 voltage value-%d is out of the allowed range(%d-%d)", v6, 600, 800);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "set_mps_rail2_voltage",
      21,
      913,
      80,
      v9);
  }
  if ( get_mps_rail2_voltage(a1, a2, &v10) )
  {
    ++v13;
  }
  else if ( v6 == v10 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "mps rail2 voltage is already set to %d", v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "set_mps_rail2_voltage",
      21,
      924,
      40,
      v9);
  }
  else
  {
    v12 = (v6 / 5u - 49) & 0x1FF;
    v11[0] = v12;
    v4 = sub_14C444(a2);
    if ( !sub_14CD54(a1, v4, 33, v11, 2u) )
      ++v13;
  }
  if ( v13 > 0 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "set_mps_rail2_voltage error, fd %d, which %d", a1, (unsigned __int8)a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "set_mps_rail2_voltage",
      21,
      937,
      100,
      v9);
  }
  return v13;
}

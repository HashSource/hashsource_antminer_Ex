int __fastcall set_mps_rail2_icc_max(int a1, char a2, unsigned __int16 a3)
{
  char v3; // r0
  _BYTE v8[20]; // [sp+18h] [bp-1014h] BYREF
  unsigned __int16 v9; // [sp+101Ah] [bp-12h] BYREF
  unsigned __int16 v10; // [sp+101Ch] [bp-10h] BYREF
  int v11; // [sp+1024h] [bp-8h]

  v11 = 0;
  do
  {
    if ( get_mps_rail2_icc_max(a1, a2, &v9) )
    {
      ++v11;
      goto LABEL_8;
    }
    if ( a3 == v9 )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "mps icc max r2 is already set to %d", a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
        175,
        "set_mps_rail2_icc_max",
        21,
        729,
        40,
        v8);
      goto LABEL_8;
    }
    v10 = a3;
    v3 = sub_14C444(a2);
  }
  while ( sub_14CD54(a1, v3, 18, &v10, 2u) );
  ++v11;
LABEL_8:
  if ( v11 > 0 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "set_mps_icc_max_r2 error, fd %d, which %d", a1, (unsigned __int8)a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "set_mps_rail2_icc_max",
      21,
      742,
      100,
      v8);
  }
  return v11;
}

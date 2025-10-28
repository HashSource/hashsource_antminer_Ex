int __fastcall set_mps_debug(int a1, char a2, unsigned __int8 a3)
{
  char v3; // r0
  _BYTE v8[20]; // [sp+18h] [bp-1014h] BYREF
  unsigned __int8 v9; // [sp+101Bh] [bp-11h] BYREF
  _BYTE v10[8]; // [sp+101Ch] [bp-10h] BYREF
  int v11; // [sp+1024h] [bp-8h]

  v11 = 0;
  do
  {
    if ( get_mps_debug(a1, a2, &v9) )
    {
      ++v11;
      goto LABEL_8;
    }
    if ( a3 == v9 )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "mps rail1 voltage is already set to %d", a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
        175,
        "set_mps_debug",
        13,
        1177,
        40,
        v8);
      goto LABEL_8;
    }
    v10[0] = 0;
    v3 = sub_14C444(a2);
  }
  while ( sub_14CD54(a1, v3, 1, v10, 1u) );
  ++v11;
LABEL_8:
  if ( v11 > 0 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "set_mps_debug chain %d, chip %d error", a1, (unsigned __int8)a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "set_mps_debug",
      13,
      1189,
      100,
      v8);
  }
  return v11;
}

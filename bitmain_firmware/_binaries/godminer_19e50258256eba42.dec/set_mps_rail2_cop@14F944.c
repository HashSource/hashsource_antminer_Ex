int __fastcall set_mps_rail2_cop(int a1, char a2, unsigned __int16 a3, unsigned __int8 a4)
{
  char v4; // r0
  _BYTE v10[24]; // [sp+1Ch] [bp-1018h] BYREF
  unsigned __int16 v11; // [sp+101Eh] [bp-16h] BYREF
  _BYTE v12[12]; // [sp+1020h] [bp-14h] BYREF
  int v13; // [sp+102Ch] [bp-8h]

  v13 = 0;
  do
  {
    if ( get_mps_rail2_cop(a1, a2, &v11) )
    {
      ++v13;
      goto LABEL_8;
    }
    v12[11] = v11 & 0x7F;
    if ( a3 == (v11 & 0x7F) )
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "mps cop r2 is already set to %d", a4 * a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
        175,
        "set_mps_rail2_cop",
        17,
        797,
        40,
        v10);
      goto LABEL_8;
    }
    a3 &= 0x7Fu;
    v12[0] &= 0x80u;
    v12[0] |= a3;
    v12[1] = HIBYTE(v11);
    v4 = sub_14C444(a2);
  }
  while ( sub_14CD54(a1, v4, 95, v12, 2u) );
  ++v13;
LABEL_8:
  if ( v13 > 0 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "set_mps_cop_r2 error, fd %d, which %d", a1, (unsigned __int8)a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "set_mps_rail2_cop",
      17,
      812,
      100,
      v10);
  }
  return v13;
}

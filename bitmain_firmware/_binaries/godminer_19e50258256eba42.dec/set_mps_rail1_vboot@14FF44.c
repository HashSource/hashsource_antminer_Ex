int __fastcall set_mps_rail1_vboot(int a1, char a2, unsigned __int16 a3)
{
  unsigned __int16 v3; // r3
  char v4; // r0
  unsigned __int16 v6; // [sp+10h] [bp-1024h]
  _BYTE v9[24]; // [sp+1Ch] [bp-1018h] BYREF
  unsigned __int16 v10; // [sp+101Eh] [bp-16h] BYREF
  unsigned __int16 v11[4]; // [sp+1020h] [bp-14h] BYREF
  __int16 v12; // [sp+1028h] [bp-Ch]
  __int16 v13; // [sp+102Ah] [bp-Ah]
  int v14; // [sp+102Ch] [bp-8h]

  v6 = a3;
  v14 = 0;
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
      "set_mps_rail1_vboot",
      19,
      870,
      80,
      v9);
  }
  do
  {
    if ( get_mps_rail1_vboot(a1, a2, &v10) )
    {
      ++v14;
      goto LABEL_16;
    }
    v13 = (v10 >> 5) & 0x1FF;
    v12 = (v6 / 5u - 49) & 0x1FF;
    if ( v13 == v12 )
    {
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "mps rail1 vboot is already set to %u", v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
        175,
        "set_mps_rail1_vboot",
        19,
        884,
        40,
        v9);
      goto LABEL_16;
    }
    v10 &= 0xC01Fu;
    v10 |= (32 * v12) & 0x3FE0;
    v11[0] = v10;
    v4 = sub_14C444(a2);
  }
  while ( sub_14CD54(a1, v4, 13, v11, 2u) );
  ++v14;
LABEL_16:
  if ( v14 > 0 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "set_mps_rail1_vboot error, fd %d, which %d", a1, (unsigned __int8)a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "set_mps_rail1_vboot",
      19,
      899,
      100,
      v9);
  }
  return v14;
}

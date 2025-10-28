int __fastcall ajust_retry_param(int a1, char a2, int a3)
{
  int v6; // r0
  int v8; // r3
  unsigned __int8 v9; // r2
  int v10; // [sp+28h] [bp-1024h] BYREF
  _BYTE v11[4]; // [sp+48h] [bp-1004h] BYREF
  unsigned int v12; // [sp+4Ch] [bp-1000h]

  V_LOCK(a1);
  V_INT((int)&v10, "chain");
  v6 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "ajust_retry_param",
    17,
    8649,
    60,
    v11);
  if ( !serdes_apb_read_back_1_chip(a1, a2, a3, 32803, (int)v11) )
    return 0;
  if ( v12 > 0xFA )
  {
    serdes_apb_write_1_chip(a1, a2, a3, 32769, -4190209);
    v8 = 0x2000;
    v9 = a3;
  }
  else
  {
    if ( v12 > 9 )
      return 0;
    serdes_apb_write_1_chip(a1, a2, a3, 32769, -4190209);
    v8 = 4186112;
    v9 = a3;
  }
  serdes_apb_write_1_chip(a1, a2, v9, 32801, v8);
  return 0;
}

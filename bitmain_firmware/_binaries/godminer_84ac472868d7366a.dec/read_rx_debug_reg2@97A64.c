int __fastcall read_rx_debug_reg2(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r0
  int v8; // r9
  unsigned __int16 v9; // r7
  int v10; // r6
  int v11; // r8
  int v12; // r2
  int v13; // r7
  int v15; // [sp+28h] [bp-1020h] BYREF
  _BYTE v16[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v15, "chain");
  v7 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "read_rx_debug_reg2",
    18,
    9184,
    60,
    v16);
  if ( a4 )
  {
    LOWORD(v8) = 0;
    do
    {
      v9 = (_WORD)v8 << 12;
      v10 = (unsigned __int16)((_WORD)v8 << 12) | 1;
      v11 = (unsigned __int16)((_WORD)v8 << 12) | 0x16;
      v8 = (unsigned __int16)(v8 + 1);
      sub_5D9EC(a1, (unsigned __int8)a3, v9 | 1, -9);
      sub_5D9EC(a1, (unsigned __int8)a3, v9 | 0x16, 0);
      sub_5D9EC(a1, (unsigned __int8)a3, v9 | 1, -9);
      v12 = v9 | 0x16;
      v13 = v9 | 0x1A;
      sub_5D9EC(a1, (unsigned __int8)a3, v12, 8);
      sub_5D9EC(a1, (unsigned __int8)a3, v10, -9);
      sub_5D9EC(a1, (unsigned __int8)a3, v11, 0);
      sub_5D844(a1, a3, v13);
      sub_5D9EC(a1, (unsigned __int8)a3, v10, -9);
      sub_5D9EC(a1, (unsigned __int8)a3, v11, 0);
      sub_5D9EC(a1, (unsigned __int8)a3, v10, -9);
      sub_5D9EC(a1, (unsigned __int8)a3, v11, 8);
      sub_5D9EC(a1, (unsigned __int8)a3, v10, -9);
      sub_5D9EC(a1, (unsigned __int8)a3, v11, 0);
      sub_5D844(a1, a3, v13);
      sub_5D9EC(a1, (unsigned __int8)a3, v10, -9);
      sub_5D9EC(a1, (unsigned __int8)a3, v11, 0);
      sub_5D9EC(a1, (unsigned __int8)a3, v10, -9);
      sub_5D9EC(a1, (unsigned __int8)a3, v11, 8);
      sub_5D9EC(a1, (unsigned __int8)a3, v10, -9);
      sub_5D9EC(a1, (unsigned __int8)a3, v11, 0);
      sub_5D844(a1, a3, v13);
      sub_5D9EC(a1, (unsigned __int8)a3, v10, 0);
    }
    while ( v8 != a4 );
  }
  return 0;
}

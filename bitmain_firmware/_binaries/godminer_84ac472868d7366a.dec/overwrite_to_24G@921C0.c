int __fastcall overwrite_to_24G(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v7; // r0
  int v8; // r7
  int v9; // r9
  int v10; // r8
  int v11; // r6
  _BYTE v13[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "overwrite_to_24G",
    16,
    8152,
    60,
    v13);
  if ( a4 == 8 )
  {
    v11 = 61443;
    v10 = 61448;
    v9 = 61442;
    v8 = 61441;
  }
  else
  {
    v8 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v9 = (unsigned __int16)((_WORD)a4 << 12) | 2;
    v10 = (unsigned __int16)((_WORD)a4 << 12) | 8;
    v11 = (unsigned __int16)((_WORD)a4 << 12) | 3;
  }
  sub_5C2A0(a1, a3, 144, -1009);
  sub_5C2A0(a1, a3, 145, -2147450879);
  sub_5C2A0(a1, a3, 144, 64);
  sub_5C2A0(a1, a3, 145, -2147450878);
  sub_5D9EC(a1, a3, v8, -196609);
  sub_5D9EC(a1, a3, v9, 0x20000);
  sub_5D9EC(a1, a3, v8, -4);
  sub_5D9EC(a1, a3, v10, 2);
  sub_5D9EC(a1, a3, v8, -196609);
  sub_5D9EC(a1, a3, v10, 196608);
  sub_5D9EC(a1, a3, v8, -196609);
  sub_5D9EC(a1, a3, v11, 196608);
  sub_5C2A0(a1, a3, 144, -786433);
  sub_5C2A0(a1, a3, 145, -2147450879);
  sub_5C2A0(a1, a3, 144, 786432);
  sub_5C2A0(a1, a3, 145, -2147450818);
  sub_5C2A0(a1, a3, 144, -8388609);
  sub_5C2A0(a1, a3, 145, -2147450879);
  sub_5C2A0(a1, a3, 144, 0x800000);
  sub_5C2A0(a1, a3, 145, -2147450808);
  sub_5C2A0(a1, a3, 144, -805306369);
  sub_5C2A0(a1, a3, 145, -2147450879);
  sub_5C2A0(a1, a3, 144, 805306368);
  sub_5C2A0(a1, a3, 145, -2147450804);
  sub_5D9EC(a1, a3, v8, 0);
  sub_5C2A0(a1, a3, 144, 0);
  sub_5C2A0(a1, a3, 145, -2147450879);
  sub_5C2A0(a1, a3, 144, 0);
  sub_5C2A0(a1, a3, 145, -2147442687);
  return 0;
}

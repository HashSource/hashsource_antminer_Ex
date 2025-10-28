int __fastcall cmnadj_20210813_500M_test(int a1, int a2, unsigned __int8 a3, int a4, int a5)
{
  int v8; // r0
  int v10; // r3
  int v11; // r3
  _BYTE v12[4080]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v8 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "cmnadj_20210813_500M_test",
    25,
    8215,
    60,
    v12);
  if ( a4 == 8 )
    LOWORD(a4) = 15;
  if ( a5 == 1 )
  {
    sub_5C218(a1, a3, 144, -97);
    sub_5C218(a1, a3, 145, -2147450879);
    v10 = 64;
LABEL_8:
    sub_5C218(a1, a3, 144, v10);
    LOWORD(v11) = -32756;
    goto LABEL_9;
  }
  if ( a5 == 2 )
  {
    sub_5C218(a1, a3, 144, -97);
    sub_5C218(a1, a3, 145, -2147450879);
    v10 = 96;
    goto LABEL_8;
  }
  if ( a5 != 3 )
    return 0;
  sub_5C218(a1, a3, 144, -97);
  sub_5C218(a1, a3, 145, -2147450879);
  sub_5C218(a1, a3, 144, 96);
  sub_5C218(a1, a3, 145, -2147450868);
  sub_5C218(a1, a3, 144, -805306369);
  sub_5C218(a1, a3, 145, -2147450879);
  sub_5C218(a1, a3, 144, 0x10000000);
  LOWORD(v11) = -32692;
LABEL_9:
  HIWORD(v11) = 0x8000;
  sub_5C218(a1, a3, 145, v11);
  sub_5D964(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0);
  sub_5C218(a1, a3, 144, 0);
  sub_5C218(a1, a3, 145, -2147450879);
  sub_5C218(a1, a3, 144, 0);
  sub_5C218(a1, a3, 145, -2147442687);
  return 0;
}

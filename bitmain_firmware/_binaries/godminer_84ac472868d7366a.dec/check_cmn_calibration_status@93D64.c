int __fastcall check_cmn_calibration_status(int a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r0
  char *v7; // r4
  int v8; // r2
  int v9; // t1
  int v10; // r3
  int v12; // [sp+28h] [bp-1024h] BYREF
  char v13; // [sp+47h] [bp-1005h] BYREF
  _DWORD v14[3]; // [sp+48h] [bp-1004h] BYREF
  _WORD v15[2044]; // [sp+54h] [bp-FF8h] BYREF

  V_LOCK(a1);
  v5 = 0;
  V_INT((int)&v12, "chain");
  v6 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_cmn_calibration_status",
    28,
    8494,
    60,
    v14);
  v14[0] = 100991489;
  v14[1] = 235735561;
  v14[2] = 134677248;
  v15[0] = 3851;
  do
  {
    v7 = &v13;
    do
    {
      while ( 1 )
      {
        v9 = (unsigned __int8)*++v7;
        v8 = v9;
        v10 = a3 + v9;
        if ( v9 != 3 )
        {
          if ( *(_BYTE *)(v10 + 16 * v5) )
            break;
        }
        if ( v7 == (char *)v15 + 1 )
          goto LABEL_7;
      }
      check_cmn_calibration_status_1_phy(a1, v5, v8);
    }
    while ( v7 != (char *)v15 + 1 );
LABEL_7:
    ++v5;
  }
  while ( v5 != 8 );
  return 0;
}

int __fastcall check_bist_tx_running(int a1, int a2, _DWORD *a3, int a4)
{
  unsigned __int16 v4; // r5
  int v5; // r9
  int v6; // r10
  int v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r6
  unsigned int v11; // r3
  _QWORD *v13; // r4
  int back; // r0
  _QWORD *v15; // r9
  int v16; // r0
  int v17; // r0
  int v18; // r12
  int v19; // r2
  int v20; // r0
  int v23; // [sp+4Ch] [bp-1088h]
  int v24; // [sp+50h] [bp-1084h]
  int v27; // [sp+5Ch] [bp-1078h]
  _DWORD v28[3]; // [sp+60h] [bp-1074h] BYREF
  __int16 v29; // [sp+6Ch] [bp-1068h]
  int v30; // [sp+70h] [bp-1064h] BYREF
  _QWORD v31[8]; // [sp+90h] [bp-1044h] BYREF
  _BYTE v32[4100]; // [sp+D0h] [bp-1004h] BYREF

  v4 = a4;
  if ( a3 != (_DWORD *)255 )
    a4 = 1;
  v5 = a1;
  if ( a3 == (_DWORD *)255 )
  {
    v27 = 14;
    a1 = 100991489;
    v28[0] = 100991489;
    v28[1] = 235735561;
    v28[2] = 134677248;
    v29 = 3851;
  }
  else
  {
    v27 = a4;
  }
  v6 = v5;
  V_LOCK(a1);
  v7 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_tx_running",
    21,
    8821,
    60,
    v32);
  v24 = 0;
  do
  {
    if ( a3 == (_DWORD *)255 )
    {
      v8 = v24;
      v9 = (int)v28;
    }
    else
    {
      v9 = (int)a3;
    }
    if ( a3 == (_DWORD *)255 )
      v9 = *(unsigned __int8 *)(v8 + v9);
    v23 = v9;
    if ( v4 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        if ( v11 > 3 || v23 != 3 )
        {
          v13 = v31;
          back = serdes_apb_read_back(v6, a2, v23, (unsigned __int16)((_WORD)v11 << 12) | 0x4A, (int)v31);
          if ( back > 0 )
          {
            v15 = &v31[back];
            do
            {
              if ( (*((_DWORD *)v13 + 1) & 0x200) != 0 )
              {
                V_LOCK(back);
                v16 = logfmt_raw((int)v32, 0x1000u);
                V_UNLOCK(v16);
                v17 = g_zc;
                v18 = 20;
                v19 = 8839;
              }
              else
              {
                V_LOCK(back);
                V_INT((int)&v30, "chain");
                v20 = logfmt_raw((int)v32, 0x1000u);
                V_UNLOCK(v20);
                v17 = g_zc;
                v18 = 100;
                v19 = 8842;
              }
              ++v13;
              back = zlog(
                       v17,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build"
                       "/godminer-origin_master/backend/backend_eth/backend_eth.c",
                       154,
                       "check_bist_tx_running",
                       21,
                       v19,
                       v18,
                       v32);
            }
            while ( v13 != v15 );
          }
        }
        v11 = (unsigned __int16)++v10;
      }
      while ( v4 > (unsigned int)(unsigned __int16)v10 );
    }
    v8 = v27;
  }
  while ( v27 != ++v24 );
  return 0;
}

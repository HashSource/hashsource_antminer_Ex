int __fastcall check_cmn_lock_status(int a1, int a2, _BYTE *a3, int a4, int a5)
{
  int v5; // r8
  int v7; // r0
  _DWORD *v8; // r12
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r2
  _BYTE *v14; // r3
  int back; // r0
  int v16; // r4
  int v17; // r0
  int v18; // r0
  char v19; // r1
  int result; // r0
  int v23; // [sp+34h] [bp-10B8h]
  int v24; // [sp+38h] [bp-10B4h]
  int v25; // [sp+3Ch] [bp-10B0h]
  char *s; // [sp+48h] [bp-10A4h]
  int v28; // [sp+50h] [bp-109Ch]
  _BYTE v30[16]; // [sp+58h] [bp-1094h] BYREF
  char v31[32]; // [sp+68h] [bp-1084h] BYREF
  int v32; // [sp+88h] [bp-1064h] BYREF
  _BYTE v33[64]; // [sp+A8h] [bp-1044h] BYREF
  _BYTE var1004[4120]; // [sp+E8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v31, "chain");
  v7 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_cmn_lock_status",
    21,
    8669,
    60,
    var1004);
  if ( a3 == (_BYTE *)255 )
  {
    v9 = (int)&unk_1384C0;
    v28 = 14;
    v8 = v30;
  }
  else
  {
    v9 = 1;
    v28 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(v9 + 4);
    v12 = *(_DWORD *)(v9 + 8);
    v9 = *(_DWORD *)(v9 + 12);
    *v8 = v10;
    v8[1] = v11;
    v8[2] = v12;
    v8 += 3;
  }
  LOWORD(v13) = (unsigned __int16)"chain";
  if ( a3 == (_BYTE *)255 )
    *(_WORD *)v8 = v9;
  HIWORD(v13) = (unsigned int)"chain" >> 16;
  v24 = 0;
  v25 = 0;
  s = (char *)v13;
  do
  {
    v14 = a3;
    if ( a3 == (_BYTE *)255 )
    {
      v13 = v25;
      v14 = v30;
    }
    else
    {
      v5 = (int)a3;
    }
    if ( a3 == (_BYTE *)255 )
      v5 = (unsigned __int8)v14[v13];
    if ( v5 != 3 )
    {
      back = serdes_apb_read_back(a1, a2, v5, 32797, (int)v33);
      v23 = back;
      if ( back > 0 )
      {
        v16 = 0;
        do
        {
          while ( (*(_DWORD *)&v33[8 * v16 + 4] & 0x20000000) == 0 )
          {
            if ( a5 )
              *(_BYTE *)(a5 + v5 + 16 * v16) = 1;
            ++v24;
            V_LOCK(back);
            V_INT((int)&v32, s);
            v18 = logfmt_raw((int)var1004, 0x1000u);
            V_UNLOCK(v18);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_cmn_lock_status",
              21,
              8700,
              100,
              var1004);
            v19 = v33[8 * v16++];
            back = ajust_retry_param(a1, v19, v5);
            if ( v23 == v16 )
              goto LABEL_24;
          }
          if ( a5 )
            *(_BYTE *)(a5 + v5 + 16 * v16) = 0;
          V_LOCK(back);
          ++v16;
          v17 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v17);
          back = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/god"
                   "miner-origin_master/backend/backend_eth/backend_eth.c",
                   154,
                   "check_cmn_lock_status",
                   21,
                   8694,
                   20,
                   var1004);
        }
        while ( v23 != v16 );
      }
    }
LABEL_24:
    v13 = v28;
  }
  while ( v28 != ++v25 );
  result = v24;
  if ( byte_163778 )
    byte_163778 = 0;
  return result;
}

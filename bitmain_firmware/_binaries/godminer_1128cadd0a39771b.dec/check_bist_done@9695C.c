int __fastcall check_bist_done(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r0
  _DWORD *v8; // r12
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r2
  int v14; // r3
  int v15; // r6
  unsigned int v16; // r3
  _QWORD *v18; // r4
  int back; // r0
  _QWORD *v20; // r7
  int v21; // r3
  int v22; // r0
  unsigned int v25; // [sp+3Ch] [bp-10B0h]
  int v26; // [sp+44h] [bp-10A8h]
  int v27; // [sp+48h] [bp-10A4h]
  int v30; // [sp+54h] [bp-1098h]
  _BYTE v31[16]; // [sp+58h] [bp-1094h] BYREF
  char v32[32]; // [sp+68h] [bp-1084h] BYREF
  int v33; // [sp+88h] [bp-1064h] BYREF
  _QWORD v34[8]; // [sp+A8h] [bp-1044h] BYREF
  _BYTE v35[4100]; // [sp+E8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v32, "chain");
  v7 = logfmt_raw((int)v35, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_done",
    15,
    8917,
    60,
    v35);
  if ( a3 == (_BYTE *)255 )
  {
    v9 = (int)&unk_139940;
    v30 = 14;
    v8 = v31;
  }
  else
  {
    v9 = 1;
    v30 = 1;
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
  LOWORD(v13) = (unsigned __int16)"channel %1x, chip_id %02x core_id %02x bist error";
  if ( a3 == (_BYTE *)255 )
    *(_WORD *)v8 = v9;
  HIWORD(v13) = (unsigned int)"channel %1x, chip_id %02x core_id %02x bist error" >> 16;
  v25 = a4;
  v27 = 0;
  do
  {
    if ( a3 == (_BYTE *)255 )
    {
      v13 = v27;
      v14 = (int)v31;
    }
    else
    {
      v14 = (int)a3;
    }
    if ( a3 == (_BYTE *)255 )
      v14 = *(unsigned __int8 *)(v13 + v14);
    v26 = v14;
    if ( v25 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        if ( v16 > 3 || v26 != 3 )
        {
          v18 = v34;
          back = serdes_apb_read_back(a1, a2, v26, (unsigned __int16)((_WORD)v16 << 12) | 0x11, (int)v34);
          if ( back > 0 )
          {
            v20 = &v34[back];
            do
            {
              v21 = *((_DWORD *)v18 + 1);
              if ( (v21 & 0x20000) != 0 || (v21 & 0x400) == 0 )
              {
                V_LOCK(back);
                V_INT((int)&v33, "chain");
                v22 = logfmt_raw((int)v35, 0x1000u);
                V_UNLOCK(v22);
                back = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/bui"
                         "ld/godminer-origin_master/backend/backend_eth/backend_eth.c",
                         154,
                         "check_bist_done",
                         15,
                         8939,
                         100,
                         v35);
              }
              ++v18;
            }
            while ( v18 != v20 );
          }
        }
        v16 = (unsigned __int16)++v15;
      }
      while ( (unsigned __int16)v15 < v25 );
    }
    v13 = v30;
  }
  while ( v30 != ++v27 );
  return 0;
}

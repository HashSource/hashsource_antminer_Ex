int __fastcall check_cmn_lock_status(int a1, int a2, _BYTE *a3, int a4, int a5)
{
  int v5; // r8
  int v8; // r5
  char *v9; // r1
  int v10; // r1
  _DWORD *v11; // r12
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r2
  int v17; // r1
  _BYTE *v18; // r3
  int v19; // r4
  int v20; // r3
  int v21; // r1
  unsigned __int8 *v22; // r5
  int v23; // r1
  char v24; // r1
  int result; // r0
  int v27; // [sp+0h] [bp-10ECh]
  int back; // [sp+34h] [bp-10B8h]
  int v30; // [sp+38h] [bp-10B4h]
  int v31; // [sp+3Ch] [bp-10B0h]
  char *s; // [sp+48h] [bp-10A4h]
  int v34; // [sp+4Ch] [bp-10A0h]
  int v35; // [sp+50h] [bp-109Ch]
  _BYTE v37[16]; // [sp+58h] [bp-1094h] BYREF
  _DWORD v38[7]; // [sp+68h] [bp-1084h] BYREF
  int v39; // [sp+84h] [bp-1068h]
  _DWORD v40[7]; // [sp+88h] [bp-1064h] BYREF
  int v41; // [sp+A4h] [bp-1048h]
  unsigned __int8 v42[64]; // [sp+A8h] [bp-1044h] BYREF
  char var1004[4120]; // [sp+E8h] [bp-1004h] BYREF

  LOWORD(v8) = -22412;
  V_LOCK();
  LOWORD(v9) = -7948;
  HIWORD(v9) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v38, v9, *(int *)(a1 + 140));
  HIWORD(v8) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    v39,
    v38[0],
    v38[1],
    v38[2],
    v38[3],
    v38[4],
    v38[5],
    v38[6],
    v39,
    v8,
    "check_cmn_lock_status");
  V_UNLOCK();
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(g_zc, v10, 154, "check_cmn_lock_status", 21, 8669, 60, var1004);
  if ( a3 == (_BYTE *)255 )
  {
    v12 = (int)&unk_138130;
    v35 = 14;
    v11 = v37;
  }
  else
  {
    v12 = 1;
    v35 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v13 = *(_DWORD *)v12;
    v14 = *(_DWORD *)(v12 + 4);
    v15 = *(_DWORD *)(v12 + 8);
    v12 = *(_DWORD *)(v12 + 12);
    *v11 = v13;
    v11[1] = v14;
    v11[2] = v15;
    v11 += 3;
  }
  LOWORD(v16) = -7948;
  LOWORD(v17) = -23432;
  if ( a3 == (_BYTE *)255 )
    *(_WORD *)v11 = v12;
  HIWORD(v16) = (unsigned int)&loc_12D594 >> 16;
  HIWORD(v17) = (unsigned int)"rmination" >> 16;
  v30 = 0;
  v31 = 0;
  s = (char *)v16;
  v34 = v17;
  do
  {
    v18 = a3;
    if ( a3 == (_BYTE *)255 )
    {
      v16 = v31;
      v18 = v37;
    }
    else
    {
      v5 = (int)a3;
    }
    if ( a3 == (_BYTE *)255 )
      v5 = (unsigned __int8)v18[v16];
    if ( v5 != 3 )
    {
      back = serdes_apb_read_back(a1, a2, v5, 0x801Du, (int)v42);
      if ( back > 0 )
      {
        v19 = 0;
        do
        {
          while ( 1 )
          {
            v22 = &v42[8 * v19];
            if ( (*((_DWORD *)v22 + 1) & 0x20000000) != 0 )
              break;
            if ( a5 )
              *(_BYTE *)(a5 + v5 + 16 * v19) = 1;
            ++v30;
            V_LOCK();
            V_INT((int)v40, s, *(int *)(a1 + 140));
            logfmt_raw(
              var1004,
              0x1000u,
              0,
              v41,
              v40[0],
              v40[1],
              v40[2],
              v40[3],
              v40[4],
              v40[5],
              v40[6],
              v41,
              v34,
              v42[8 * v19],
              v22[1],
              *((_DWORD *)v22 + 1));
            V_UNLOCK();
            LOWORD(v23) = -25512;
            HIWORD(v23) = (unsigned int)"one" >> 16;
            zlog(g_zc, v23, 154, "check_cmn_lock_status", 21, 8700, 100, var1004);
            v24 = v42[8 * v19++];
            ajust_retry_param(a1, v24, v5);
            if ( back == v19 )
              goto LABEL_24;
          }
          if ( a5 )
            *(_BYTE *)(a5 + v5 + 16 * v19) = 0;
          V_LOCK();
          LOWORD(v20) = -23472;
          HIWORD(v20) = (unsigned int)"set_chip0_1_work_1_pe" >> 16;
          v27 = v42[8 * v19++];
          logfmt_raw(var1004, 0x1000u, 0, v20, v27, v22[1]);
          V_UNLOCK();
          LOWORD(v21) = -25512;
          HIWORD(v21) = (unsigned int)"one" >> 16;
          zlog(g_zc, v21, 154, "check_cmn_lock_status", 21, 8694, 20, var1004);
        }
        while ( back != v19 );
      }
    }
LABEL_24:
    v16 = v35;
  }
  while ( v35 != ++v31 );
  result = v30;
  if ( byte_163778 )
    byte_163778 = 0;
  return result;
}

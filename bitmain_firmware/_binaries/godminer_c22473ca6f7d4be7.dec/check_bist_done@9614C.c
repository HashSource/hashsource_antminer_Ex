int __fastcall check_bist_done(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  char *v8; // r1
  _DWORD *v9; // r9
  int v10; // r1
  _DWORD *v11; // r12
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r2
  int v17; // r3
  int v18; // r6
  unsigned int v19; // r3
  unsigned __int8 *v21; // r4
  int back; // r0
  unsigned __int8 *v23; // r7
  int v24; // r3
  int v25; // r1
  int v28; // [sp+38h] [bp-10B4h]
  unsigned int v29; // [sp+3Ch] [bp-10B0h]
  int v30; // [sp+44h] [bp-10A8h]
  int v31; // [sp+48h] [bp-10A4h]
  int v34; // [sp+54h] [bp-1098h]
  _BYTE v35[16]; // [sp+58h] [bp-1094h] BYREF
  _DWORD v36[7]; // [sp+68h] [bp-1084h] BYREF
  int v37; // [sp+84h] [bp-1068h]
  _DWORD v38[7]; // [sp+88h] [bp-1064h] BYREF
  int v39; // [sp+A4h] [bp-1048h]
  _QWORD v40[8]; // [sp+A8h] [bp-1044h] BYREF
  char v41[4100]; // [sp+E8h] [bp-1004h] BYREF

  LOWORD(v7) = -22412;
  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v36, v8, *(int *)(a1 + 140));
  HIWORD(v7) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v41, 0x1000u, 0, v37, v36[0], v36[1], v36[2], v36[3], v36[4], v36[5], v36[6], v37, v7, "check_bist_done");
  V_UNLOCK();
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(*v9, v10, 154, "check_bist_done", 15, 8917, 60, v41);
  if ( a3 == (_BYTE *)255 )
  {
    v12 = (int)&unk_138130;
    v34 = 14;
    v11 = v35;
  }
  else
  {
    v12 = 1;
    v34 = 1;
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
  LOWORD(v16) = -23024;
  if ( a3 == (_BYTE *)255 )
    *(_WORD *)v11 = v12;
  HIWORD(v16) = (unsigned int)&unk_139940 >> 16;
  v29 = a4;
  v28 = v16;
  v31 = 0;
  do
  {
    if ( a3 == (_BYTE *)255 )
    {
      v16 = v31;
      v17 = (int)v35;
    }
    else
    {
      v17 = (int)a3;
    }
    if ( a3 == (_BYTE *)255 )
      v17 = *(unsigned __int8 *)(v16 + v17);
    v30 = v17;
    if ( v29 )
    {
      v18 = 0;
      v19 = 0;
      do
      {
        if ( v19 > 3 || v30 != 3 )
        {
          v21 = (unsigned __int8 *)v40;
          back = serdes_apb_read_back(a1, a2, v30, (unsigned __int16)((_WORD)v19 << 12) | 0x11, (int)v40);
          if ( back > 0 )
          {
            v23 = (unsigned __int8 *)&v40[back];
            do
            {
              v24 = *((_DWORD *)v21 + 1);
              if ( (v24 & 0x20000) != 0 || (v24 & 0x400) == 0 )
              {
                V_LOCK();
                V_INT((int)v38, "chain", *(int *)(a1 + 140));
                logfmt_raw(
                  v41,
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
                  v28,
                  v18,
                  *v21,
                  v21[1]);
                V_UNLOCK();
                LOWORD(v25) = -25512;
                HIWORD(v25) = (unsigned int)"one" >> 16;
                zlog(*v9, v25, 154, "check_bist_done", 15, 8939, 100, v41);
              }
              v21 += 8;
            }
            while ( v21 != v23 );
          }
        }
        v19 = (unsigned __int16)++v18;
      }
      while ( (unsigned __int16)v18 < v29 );
    }
    v16 = v34;
  }
  while ( v34 != ++v31 );
  return 0;
}

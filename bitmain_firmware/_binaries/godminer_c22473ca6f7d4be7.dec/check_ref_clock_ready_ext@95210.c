int __fastcall check_ref_clock_ready_ext(int a1, int a2, char *a3, int a4, int a5)
{
  _DWORD *v7; // r7
  int v8; // r3
  int v9; // r1
  _DWORD *v10; // r6
  int *v11; // r12
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r2
  int v17; // r1
  unsigned __int8 *v18; // r7
  int v19; // r3
  _DWORD *v20; // r4
  char *v21; // r3
  int j; // r5
  int v23; // r0
  int v24; // r12
  int v25; // r2
  int v26; // r1
  char *v27; // r10
  int v28; // r3
  int v29; // r1
  int result; // r0
  int k; // r3
  int v32; // r3
  int v33; // r3
  int v34; // r1
  int v35; // [sp+38h] [bp-107Ch]
  char *v36; // [sp+3Ch] [bp-1078h]
  int v37; // [sp+44h] [bp-1070h]
  int v38; // [sp+48h] [bp-106Ch]
  unsigned __int8 i; // [sp+4Ch] [bp-1068h]
  _DWORD *ptr; // [sp+54h] [bp-1060h]
  int v42; // [sp+58h] [bp-105Ch]
  int v43; // [sp+5Ch] [bp-1058h]
  int v44; // [sp+60h] [bp-1054h] BYREF
  _DWORD v45[7]; // [sp+70h] [bp-1044h] BYREF
  int v46; // [sp+8Ch] [bp-1028h]
  _DWORD v47[7]; // [sp+90h] [bp-1024h] BYREF
  int v48; // [sp+ACh] [bp-1008h]
  char v49[4100]; // [sp+B0h] [bp-1004h] BYREF

  LOWORD(v7) = -14512;
  V_LOCK();
  LOWORD(v8) = -23384;
  HIWORD(v8) = (unsigned int)"k" >> 16;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(v49, 0x1000u, 0, v8);
  V_UNLOCK();
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  v10 = v7;
  zlog(*v7, v9, 154, "check_ref_clock_ready_ext", 25, 8716, 60, v49);
  sub_5C100(a1, 112, 0);
  if ( a3 == (char *)255 )
  {
    v12 = (int)&unk_138130;
    v42 = 14;
    v11 = &v44;
  }
  else
  {
    v12 = 1;
    v42 = 1;
  }
  if ( a3 == (char *)255 )
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
  LOWORD(v16) = -23776;
  if ( a3 == (char *)255 )
    *(_WORD *)v11 = v12;
  HIWORD(v16) = (unsigned int)"_num" >> 16;
  v43 = 0;
  v37 = v16;
  do
  {
    V_LOCK();
    logfmt_raw(v49, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready_ext", v43);
    V_UNLOCK();
    LOWORD(v17) = -25512;
    HIWORD(v17) = (unsigned int)"one" >> 16;
    zlog(*v10, v17, 154, "check_ref_clock_ready_ext", 25, 8725, 60, v49);
    ptr = malloc(0x600u);
    v18 = (unsigned __int8 *)malloc(0x600u);
    v19 = 0;
    for ( i = 0; i < v42; v19 = ++i )
    {
      v20 = ptr;
      if ( a3 == (char *)255 )
        v21 = &v49[v19];
      else
        v21 = a3;
      if ( a3 == (char *)255 )
        v21 = (char *)(unsigned __int8)*(v21 - 80);
      v36 = v21;
      v38 = (unsigned __int16)v21;
      v35 = sub_5C3C4(a1, (unsigned __int16)v21, 112, ptr);
      if ( v35 > 0 )
      {
        for ( j = 0; j != v35; ++j )
        {
          if ( (*v20 & 0x9000000) != 0x9000000 )
          {
            if ( a5 )
              v36[16 * j + a5] = 1;
            V_LOCK();
            V_INT((int)v47, "chain", *(int *)(a1 + 140));
            logfmt_raw(
              v49,
              0x1000u,
              0,
              v48,
              v47[0],
              v47[1],
              v47[2],
              v47[3],
              v47[4],
              v47[5],
              v47[6],
              v48,
              v37,
              *((unsigned __int8 *)v20 + 4),
              *((unsigned __int8 *)v20 + 8),
              112,
              *v20);
            V_UNLOCK();
            v23 = *v10;
            v24 = 100;
            v25 = 8759;
            goto LABEL_20;
          }
          if ( a5 )
          {
            v27 = &v36[a5];
            v36[16 * j + a5] = 0;
            V_LOCK();
            LOWORD(v28) = -23824;
            HIWORD(v28) = (unsigned int)"rk_num" >> 16;
            logfmt_raw(v49, 0x1000u, 0, v28, *((unsigned __int8 *)v20 + 4), *((unsigned __int8 *)v20 + 8), 112, *v20);
            V_UNLOCK();
            LOWORD(v29) = -25512;
            HIWORD(v29) = (unsigned int)"one" >> 16;
            zlog(*v10, v29, 154, "check_ref_clock_ready_ext", 25, 8740, 20, v49);
            if ( !sub_5C5E4(a1, *((_BYTE *)v20 + 4), v38, 113, v18) || *(_DWORD *)v18 == -1 )
            {
              v27[16 * j] = 0;
LABEL_38:
              V_LOCK();
              LOWORD(v32) = -23664;
              HIWORD(v32) = (unsigned int)"set_work_debug" >> 16;
              logfmt_raw(v49, 0x1000u, 0, v32, v18[4], v18[8], 113, *(_DWORD *)v18);
              V_UNLOCK();
              v23 = *v10;
              v24 = 20;
              v25 = 8752;
              goto LABEL_20;
            }
            v27[16 * j] = 1;
          }
          else
          {
            V_LOCK();
            LOWORD(v33) = -23824;
            HIWORD(v33) = (unsigned int)"rk_num" >> 16;
            logfmt_raw(v49, 0x1000u, 0, v33, *((unsigned __int8 *)v20 + 4), *((unsigned __int8 *)v20 + 8), 112, *v20);
            V_UNLOCK();
            LOWORD(v34) = -25512;
            HIWORD(v34) = (unsigned int)"one" >> 16;
            zlog(*v10, v34, 154, "check_ref_clock_ready_ext", 25, 8740, 20, v49);
            if ( !sub_5C5E4(a1, *((_BYTE *)v20 + 4), v38, 113, v18) || *(_DWORD *)v18 == -1 )
              goto LABEL_38;
          }
          V_LOCK();
          V_INT((int)v45, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v49,
            0x1000u,
            0,
            v46,
            v45[0],
            v45[1],
            v45[2],
            v45[3],
            v45[4],
            v45[5],
            v45[6],
            v46,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            v18[4],
            v18[8],
            113,
            *(_DWORD *)v18);
          V_UNLOCK();
          v23 = *v10;
          v24 = 100;
          v25 = 8747;
LABEL_20:
          LOWORD(v26) = -25512;
          HIWORD(v26) = (unsigned int)"one" >> 16;
          v20 += 3;
          zlog(v23, v26, 154, "check_ref_clock_ready_ext", 25, v25, v24, v49);
        }
      }
    }
    ++v43;
    free(ptr);
    free(v18);
  }
  while ( v43 != 3 );
  result = a5;
  if ( a5 )
  {
    while ( 2 )
    {
      for ( k = 0; k != 16; ++k )
      {
        if ( (k & 0xFFFFFFF7) != 4 && *(_BYTE *)(result + k) )
          return -1;
      }
      result += 16;
      if ( a5 + 128 != result )
        continue;
      break;
    }
    return 0;
  }
  return result;
}

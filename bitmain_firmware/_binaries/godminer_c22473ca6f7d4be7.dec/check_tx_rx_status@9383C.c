int __fastcall check_tx_rx_status(int a1, int a2, unsigned __int8 *a3)
{
  int v4; // r6
  char *v5; // r1
  _DWORD *v6; // r7
  int v7; // r8
  int v8; // r1
  unsigned __int8 *v9; // r3
  _DWORD *v10; // r4
  int v11; // r0
  _DWORD *v12; // r6
  char *v13; // r1
  int v14; // lr
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v19; // [sp+20h] [bp-1084h]
  unsigned __int8 *v20; // [sp+3Ch] [bp-1068h]
  int v21; // [sp+40h] [bp-1064h]
  _DWORD *ptr; // [sp+48h] [bp-105Ch]
  _DWORD v24[3]; // [sp+50h] [bp-1054h] BYREF
  __int16 v25; // [sp+5Ch] [bp-1048h]
  char v26; // [sp+5Eh] [bp-1046h] BYREF
  _DWORD v27[7]; // [sp+60h] [bp-1044h] BYREF
  int v28; // [sp+7Ch] [bp-1028h]
  _DWORD v29[7]; // [sp+80h] [bp-1024h] BYREF
  int v30; // [sp+9Ch] [bp-1008h]
  char v31[4100]; // [sp+A0h] [bp-1004h] BYREF

  LOWORD(v4) = -22412;
  V_LOCK();
  LOWORD(v5) = -7948;
  HIWORD(v5) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v6) = -14512;
  LOWORD(v7) = -25512;
  HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v7) = (unsigned int)"one" >> 16;
  V_INT((int)v27, v5, *(int *)(a1 + 140));
  HIWORD(v4) = (unsigned int)&unk_139BA4 >> 16;
  v19 = v4;
  LOWORD(v4) = -23664;
  HIWORD(v4) = (unsigned int)"set_work_debug" >> 16;
  v21 = v4;
  v20 = (unsigned __int8 *)v24;
  logfmt_raw(
    v31,
    0x1000u,
    0,
    v28,
    v27[0],
    v27[1],
    v27[2],
    v27[3],
    v27[4],
    v27[5],
    v27[6],
    v28,
    v19,
    "check_tx_rx_status");
  V_UNLOCK();
  zlog(*v6, v7, 154, "check_tx_rx_status", 18, 8450, 60, v31);
  ptr = malloc(0x600u);
  v8 = 235735561;
  v24[0] = 100991489;
  v24[1] = 235735561;
  v24[2] = 134677248;
  v25 = 3851;
  do
  {
    v9 = a3;
    v10 = ptr;
    if ( a3 == (unsigned __int8 *)255 )
      v9 = v20;
    else
      v8 = (int)a3;
    if ( a3 == (unsigned __int8 *)255 )
      v8 = *v9;
    v11 = sub_5C3C4(a1, v8, 113, ptr);
    if ( v11 > 0 )
    {
      v12 = &ptr[3 * v11];
      do
      {
        if ( *v10 == -1 )
        {
          V_LOCK();
          logfmt_raw(v31, 0x1000u, 0, v21, *((unsigned __int8 *)v10 + 4), *((unsigned __int8 *)v10 + 8), 113, *v10);
          V_UNLOCK();
          v15 = *v6;
          v16 = 20;
          v17 = 8468;
        }
        else
        {
          V_LOCK();
          LOWORD(v13) = -7948;
          HIWORD(v13) = (unsigned int)&loc_12D594 >> 16;
          V_INT((int)v29, v13, *(int *)(a1 + 140));
          LOWORD(v14) = -23720;
          HIWORD(v14) = (unsigned int)"set_work_timeout" >> 16;
          logfmt_raw(
            v31,
            0x1000u,
            0,
            v30,
            v29[0],
            v29[1],
            v29[2],
            v29[3],
            v29[4],
            v29[5],
            v29[6],
            v30,
            v14,
            *((unsigned __int8 *)v10 + 4),
            *((unsigned __int8 *)v10 + 8),
            113,
            *v10);
          V_UNLOCK();
          v15 = *v6;
          v16 = 100;
          v17 = 8466;
        }
        v10 += 3;
        zlog(v15, v7, 154, "check_tx_rx_status", 18, v17, v16, v31);
      }
      while ( v10 != v12 );
    }
    ++v20;
  }
  while ( v20 != (unsigned __int8 *)&v26 );
  free(ptr);
  return 0;
}

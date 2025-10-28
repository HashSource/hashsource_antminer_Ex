int __fastcall chip_temp_ks5_2382(int a1, int a2)
{
  int v2; // r4
  void (__fastcall *v4)(int, int *); // r3
  int v6; // r9
  _WORD *v7; // r7
  _WORD *v8; // r5
  char *v9; // r1
  int v10; // r9
  int v11; // r3
  unsigned int v12; // r2
  bool v13; // cc
  float v14; // s14
  int v16; // [sp+34h] [bp-8h] BYREF
  int v17; // [sp+38h] [bp-4h] BYREF
  int v18; // [sp+3Ch] [bp+0h]
  int v19; // [sp+40h] [bp+4h]
  int v20; // [sp+44h] [bp+8h]
  _DWORD v21[7]; // [sp+48h] [bp+Ch] BYREF
  int v22; // [sp+64h] [bp+28h]
  unsigned __int16 v23; // [sp+68h] [bp+2Ch] BYREF
  char v24; // [sp+6Ah] [bp+2Eh]
  char v25; // [sp+6Bh] [bp+2Fh]

  v2 = 0;
  v19 = 0;
  v17 = 285212672;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 264);
  LOBYTE(v19) = 1;
  HIWORD(v19) = 192;
  v20 = 0;
  v16 = 0;
  v18 = 0;
  v4(a1, &v17);
  usleep(0x2710u);
  v19 = 12582913;
  v20 = 0;
  v17 = 285343744;
  v18 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 264))(a1, &v17);
  usleep(0x2710u);
  v6 = *(_DWORD *)(a1 + 336);
  v18 = 0;
  v19 = 12845057;
  v20 = 0;
  v17 = 0;
  v7 = calloc(12 * v6, 1u);
  (*(void (__fastcall **)(int, int *, int, _WORD *, int *))(a1 + 284))(a1, &v17, v6, v7, &v16);
  if ( v16 > 0 )
  {
    v8 = v7;
    do
    {
      while ( 1 )
      {
        ++v2;
        if ( v8[3] == 196 )
          break;
        v8 += 6;
        if ( v16 <= v2 )
          goto LABEL_7;
      }
      V_LOCK();
      LOWORD(v9) = 23936;
      HIWORD(v9) = (unsigned int)"p" >> 16;
      v8 += 6;
      V_INT((int)v21, v9, *(int *)(a1 + 248));
      LOWORD(v10) = -25388;
      HIWORD(v10) = (unsigned int)" mode %d PMDATA %08x" >> 16;
      logfmt_raw(
        (char *)&v23,
        0x1000u,
        0,
        v22,
        v21[0],
        v21[1],
        v21[2],
        v21[3],
        v21[4],
        v21[5],
        v21[6],
        v22,
        v10,
        *((unsigned __int8 *)v8 - 8),
        (unsigned __int16)*(v8 - 3),
        *((_DWORD *)v8 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
        174,
        "chip_temp_ks5_2382",
        18,
        1052,
        20,
        &v23);
      v11 = *((_DWORD *)v8 - 3);
      v12 = *((unsigned __int8 *)v8 - 8);
      v25 = v11;
      HIBYTE(v23) = BYTE2(v11);
      LOBYTE(v23) = HIBYTE(v11);
      v24 = BYTE1(v11);
      v13 = v16 <= v2;
      v14 = ((double)v23 - 0.5) * 662.88 * 0.000244140625 - 287.48;
      *(float *)(a2 + 4 * (v12 >> 1)) = v14;
    }
    while ( !v13 );
  }
LABEL_7:
  free(v7);
  return 0;
}

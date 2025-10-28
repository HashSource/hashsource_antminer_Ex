int __fastcall work_2_packet_kas(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  void *v6; // r0
  int v7; // r4
  int v8; // r3
  int v9; // lr
  int v10; // r0
  int *v11; // r12
  _DWORD *v12; // r2
  double v13; // d7
  _BYTE *v14; // r1
  int *v15; // r3
  int v16; // t1
  int v17; // r10
  int v18; // r9
  int v19; // r8
  int v20; // r8
  int v21; // r10
  int v22; // r9
  int v23; // r8
  int v24; // lr
  _DWORD *v25; // r0
  int v26; // r8
  int v27; // lr
  int v28; // r0
  int v29; // r2
  int *v30; // r3
  int v31; // r4
  int v32; // lr
  int v33; // r12
  int v34; // r1
  int v35; // r2
  char v36; // r2
  __int16 v37; // r0
  int result; // r0
  int v39; // r0
  int v40; // [sp+14h] [bp-1010h]
  int v41; // [sp+14h] [bp-1010h]
  int *v43; // [sp+1Ch] [bp-1008h]
  _BYTE v44[4100]; // [sp+20h] [bp-1004h] BYREF

  v6 = (void *)dword_185260;
  if ( dword_185260 )
  {
    v7 = *(_DWORD *)(a1 + 784);
    if ( v7 )
      goto LABEL_3;
LABEL_14:
    V_LOCK(v6);
    v39 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      174,
      "work_2_packet_kas",
      17,
      203,
      0x14u,
      v44);
    return 3;
  }
  v41 = a2;
  v6 = malloc(0x450u);
  v7 = *(_DWORD *)(a1 + 784);
  dword_185260 = (int)v6;
  a2 = v41;
  if ( !v7 )
    goto LABEL_14;
LABEL_3:
  *a3 = 85;
  a3[1] = -86;
  v8 = a2;
  a3[2] = 48;
  v9 = a2;
  v10 = *(unsigned __int8 *)(v7 + 12416);
  v40 = v7 + 12288;
  v11 = (int *)(a2 + 16);
  v43 = (int *)(a2 + 16);
  *(_DWORD *)(v7 + 8 * v10) = *(_DWORD *)a2;
  *(_DWORD *)(v7 + 8 * v10 + 4) = *(_DWORD *)(a2 + 4);
  v12 = (_DWORD *)(v7 + 32 * (v10 + 260));
  v13 = *(double *)(a2 + 192);
  v14 = a3 + 4;
  *(_BYTE *)(v7 + v10 + 0x2000) = (unsigned int)v13;
  v16 = *(_DWORD *)(v8 + 64);
  v15 = (int *)(v8 + 64);
  v17 = v15[1];
  v18 = v15[2];
  v19 = v15[3];
  *v12 = v16;
  v12[1] = v17;
  v12[2] = v18;
  v12[3] = v19;
  v20 = v15[7];
  v21 = v15[5];
  v22 = v15[6];
  v12[4] = v15[4];
  v12[5] = v21;
  v12[6] = v22;
  v12[7] = v20;
  v23 = *(_DWORD *)(v9 + 8);
  v24 = *(_DWORD *)(v9 + 12);
  v25 = (_DWORD *)(v7 + 8 * (*(unsigned __int8 *)(v7 + 12416) + 128));
  *v25 = v23;
  v25[1] = v24;
  do
  {
    v26 = *v11;
    v11 += 4;
    v27 = *(v11 - 3);
    v14 += 16;
    v28 = *(v11 - 2);
    v29 = *(v11 - 1);
    *((_DWORD *)v14 - 4) = v26;
    *((_DWORD *)v14 - 3) = v27;
    *((_DWORD *)v14 - 2) = v28;
    *((_DWORD *)v14 - 1) = v29;
  }
  while ( v11 != v15 );
  v30 = v43;
  v31 = v7 + 48 * *(unsigned __int8 *)(v7 + 12416) + 2048;
  do
  {
    v32 = *v30;
    v30 += 4;
    v33 = *(v30 - 3);
    v31 += 16;
    v34 = *(v30 - 2);
    v35 = *(v30 - 1);
    *(_DWORD *)(v31 - 16) = v32;
    *(_DWORD *)(v31 - 12) = v33;
    *(_DWORD *)(v31 - 8) = v34;
    *(_DWORD *)(v31 - 4) = v35;
  }
  while ( v30 != v43 + 12 );
  v36 = *(_BYTE *)(v40 + 128);
  a3[3] = v36;
  *(_BYTE *)(v40 + 128) = (v36 + 1) & 0x7F;
  if ( ((v36 + 1) & 0x7F) == 0 )
    sub_841EC(a1, 60, (void *)dword_185260);
  v37 = BM_CRC16(a3 + 2, 50);
  a3[53] = v37;
  a3[52] = HIBYTE(v37);
  result = *(unsigned __int8 *)(a1 + 229);
  *a4 = 54;
  if ( result )
  {
    result = *(unsigned __int8 *)(a1 + 230);
    if ( *(_BYTE *)(a1 + 230) )
    {
      sub_843AC((_DWORD *)a1, 36);
      set_misc_control_kas(a1);
      result = 0;
      *(_BYTE *)(a1 + 229) = 0;
    }
  }
  return result;
}

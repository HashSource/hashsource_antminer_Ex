int __fastcall work_2_packet_vbk(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r12
  _BYTE *v7; // lr
  int v9; // r0
  int v10; // r8
  int v11; // r3
  int *v12; // r4
  _DWORD *v13; // r1
  int v14; // t1
  int *v15; // r2
  int v16; // r0
  int v17; // r11
  int v18; // r10
  _DWORD *v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r9
  int v23; // r3
  int v24; // r10
  int v25; // r9
  int v26; // r0
  int v27; // r1
  int v28; // r1
  int *v29; // r3
  _BYTE *v30; // r2
  int *v31; // r8
  int v32; // lr
  int v33; // r12
  int v34; // r0
  int v35; // r1
  int v36; // r0
  _DWORD *v37; // r3
  int *v38; // r1
  int v39; // lr
  int v40; // r12
  int v41; // r0
  int v42; // r2
  unsigned int v43; // r0
  char v44; // r3
  unsigned int v45; // r1
  _BYTE v47[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 632);
  *a3 = 85;
  a3[1] = -86;
  v7 = (_BYTE *)(v5 + 28672);
  a3[2] = 32;
  if ( *(_DWORD *)(a1 + 312) == 1 )
    a3[2] = 48;
  v9 = (unsigned __int8)*v7;
  v10 = *(_DWORD *)(a2 + 84);
  *(_QWORD *)(v5 + 8 * v9) = *(_QWORD *)a2;
  v11 = 24 * (__int16)v9 + 22528;
  *(_DWORD *)(v5 + 4 * (v9 + 5376)) = v10;
  v12 = (int *)(a2 + 16);
  v14 = *(_DWORD *)(a2 + 88);
  v13 = (_DWORD *)(a2 + 88);
  v15 = v12;
  v16 = v13[1];
  v17 = v13[2];
  v18 = v13[3];
  *(_DWORD *)(v5 + v11) = v14;
  v19 = (_DWORD *)(v5 + v11);
  v19[1] = v16;
  v19[2] = v17;
  v19[3] = v18;
  v20 = v13[5];
  v19[4] = v13[4];
  v19[5] = v20;
  v21 = (unsigned __int8)*v7;
  v22 = v21 + 256;
  v23 = v5 + ((v21 + 64) << 6);
  *(_QWORD *)(v5 + 8 * v22) = *(_QWORD *)(a2 + 8);
  do
  {
    v24 = *v15;
    v15 += 4;
    v25 = *(v15 - 3);
    v23 += 16;
    v26 = *(v15 - 2);
    v27 = *(v15 - 1);
    *(_DWORD *)(v23 - 16) = v24;
    *(_DWORD *)(v23 - 12) = v25;
    *(_DWORD *)(v23 - 8) = v26;
    *(_DWORD *)(v23 - 4) = v27;
  }
  while ( v15 != (int *)(a2 + 80) );
  v28 = (unsigned __int8)*v7;
  v29 = v12;
  v30 = a3 + 5;
  v31 = v12 + 16;
  *(_DWORD *)(v5 + 4 * (v28 + 5120)) = *(_DWORD *)(a2 + 80);
  a3[4] = v28;
  *v7 = v28 + 1;
  a3[3] = 64;
  do
  {
    v32 = *v29;
    v29 += 4;
    v33 = *(v29 - 3);
    v30 += 16;
    v34 = *(v29 - 2);
    v35 = *(v29 - 1);
    *((_DWORD *)v30 - 4) = v32;
    *((_DWORD *)v30 - 3) = v33;
    *((_DWORD *)v30 - 2) = v34;
    *((_DWORD *)v30 - 1) = v35;
  }
  while ( v29 != v31 );
  if ( !memcmp(&last_header, v12, 0x40u) )
  {
    V_LOCK(0);
    v36 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v36);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_vbk/backend_vbk.c",
      154,
      "work_2_packet_vbk",
      17,
      123,
      80,
      v47);
    dump_work_vbk(a2, (unsigned __int8)a3[4]);
  }
  v37 = &last_header;
  v38 = v12;
  do
  {
    v39 = *v38;
    v38 += 4;
    v40 = *(v38 - 3);
    v37 += 4;
    v41 = *(v38 - 2);
    v42 = *(v38 - 1);
    *(v37 - 4) = v39;
    *(v37 - 3) = v40;
    *(v37 - 2) = v41;
    *(v37 - 1) = v42;
  }
  while ( v38 != v31 );
  v43 = BM_CRC16(a3 + 2, (unsigned __int8)a3[3] + 3);
  v44 = v43;
  v45 = v43 >> 8;
  a3[70] = v44;
  a3[69] = v45;
  *a4 = 71;
  return 0;
}

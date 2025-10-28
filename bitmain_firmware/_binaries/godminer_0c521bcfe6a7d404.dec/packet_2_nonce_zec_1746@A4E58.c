int __fastcall packet_2_nonce_zec_1746(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, unsigned int *a6, _DWORD *a7)
{
  char v7; // r4
  unsigned int v12; // r0
  unsigned int v13; // r9
  int v14; // r6
  int v15; // r4
  int v16; // r10
  int v17; // r0
  int v18; // r4
  int v19; // r6
  int v20; // r8
  unsigned int v21; // r0
  int v22; // r0
  int v23; // r2
  char *v24; // r1
  int i; // r4
  char v26; // r3
  int v27; // r0
  int v28; // r2
  int v29; // r3
  int v30; // r4
  int v31; // r0
  int v32; // r1
  int v33; // r0
  int v34; // r3
  int v35; // r4
  int v36; // r0
  int v37; // r1
  int v38; // r0
  int v39; // r3
  int v40; // r0
  int v41; // r4
  int v42; // r0
  int v43; // r4
  char *v44; // r5
  char *v45; // r11
  char *v46; // r0
  int v47; // r3
  char v48; // r2
  int v49; // r2
  int v51; // [sp+18h] [bp-1014h]
  int v52; // [sp+1Ch] [bp-1010h]
  _BYTE var1004[4120]; // [sp+28h] [bp-1004h] BYREF

  v7 = a2[2];
  if ( (v7 & 0xF0) != 0xE0 )
    return 10;
  v12 = sub_12DDE8((unsigned __int8)a2[3], *(_DWORD *)(a1 + 396));
  v13 = v12;
  if ( v12 > 5 )
  {
    V_LOCK(v12);
    v17 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      174,
      "packet_2_nonce_zec_1746",
      23,
      394,
      80,
      var1004);
    return 14;
  }
  else
  {
    v14 = 1456 * v12;
    v15 = v7 & 0xF;
    v16 = *(_DWORD *)(a1 + 784);
    v51 = (unsigned __int8)a2[4];
    memcpy((void *)(v16 + 91 * (__int16)v15 + 1456 * v12 + 27649), a2 + 2, 0x5Bu);
    if ( v15 == 15 )
    {
      v18 = 0;
      v19 = v16 + 27649 + v14;
      v20 = v19;
      do
      {
        v21 = __rev16(BM_CRC16(v20, 89));
        if ( __PAIR64__(BYTE1(v21), (unsigned __int8)v21) != __PAIR64__(
                                                               *(unsigned __int8 *)(v20 + 90),
                                                               *(unsigned __int8 *)(v20 + 89)) )
        {
          V_LOCK(v21);
          v22 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v22);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            174,
            "verify_nonce_integrality_zec_1746",
            33,
            294,
            20,
            var1004);
          return 11;
        }
        ++v18;
        v20 += 91;
        v23 = 0;
      }
      while ( v18 != 16 );
      v24 = (char *)v19;
      for ( i = 0; i != 16; ++i )
      {
        v26 = *v24;
        v24 += 91;
        if ( (v26 & 0xF) != i )
        {
          V_LOCK(v21);
          v27 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v27);
          v28 = 303;
LABEL_15:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
            174,
            "verify_nonce_integrality_zec_1746",
            33,
            v28,
            20,
            var1004);
          return 36;
        }
      }
      v29 = v19;
      v30 = 0;
      do
      {
        v31 = *(unsigned __int8 *)(v29 + 92);
        v32 = v30 + 1;
        v29 += 91;
        if ( v31 != *(unsigned __int8 *)(v19 + 1) )
        {
          V_LOCK(v31);
          v33 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v33);
          v28 = 312;
          goto LABEL_15;
        }
        ++v30;
      }
      while ( v32 != 15 );
      v34 = v19;
      v35 = 0;
      do
      {
        v36 = *(unsigned __int8 *)(v34 + 93);
        v37 = v35 + 1;
        v34 += 91;
        if ( v36 != *(unsigned __int8 *)(v19 + 2) )
        {
          V_LOCK(v36);
          v38 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v38);
          v28 = 321;
          goto LABEL_15;
        }
        ++v35;
      }
      while ( v37 != 15 );
      v39 = v19;
      do
      {
        v40 = *(unsigned __int8 *)(v39 + 94);
        v41 = v23 + 1;
        v39 += 91;
        if ( v40 != *(unsigned __int8 *)(v19 + 3) )
        {
          V_LOCK(v40);
          v42 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v42);
          v28 = 330;
          goto LABEL_15;
        }
        ++v23;
      }
      while ( v41 != 15 );
      v52 = 1357 * v13;
      v43 = v16 + 36385 + 1357 * v13;
      v44 = (char *)v43;
      v45 = (char *)(v19 + 4);
      do
      {
        v46 = v44;
        v44 += 85;
        memcpy(v46, v45, 0x55u);
        v45 += 91;
      }
      while ( (char *)(v43 + 1275) != v44 );
      memcpy((void *)(v43 + 1275), (const void *)(v19 + 1369), 0x45u);
      *(_DWORD *)(v43 + 1352) = *(_DWORD *)(v19 + 1450);
      *(_BYTE *)(v43 + 1344) = *(_BYTE *)(v19 + 1366);
      *(_BYTE *)(v43 + 1345) = *(_BYTE *)(v19 + 1367);
      *(_BYTE *)(v43 + 1346) = *(_BYTE *)(v19 + 1368);
      *(_BYTE *)(v43 + 1347) = *(_BYTE *)(v19 + 1441);
      *(_DWORD *)(v43 + 1348) = *(_DWORD *)(v19 + 1442);
      v47 = *(_DWORD *)(v16 + 8 * v51);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(v16 + 8 * v51 + 4);
      *(_DWORD *)a3 = v47;
      *a7 = v47;
      strcpy((char *)(a3 + 16), (const char *)(v16 + 32 * (v51 + 32)));
      *(_DWORD *)(a3 + 48) = *(_DWORD *)(v16 + v52 + 37737);
      memcpy((void *)(a3 + 54), (const void *)(v16 + v52 + 36385), 0x540u);
      v48 = *(_BYTE *)(v16 + 1357 * v13 + 37732);
      *(_BYTE *)(a3 + 53) = v51;
      *(_BYTE *)(a3 + 52) = v48;
      *a6 = v13;
      v49 = *(_DWORD *)(a3 + 48);
      *(_DWORD *)(a3 + 8) = v13;
      *a5 = v49;
      *a4 = 1;
      return 0;
    }
    else
    {
      return 14;
    }
  }
}

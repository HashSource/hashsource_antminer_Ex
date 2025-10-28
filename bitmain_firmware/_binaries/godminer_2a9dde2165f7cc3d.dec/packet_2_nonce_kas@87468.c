int __fastcall packet_2_nonce_kas(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v11; // r0
  int v13; // r3
  int v14; // r2
  int *v15; // r0
  int v16; // r1
  int v17; // r0
  int *v18; // r2
  int v19; // r1
  int v20; // r1
  int v21; // r2
  int v22; // r0
  int v23; // r3
  int v24; // r12
  int *v25; // r2
  int *v26; // r3
  int v27; // r2
  int v28; // r0
  int v29; // lr
  int v30; // r3
  unsigned __int64 v31; // r4
  int v32; // r7
  _QWORD *v33; // r0
  int v34; // lr
  unsigned int v35; // r12
  unsigned int i; // r10
  unsigned int v37; // r1
  int v38; // r12
  int v39; // lr
  int v40; // r9
  int v41; // r1
  __int64 *v43; // r3
  _QWORD *v44; // r9
  __int64 *v45; // lr
  __int64 v46; // t1
  int v47; // r0
  int v48; // r1
  int v49; // r0
  int v50; // r2
  int v51; // r0
  int v52; // r8
  unsigned __int64 *v53; // r10
  unsigned __int64 v54; // r0
  unsigned __int64 v55; // t1
  unsigned __int64 v56; // r2
  int v57; // [sp+30h] [bp-104Ch]
  char v58[32]; // [sp+58h] [bp-1024h] BYREF
  _QWORD s[513]; // [sp+78h] [bp-1004h] BYREF

  v11 = BM_CRC5(a2 + 2, 91);
  if ( (*(_BYTE *)(a2 + 13) & 0x80) == 0 )
    return 10;
  if ( v11 != (*(_BYTE *)(a2 + 13) & 0x1F) && *(_BYTE *)(a1 + 230) )
  {
    v26 = &dword_185260[*(_DWORD *)(a1 + 224)];
    v27 = v26[1];
    v26[1] = v27 + 1;
    if ( v27 <= 9 )
    {
      V_LOCK(v11);
      V_INT((int)v58, "chain");
      v28 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v28);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
        174,
        "packet_2_nonce_kas",
        18,
        277,
        40,
        s);
    }
    return 11;
  }
  else
  {
    v13 = *(unsigned __int8 *)(a2 + 12);
    v14 = *(_DWORD *)(a1 + 784);
    if ( (v13 & 0x80) != 0 )
    {
      V_LOCK(v11);
      v51 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v51);
      v50 = 286;
    }
    else
    {
      v15 = (int *)(v14 + 8 * v13);
      v16 = *v15;
      v17 = v15[1];
      *(_DWORD *)a3 = v16;
      *(_DWORD *)(a3 + 4) = v17;
      *a7 = v16;
      if ( v16 != -1 )
      {
        v18 = (int *)(v14 + 8 * (v13 + 128));
        v19 = *(_DWORD *)(a2 + 7);
        *(_DWORD *)(a3 + 26) = *(_DWORD *)(a2 + 3);
        *(_DWORD *)(a3 + 30) = v19;
        v20 = *v18;
        v21 = v18[1];
        *(_DWORD *)(a3 + 18) = v20;
        *(_DWORD *)(a3 + 22) = v21;
        LOBYTE(v21) = *(_BYTE *)(a2 + 11);
        *(_BYTE *)(a3 + 16) = v13;
        *(_BYTE *)(a3 + 17) = v21;
        v22 = sub_12DDD8(*(unsigned __int8 *)(a2 + 6), *(_DWORD *)(a1 + 396));
        if ( v22 >= *(_DWORD *)(a1 + 304) )
        {
          v47 = rand();
          sub_12E2E4(v47, *(_DWORD *)(a1 + 304));
          v22 = v48;
        }
        *a6 = v22;
        *(_DWORD *)(a3 + 8) = v22;
        *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 10) & 0x7F;
        v23 = *(_DWORD *)(a3 + 30);
        *a5 = *(_DWORD *)(a3 + 26);
        a5[1] = v23;
        *a4 = 1;
        memset(s, 0, 0x800u);
        v24 = *(_DWORD *)(a1 + 220);
        v25 = &dword_185260[v24];
        if ( v25[4] != 999 )
        {
          ++v25[4];
          return 0;
        }
        v29 = *(_DWORD *)(a1 + 304);
        v25[4] = 0;
        if ( v29 <= 0 )
        {
          v41 = 2 * v24;
          v31 = 0;
        }
        else
        {
          v30 = *(_DWORD *)(a1 + 424);
          v57 = v24;
          v31 = 0;
          v32 = v29;
          v33 = s;
          v34 = v30 + 48 * v29;
          v35 = 0;
          for ( i = 0; ; i = *((_DWORD *)v33 + 1) )
          {
            v37 = *(_DWORD *)(v30 + 8);
            v30 += 48;
            v31 += *(_QWORD *)(v30 - 48) + __PAIR64__(*(_DWORD *)(v30 - 36), v37);
            *v33++ = *(_QWORD *)(v30 - 32) + *(_QWORD *)(v30 - 16) + __PAIR64__(i, v35);
            if ( v30 == v34 )
              break;
            v35 = *(_DWORD *)v33;
          }
          v38 = v57;
          v39 = v32;
          LOWORD(v40) = 21296;
          v41 = 2 * v57;
          if ( v31 <= 0x63 && v31 > *(_QWORD *)&dword_185260[2 * v57 + 20] )
          {
            v52 = 0;
            HIWORD(v40) = 24;
            v53 = s;
            do
            {
              v55 = *v53++;
              v54 = v55;
              v56 = *(_QWORD *)(8 * (v52 + (v38 << 8)) + v40);
              if ( v55 > v56 && v54 - v56 > 0x190 )
              {
                close_one_chip_cores_kas(a1, v52);
                v38 = *(_DWORD *)(a1 + 220);
                v39 = *(_DWORD *)(a1 + 304);
              }
              ++v52;
            }
            while ( v39 > v52 );
            v41 = 2 * v38;
            if ( v39 <= 0 )
              goto LABEL_28;
          }
          else
          {
            HIWORD(v40) = 24;
          }
          v43 = s;
          v44 = (_QWORD *)(v40 + (v38 << 11));
          v45 = &s[v39];
          do
          {
            v46 = *v43++;
            *v44++ = v46;
          }
          while ( v45 != v43 );
        }
LABEL_28:
        *(_QWORD *)&dword_185260[v41 + 20] = v31;
        return 0;
      }
      V_LOCK(a7);
      v49 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v49);
      v50 = 293;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      174,
      "packet_2_nonce_kas",
      18,
      v50,
      20,
      s);
    return 12;
  }
}

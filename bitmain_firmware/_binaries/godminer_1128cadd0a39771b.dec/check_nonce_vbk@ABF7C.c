int __fastcall check_nonce_vbk(int a1, int a2)
{
  int v2; // r6
  int *v4; // r4
  int v5; // r3
  int *v6; // r12
  unsigned int v7; // r7
  int *v8; // r8
  int v9; // r0
  int v10; // r1
  int *v11; // lr
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r1
  int v16; // r2
  unsigned int v17; // r0
  unsigned int v18; // r3
  unsigned int *v19; // r1
  int v20; // r6
  int v21; // r0
  int v22; // r6
  unsigned int v23; // r2
  unsigned int v24; // t1
  unsigned int v25; // t1
  unsigned int v26; // r2
  unsigned int v27; // r3
  int v29; // r0
  int v30; // r0
  _BYTE v31[32]; // [sp+10h] [bp-1060h] BYREF
  _BYTE v32[64]; // [sp+30h] [bp-1040h] BYREF
  _BYTE v33[4096]; // [sp+70h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 632);
  v4 = (int *)v32;
  v5 = *(unsigned __int8 *)(a2 + 29);
  v6 = (int *)(v2 + ((v5 + 64) << 6));
  v7 = *(_DWORD *)(v2 + 4 * (v5 + 5376));
  v8 = v6 + 12;
  do
  {
    v9 = *v6;
    v6 += 4;
    v10 = *(v6 - 3);
    v11 = v4;
    v12 = *(v6 - 2);
    v4 += 4;
    v13 = *(v6 - 1);
    *v11 = v9;
    v11[1] = v10;
    v11[2] = v12;
    v11[3] = v13;
  }
  while ( v6 != v8 );
  v14 = *(_DWORD *)(a2 + 24);
  v15 = v6[1];
  v16 = v6[2];
  *v4 = *v6;
  v4[1] = v15;
  v4[2] = v16;
  v32[60] = HIBYTE(v14);
  v32[63] = v14;
  v32[61] = BYTE2(v14);
  v32[62] = BYTE1(v14);
  vblake_hash(v31, v32);
  v17 = target_to_diff_vbk(v31);
  if ( v17 <= 0x1F )
  {
    V_LOCK(v17);
    v30 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v30);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_vbk/backend_vbk.c",
      154,
      "check_nonce_vbk",
      15,
      273,
      20,
      v33);
    return 2;
  }
  else
  {
    v18 = *(unsigned __int8 *)(a2 + 28);
    if ( v18 == v17 )
    {
      if ( v7 <= v18 )
      {
        v19 = (unsigned int *)v31;
        v20 = v2 + 24 * *(unsigned __int8 *)(a2 + 29) + 22528;
        v21 = v20 - 4;
        v22 = v20 + 20;
        while ( 1 )
        {
          v24 = *v19++;
          v23 = v24;
          v25 = *(_DWORD *)(v21 + 4);
          v21 += 4;
          v26 = bswap32(v23);
          v27 = bswap32(v25);
          if ( v26 > v27 )
            break;
          if ( v26 < v27 || v22 == v21 )
            return 0;
        }
      }
      return 1;
    }
    else
    {
      V_LOCK(v17);
      v29 = logfmt_raw((int)v33, 0x1000u);
      V_UNLOCK(v29);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_vbk/backend_vbk.c",
        154,
        "check_nonce_vbk",
        15,
        278,
        20,
        v33);
      return 3;
    }
  }
}

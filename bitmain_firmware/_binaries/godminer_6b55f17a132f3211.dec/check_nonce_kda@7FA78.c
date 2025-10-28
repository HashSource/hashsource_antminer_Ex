int __fastcall check_nonce_kda(int a1, int a2)
{
  int v3; // r4
  int v4; // r1
  unsigned int v5; // r6
  char *v6; // r3
  char *p_src; // r2
  int v8; // r1
  char v9; // r1
  char *v10; // r3
  char *v11; // r2
  char v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r3
  int v15; // lr
  int *v16; // r4
  char *v17; // r12
  char *v18; // lr
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  char v26; // r3
  char *v27; // r2
  char *v28; // r3
  char v29; // r1
  _DWORD *v30; // r3
  char *v31; // r2
  unsigned int v32; // t1
  unsigned int v33; // t1
  bool v34; // cf
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int src; // [sp+10h] [bp-1170h] BYREF
  int v40; // [sp+14h] [bp-116Ch] BYREF
  _DWORD v41[7]; // [sp+18h] [bp-1168h] BYREF
  int v42; // [sp+34h] [bp-114Ch] BYREF
  _DWORD v43[7]; // [sp+38h] [bp-1148h] BYREF
  int v44; // [sp+54h] [bp-112Ch] BYREF
  _BYTE dest[288]; // [sp+58h] [bp-1128h] BYREF
  _DWORD v46[7]; // [sp+178h] [bp-1008h] BYREF
  int v47; // [sp+194h] [bp-FECh] BYREF
  char v48; // [sp+198h] [bp-FE8h] BYREF
  _BYTE v49[189]; // [sp+11B7h] [bp+37h] BYREF

  v3 = *(_DWORD *)(a1 + 776);
  v4 = *(unsigned __int8 *)(a2 + 89);
  v5 = *(_DWORD *)(v3 + 4 * (v4 + 11552));
  memcpy(dest, (const void *)(v3 + 286 * v4 + 9216), 0x11Eu);
  v6 = (char *)&v40 + 3;
  p_src = (char *)&src;
  v8 = *(_DWORD *)(a2 + 84);
  src = *(_DWORD *)(a2 + 80);
  v40 = v8;
  do
  {
    v9 = *p_src;
    *p_src++ = *v6;
    *v6-- = v9;
  }
  while ( p_src < v6 );
  blake2s_init((unsigned int)v49 & 0xFFFFFFC0, 32);
  blake2s_update((unsigned int)v49 & 0xFFFFFFC0, dest, 0x116u);
  blake2s_update((unsigned int)v49 & 0xFFFFFFC0, &src, 8u);
  blake2s_final((unsigned int)v49 & 0xFFFFFFC0, v41, 32);
  v10 = (char *)&v42 + 3;
  v11 = (char *)v41;
  do
  {
    v12 = *v11;
    *v11++ = *v10;
    *v10-- = v12;
  }
  while ( v11 < v10 );
  v13 = target_to_diff_kda(v41);
  if ( v13 <= 0x27 )
  {
    V_LOCK(v13);
    v38 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      170,
      "check_nonce_kda",
      15,
      553,
      20,
      v46);
    return 2;
  }
  else
  {
    v14 = *(unsigned __int8 *)(a2 + 88);
    if ( v14 == v13 )
    {
      if ( v5 <= v14 )
      {
        v15 = *(unsigned __int8 *)(a2 + 89);
        v43[0] = v41[0];
        v43[1] = v41[1];
        v43[2] = v41[2];
        v43[3] = v41[3];
        v16 = (int *)(v3 + 32 * (v15 + 1460));
        v17 = (char *)&v44 + 3;
        v18 = (char *)v43;
        v43[4] = v41[4];
        v43[5] = v41[5];
        v43[6] = v41[6];
        v44 = v42;
        v19 = *v16;
        v20 = v16[1];
        v21 = v16[2];
        v22 = v16[3];
        v16 += 4;
        v46[0] = v19;
        v46[1] = v20;
        v46[2] = v21;
        v46[3] = v22;
        v23 = v16[1];
        v24 = v16[2];
        v25 = v16[3];
        v46[4] = *v16;
        v46[5] = v23;
        v46[6] = v24;
        v47 = v25;
        do
        {
          v26 = *v18;
          *v18++ = *v17;
          *v17-- = v26;
        }
        while ( v18 < v17 );
        v27 = (char *)&v47 + 3;
        v28 = (char *)v46;
        do
        {
          v29 = *v28;
          *v28++ = *v27;
          *v27-- = v29;
        }
        while ( v28 < v27 );
        v30 = dest;
        v31 = &v48;
        while ( 1 )
        {
          v32 = *--v30;
          v13 = v32;
          v33 = *((_DWORD *)v31 - 1);
          v31 -= 4;
          v34 = v13 >= v33;
          if ( v13 > v33 )
            break;
          if ( !v34 || v30 == v43 )
            return 0;
        }
      }
      V_LOCK(v13);
      v36 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v36);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
        170,
        "check_nonce_kda",
        15,
        567,
        20,
        v46);
      return 1;
    }
    else
    {
      V_LOCK(v13);
      v37 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v37);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
        170,
        "check_nonce_kda",
        15,
        562,
        20,
        v46);
      return 3;
    }
  }
}

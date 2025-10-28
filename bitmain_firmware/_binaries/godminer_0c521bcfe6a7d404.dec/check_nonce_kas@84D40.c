int __fastcall check_nonce_kas(int a1, int a2)
{
  unsigned int v2; // r3
  int v4; // r1
  int v5; // r8
  char *v6; // r3
  _BYTE *v7; // r2
  unsigned int v8; // r5
  char v9; // t1
  unsigned int v10; // r0
  unsigned __int8 *v11; // r2
  int v12; // r12
  int v13; // r3
  int v14; // r12
  unsigned int v15; // t1
  unsigned int v16; // t1
  bool v17; // cc
  int v18; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r0
  _BYTE v26[32]; // [sp+30h] [bp-10A0h] BYREF
  _BYTE v27[32]; // [sp+50h] [bp-1080h] BYREF
  _BYTE v28[31]; // [sp+70h] [bp-1060h] BYREF
  char v29; // [sp+8Fh] [bp-1041h] BYREF
  char v30; // [sp+AFh] [bp-1021h] BYREF
  _BYTE v31[32]; // [sp+B0h] [bp-1020h] BYREF
  _BYTE v32[4096]; // [sp+D0h] [bp-1000h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 17);
  v4 = *(unsigned __int8 *)(a2 + 16);
  if ( v2 <= 0x23 )
  {
    V_LOCK(a1);
    V_INT((int)v31, "chain");
    v21 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v21);
    v22 = 506;
    v23 = g_zc;
    LOWORD(v24) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/"
                                    "tmp/release/build/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c";
LABEL_13:
    HIWORD(v24) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c" >> 16;
    zlog(v23, v24, 174, "check_nonce_kas", 15, v22, 20, v32);
    return 2;
  }
  v5 = *(_DWORD *)(a1 + 784);
  v6 = &v29;
  v7 = v32;
  v8 = *(unsigned __int8 *)(v5 + v4 + 0x2000);
  do
  {
    v9 = *++v6;
    *--v7 = v9;
  }
  while ( v6 != &v30 );
  v10 = target_to_diff_kas((int)v31);
  if ( v10 <= 0x23 )
  {
    V_LOCK(v10);
    V_INT((int)v26, "chain");
    v25 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v25);
    v23 = g_zc;
    v22 = 552;
    LOWORD(v24) = -4372;
    goto LABEL_13;
  }
  if ( v8 > v10 )
  {
LABEL_11:
    V_LOCK(v10);
    V_INT((int)v27, "chain");
    v20 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      174,
      "check_nonce_kas",
      15,
      572,
      20,
      v32);
    return 1;
  }
  else
  {
    v11 = v31;
    v12 = v5 + 32 * (*(unsigned __int8 *)(a2 + 16) + 260);
    v13 = v12 - 1;
    v14 = v12 + 31;
    do
    {
      v15 = *v11++;
      v10 = v15;
      v16 = *(unsigned __int8 *)++v13;
      v17 = v10 > v16;
      if ( v10 < v16 )
        break;
      if ( v17 )
        goto LABEL_11;
    }
    while ( v14 != v13 );
    V_LOCK(v10);
    V_INT((int)v28, "chain");
    v18 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      174,
      "check_nonce_kas",
      15,
      575,
      20,
      v32);
    return 0;
  }
}
